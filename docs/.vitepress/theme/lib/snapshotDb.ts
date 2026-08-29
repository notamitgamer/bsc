// Lightweight IndexedDB wrapper for snapshots.
//
// Everything a snapshot needs — both the small metadata shown on the
// /snapshots list and the actual downloaded file content — lives in this one
// database now. There's no more Cache Storage / service-worker-owned data:
// once a snapshot's content.json payload is written to the `data` store, it's
// fully local and the viewer never needs the network again to read it.

const DB_NAME = 'bsc-snapshots-db'
const META_STORE = 'snapshots'
const DATA_STORE = 'snapshot_data'
const DB_VERSION = 2

export interface SnapshotMeta {
  id: string
  name: string
  createdAt: number
  fileCount: number
  sizeBytes: number
}

export interface SnapshotFile {
  path: string
  lang: string
  size: number
  content: string
}

function openDb(): Promise<IDBDatabase> {
  return new Promise((resolve, reject) => {
    const req = indexedDB.open(DB_NAME, DB_VERSION)
    req.onupgradeneeded = () => {
      const db = req.result
      if (!db.objectStoreNames.contains(META_STORE)) {
        db.createObjectStore(META_STORE, { keyPath: 'id' })
      }
      if (!db.objectStoreNames.contains(DATA_STORE)) {
        db.createObjectStore(DATA_STORE, { keyPath: 'id' })
      }
      // Snapshots taken by the old (pre-v2) build used Cache Storage for
      // content and a slightly different meta shape (pageCount/assetCount).
      // They won't have a matching `data` row, so the viewer will just show
      // "not found" for them — no migration needed, they were never durable
      // beyond a single browser session's cache anyway.
    }
    req.onsuccess = () => resolve(req.result)
    req.onerror = () => reject(req.error)
  })
}

export async function listSnapshots(): Promise<SnapshotMeta[]> {
  const db = await openDb()
  return new Promise((resolve, reject) => {
    const tx = db.transaction(META_STORE, 'readonly')
    const req = tx.objectStore(META_STORE).getAll()
    req.onsuccess = () => resolve((req.result as SnapshotMeta[]).sort((a, b) => b.createdAt - a.createdAt))
    req.onerror = () => reject(req.error)
  })
}

export async function putSnapshot(meta: SnapshotMeta): Promise<void> {
  const db = await openDb()
  return new Promise((resolve, reject) => {
    const tx = db.transaction(META_STORE, 'readwrite')
    tx.objectStore(META_STORE).put(meta)
    tx.oncomplete = () => resolve()
    tx.onerror = () => reject(tx.error)
  })
}

export async function deleteSnapshotMeta(id: string): Promise<void> {
  const db = await openDb()
  return new Promise((resolve, reject) => {
    const tx = db.transaction(META_STORE, 'readwrite')
    tx.objectStore(META_STORE).delete(id)
    tx.oncomplete = () => resolve()
    tx.onerror = () => reject(tx.error)
  })
}

export async function putSnapshotData(id: string, files: SnapshotFile[]): Promise<void> {
  const db = await openDb()
  return new Promise((resolve, reject) => {
    const tx = db.transaction(DATA_STORE, 'readwrite')
    tx.objectStore(DATA_STORE).put({ id, files })
    tx.oncomplete = () => resolve()
    tx.onerror = () => reject(tx.error)
  })
}

export async function getSnapshotData(id: string): Promise<SnapshotFile[] | undefined> {
  const db = await openDb()
  return new Promise((resolve, reject) => {
    const tx = db.transaction(DATA_STORE, 'readonly')
    const req = tx.objectStore(DATA_STORE).get(id)
    req.onsuccess = () => resolve(req.result?.files)
    req.onerror = () => reject(req.error)
  })
}

export async function deleteSnapshotData(id: string): Promise<void> {
  const db = await openDb()
  return new Promise((resolve, reject) => {
    const tx = db.transaction(DATA_STORE, 'readwrite')
    tx.objectStore(DATA_STORE).delete(id)
    tx.oncomplete = () => resolve()
    tx.onerror = () => reject(tx.error)
  })
}
