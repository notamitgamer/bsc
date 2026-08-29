<script setup>
import { ref, onMounted } from 'vue'
import { listSnapshots, putSnapshot, deleteSnapshotMeta } from '../lib/snapshotDb'

const snapshots = ref([])
const isCapturing = ref(false)
const progress = ref({ done: 0, total: 0, label: '' })
const error = ref('')

onMounted(refresh)

async function refresh() {
  snapshots.value = await listSnapshots()
}

function fmtBytes(n) {
  if (!n) return '0 B'
  const units = ['B', 'KB', 'MB', 'GB']
  let i = 0
  while (n >= 1024 && i < units.length - 1) { n /= 1024; i++ }
  return `${n.toFixed(1)} ${units[i]}`
}

function fmtDate(ts) {
  return new Date(ts).toLocaleString(undefined, { dateStyle: 'medium', timeStyle: 'short' })
}

async function getPagePaths() {
  const res = await fetch('/sitemap.xml')
  if (!res.ok) throw new Error('Could not read /sitemap.xml')
  const xml = await res.text()
  const locs = [...xml.matchAll(/<loc>([^<]+)<\/loc>/g)].map((m) => m[1])
  return locs.map((loc) => {
    try {
      return new URL(loc).pathname
    } catch {
      return null
    }
  }).filter(Boolean)
}

function extractAssetUrls(html) {
  const urls = new Set()
  const re = /(?:src|href)="([^"]+)"/g
  let m
  while ((m = re.exec(html))) {
    const u = m[1]
    if (u.startsWith('/') && !u.startsWith('//')) urls.add(u)
  }
  return urls
}

async function takeSnapshot() {
  error.value = ''
  isCapturing.value = true
  const id = `${Date.now()}-${Math.random().toString(36).slice(2, 8)}`
  const cacheName = `snapshot-${id}`
  let sizeBytes = 0
  let assetUrls = new Set()

  try {
    const pagePaths = await getPagePaths()
    progress.value = { done: 0, total: pagePaths.length, label: 'Fetching pages…' }

    const cache = await caches.open(cacheName)

    for (const path of pagePaths) {
      try {
        const res = await fetch(path, { cache: 'no-store' })
        if (res && res.ok) {
          const clone = res.clone()
          const html = await clone.text()
          sizeBytes += html.length
          extractAssetUrls(html).forEach((u) => assetUrls.add(u))
          await cache.put(path, res)
        }
      } catch (_) {
        /* skip page that failed, continue capturing the rest */
      }
      progress.value.done++
    }

    const assetList = [...assetUrls]
    progress.value = { done: 0, total: assetList.length, label: 'Fetching assets…' }
    for (const url of assetList) {
      try {
        const res = await fetch(url, { cache: 'no-store' })
        if (res && res.ok) {
          const buf = await res.clone().arrayBuffer()
          sizeBytes += buf.byteLength
          await cache.put(url, res)
        }
      } catch (_) {
        /* skip */
      }
      progress.value.done++
    }

    await putSnapshot({
      id,
      name: `Snapshot – ${new Date().toLocaleDateString()}`,
      createdAt: Date.now(),
      pageCount: pagePaths.length,
      assetCount: assetList.length,
      sizeBytes,
    })

    await refresh()
  } catch (e) {
    error.value = e?.message || 'Snapshot failed.'
    // best-effort cleanup of a partial cache
    try { await caches.delete(cacheName) } catch (_) {}
  } finally {
    isCapturing.value = false
    progress.value = { done: 0, total: 0, label: '' }
  }
}

function viewSnapshot(id) {
  window.open(`/snapshots/view/${id}/`, '_blank', 'noopener')
}

async function removeSnapshot(id) {
  if (!confirm('Delete this snapshot? This cannot be undone.')) return
  await caches.delete(`snapshot-${id}`)
  await deleteSnapshotMeta(id)
  await refresh()
}

async function renameSnapshot(snap) {
  const name = prompt('Snapshot name', snap.name)
  if (!name) return
  await putSnapshot({ ...snap, name })
  await refresh()
}
</script>

<template>
  <div class="snapshot-manager">
    <p class="intro">
      Snapshots save a fully offline, point-in-time copy of the site into your browser
      (separate from normal caching — the live site keeps auto-updating as usual).
      Take one before you go offline, and come back to it any time from this page.
    </p>

    <button class="capture-btn" :disabled="isCapturing" @click="takeSnapshot">
      <span v-if="!isCapturing">📸 Take snapshot now</span>
      <span v-else>Capturing… {{ progress.label }} ({{ progress.done }}/{{ progress.total }})</span>
    </button>

    <p v-if="error" class="error">{{ error }}</p>

    <div v-if="snapshots.length" class="snapshot-list">
      <div v-for="s in snapshots" :key="s.id" class="snapshot-item">
        <div class="snapshot-info">
          <div class="snapshot-name">{{ s.name }}</div>
          <div class="snapshot-meta">
            {{ fmtDate(s.createdAt) }} · {{ s.pageCount }} pages · {{ s.assetCount }} assets · {{ fmtBytes(s.sizeBytes) }}
          </div>
        </div>
        <div class="snapshot-actions">
          <button @click="viewSnapshot(s.id)">View</button>
          <button @click="renameSnapshot(s)">Rename</button>
          <button class="danger" @click="removeSnapshot(s.id)">Delete</button>
        </div>
      </div>
    </div>
    <p v-else class="empty">No snapshots yet.</p>
  </div>
</template>

<style scoped>
.snapshot-manager {
  max-width: 720px;
}
.intro {
  color: var(--vp-c-text-2);
  font-size: 14px;
  margin-bottom: 16px;
}
.capture-btn {
  background: var(--vp-c-brand-1);
  color: #fff;
  border: none;
  border-radius: 8px;
  padding: 10px 18px;
  font-weight: 600;
  cursor: pointer;
  margin-bottom: 20px;
}
.capture-btn:disabled {
  opacity: 0.7;
  cursor: default;
}
.error {
  color: var(--vp-c-danger-1, #d33);
  font-size: 13px;
}
.snapshot-list {
  display: flex;
  flex-direction: column;
  gap: 10px;
}
.snapshot-item {
  display: flex;
  align-items: center;
  justify-content: space-between;
  gap: 12px;
  padding: 12px 14px;
  border: 1px solid var(--vp-c-divider);
  border-radius: 8px;
}
.snapshot-name {
  font-weight: 600;
}
.snapshot-meta {
  font-size: 12.5px;
  color: var(--vp-c-text-2);
}
.snapshot-actions {
  display: flex;
  gap: 6px;
  flex-shrink: 0;
}
.snapshot-actions button {
  font-size: 12.5px;
  padding: 5px 10px;
  border-radius: 6px;
  border: 1px solid var(--vp-c-divider);
  background: var(--vp-c-bg-soft);
  cursor: pointer;
}
.snapshot-actions button.danger {
  color: #d33;
  border-color: #d33;
}
.empty {
  color: var(--vp-c-text-2);
  font-size: 14px;
}
</style>
