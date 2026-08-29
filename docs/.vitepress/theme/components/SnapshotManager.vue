<script setup>
import { ref, computed, onMounted } from 'vue'
import { listSnapshots, putSnapshot, putSnapshotData, deleteSnapshotMeta, deleteSnapshotData } from '../lib/snapshotDb'

const snapshots = ref([])
const isCapturing = ref(false)
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

async function takeSnapshot() {
  error.value = ''
  isCapturing.value = true
  const id = `${Date.now()}-${Math.random().toString(36).slice(2, 8)}`

  try {
    const res = await fetch('/content.json', { cache: 'no-store' })
    if (!res.ok) throw new Error(`Could not download content.json (${res.status})`)
    const files = await res.json()
    if (!Array.isArray(files)) throw new Error('content.json was not the expected format')

    const sizeBytes = files.reduce((sum, f) => sum + (f.size || 0), 0)

    await putSnapshotData(id, files)
    await putSnapshot({
      id,
      name: `Snapshot – ${new Date().toLocaleDateString()}`,
      createdAt: Date.now(),
      fileCount: files.length,
      sizeBytes,
    })

    await refresh()
  } catch (e) {
    error.value = e?.message || 'Snapshot failed.'
  } finally {
    isCapturing.value = false
  }
}

function viewSnapshot(id) {
  window.open(`/snapshots/view/?id=${encodeURIComponent(id)}`, '_blank', 'noopener')
}

async function removeSnapshot(id) {
  if (!confirm('Delete this snapshot? This cannot be undone.')) return
  await deleteSnapshotData(id)
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
      Snapshots save a full offline copy of every file's content into your browser
      (separate from normal caching — the live site keeps auto-updating as usual).
      Take one before you go offline, and come back to it any time from this page.
    </p>

    <button
      v-if="!isCapturing"
      class="capture-btn"
      @click="takeSnapshot"
    >
      📸 Take snapshot now
    </button>

    <div v-else class="capture-btn capture-progress">
      Downloading content…
    </div>

    <p v-if="error" class="error">{{ error }}</p>

    <div v-if="snapshots.length" class="snapshot-list">
      <div v-for="s in snapshots" :key="s.id" class="snapshot-item">
        <div class="snapshot-info">
          <div class="snapshot-name">{{ s.name }}</div>
          <div class="snapshot-meta">
            {{ fmtDate(s.createdAt) }} · {{ s.fileCount }} files · {{ fmtBytes(s.sizeBytes) }}
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
  min-width: 260px;
  height: 40px;
  display: inline-flex;
  align-items: center;
  justify-content: center;
}
.capture-progress {
  cursor: default;
  opacity: 0.8;
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
