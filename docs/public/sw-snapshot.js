// sw-snapshot.js
//
// Registered on every page load (see theme/index.ts) regardless of which page
// the user landed on. It does two things ONLY:
//
//   1. Keeps a small "shell" cache of the /snapshots page itself, so that page
//      is reachable offline even if the visitor never had the main site cached.
//   2. Serves pages/assets for /snapshots/view/<id>/... from that snapshot's
//      own dedicated cache (created by SnapshotManager.vue when a snapshot is taken).
//
// It never intercepts any other request. The main site's own caching/update
// behavior (e.g. the deploy-id banner) is completely untouched.

const SHELL_CACHE = 'bsc-snapshot-shell-v1'
const SNAPSHOT_PREFIX = 'snapshot-'
const VIEW_PATH_RE = /^\/snapshots\/view\/([^/]+)\/?(.*)$/

self.addEventListener('install', (event) => {
  self.skipWaiting()
  event.waitUntil(cacheSnapshotsShell())
})

self.addEventListener('activate', (event) => {
  event.waitUntil(self.clients.claim())
})

async function cacheSnapshotsShell() {
  try {
    const cache = await caches.open(SHELL_CACHE)
    const shellUrl = '/snapshots'
    const res = await fetch(shellUrl, { cache: 'no-store' })
    if (!res || !res.ok) return
    const html = await res.clone().text()
    await cache.put(shellUrl, res)

    // Pull same-origin script/style/link assets referenced by the page so the
    // whole shell (not just the bare HTML) works offline.
    const urls = new Set()
    const attrRe = /(?:src|href)="([^"]+)"/g
    let m
    while ((m = attrRe.exec(html))) {
      const u = m[1]
      if (u.startsWith('/') && !u.startsWith('//')) urls.add(u)
    }
    await Promise.all(
      [...urls].map(async (u) => {
        try {
          const r = await fetch(u, { cache: 'no-store' })
          if (r && r.ok) await cache.put(u, r)
        } catch (_) {
          /* best-effort */
        }
      })
    )
  } catch (_) {
    /* best-effort, never block install */
  }
}

self.addEventListener('fetch', (event) => {
  const url = new URL(event.request.url)
  if (url.origin !== self.location.origin) return

  const viewMatch = url.pathname.match(VIEW_PATH_RE)
  if (viewMatch) {
    event.respondWith(handleSnapshotView(viewMatch[1], '/' + viewMatch[2]))
    return
  }

  if (url.pathname === '/snapshots' || url.pathname === '/snapshots/') {
    event.respondWith(handleShellRequest(event.request))
    return
  }

  // Everything else: don't touch it, let it behave exactly as it does today.
})

async function handleShellRequest(request) {
  try {
    return await fetch(request)
  } catch (_) {
    const cache = await caches.open(SHELL_CACHE)
    const cached = await cache.match('/snapshots')
    return cached || new Response('Offline and no cached shell available.', { status: 503 })
  }
}

async function handleSnapshotView(id, path) {
  const cacheName = SNAPSHOT_PREFIX + id
  const cache = await caches.open(cacheName)

  // Normalize: "" or "/" -> "/", strip trailing slash otherwise for lookup,
  // but try a couple of variants since snapshots are keyed by clean-URL paths.
  const candidates = new Set([path])
  if (path === '/' ) candidates.add('/')
  if (path.endsWith('/')) candidates.add(path.slice(0, -1) || '/')
  else candidates.add(path + '/')
  candidates.add('/')

  for (const p of candidates) {
    const hit = await cache.match(p)
    if (hit) return hit
  }

  // Fall back to any same-name asset (covers hashed asset paths stored verbatim).
  const assetHit = await cache.match(path)
  if (assetHit) return assetHit

  return new Response(
    `<!doctype html><meta charset="utf-8"><title>Not in snapshot</title>
     <p>This page wasn't captured in this snapshot. <a href="/snapshots">Back to snapshots</a>.</p>`,
    { status: 404, headers: { 'Content-Type': 'text/html' } }
  )
}
