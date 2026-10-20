<script setup>
import { computed } from 'vue'
import { useRoute } from 'vitepress'
import { data } from '../../semesters.data'

const route = useRoute()

const current = computed(() => {
  const m = route.path.match(/^\/semester_(\d+)\/?(index)?(\.html)?$/)
  if (!m) return null
  return data.semesters.find((s) => s.sem === Number(m[1])) || null
})

const labels = { archived: 'Archived', active: 'Active', pending: 'Pending' }
</script>

<template>
  <div v-if="current" class="sem-progress" :class="current.status">
    <div class="sp-top">
      <span class="sp-pos">Semester {{ current.sem }} of {{ data.total }}</span>
      <span class="sp-chip">{{ labels[current.status] || current.status }}</span>
      <span v-if="current.files" class="sp-count">
        {{ current.files }} {{ current.files === 1 ? 'file' : 'files' }}
        <template v-if="current.folders">in {{ current.folders }} {{ current.folders === 1 ? 'folder' : 'folders' }}</template>
      </span>
    </div>
    <div class="sp-bar" role="img" :aria-label="`Semester ${current.sem} of ${data.total}`">
      <span
        v-for="s in data.semesters"
        :key="s.sem"
        class="sp-seg"
        :class="[s.status, { here: s.sem === current.sem }]"
      ></span>
    </div>
  </div>
</template>

<style scoped>
.sem-progress {
  margin: 0 0 1.25rem;
  padding: 12px 16px 14px;
  border: 1px solid var(--vp-c-divider);
  border-radius: 10px;
  background: var(--vp-c-bg-soft);
}
.sp-top { display: flex; flex-wrap: wrap; align-items: center; gap: 6px 12px; margin-bottom: 10px; font-size: 13px; }
.sp-pos { font-weight: 600; color: var(--vp-c-text-1); }
.sp-count { color: var(--vp-c-text-3); margin-left: auto; }
.sp-chip {
  font-size: 12px; font-weight: 500; padding: 1px 9px; border-radius: 999px;
  border: 1px solid currentColor; color: var(--vp-c-text-3);
}
.sem-progress.archived .sp-chip { color: var(--vp-c-green-1); }
.sem-progress.active .sp-chip { background: var(--vp-c-brand-1); border-color: var(--vp-c-brand-1); color: var(--vp-c-bg); }

.sp-bar { display: grid; grid-auto-flow: column; grid-auto-columns: 1fr; gap: 4px; }
.sp-seg { height: 6px; border-radius: 3px; background: var(--vp-c-divider); opacity: 0.7; }
.sp-seg.archived { background: var(--vp-c-green-1); opacity: 0.8; }
.sp-seg.active { background: var(--vp-c-brand-1); opacity: 1; }
.sp-seg.here { box-shadow: 0 0 0 2px var(--vp-c-bg-soft), 0 0 0 3px var(--vp-c-text-3); opacity: 1; }
</style>
