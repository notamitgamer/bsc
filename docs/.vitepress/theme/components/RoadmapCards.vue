<script setup>
import { computed } from 'vue'
import { useData } from 'vitepress'

// Data lives in docs/index.md frontmatter under `roadmap:`
// status: archived | active | pending
const { frontmatter } = useData()

const labels = { archived: 'Archived', active: 'Active', pending: 'Pending' }

const years = computed(() => {
  const list = frontmatter.value.roadmap || []
  const out = []
  for (let i = 0; i < list.length; i += 2) {
    out.push({ year: i / 2 + 1, items: list.slice(i, i + 2) })
  }
  return out
})
</script>

<template>
  <div class="roadmap">
    <section
      v-for="y in years"
      :key="y.year"
      class="rm-year"
      :class="{ 'is-now': y.items.some((s) => s.status === 'active') }"
      :aria-label="`Year ${y.year}`"
    >
      <div class="rm-year-label">Year {{ y.year }}</div>
      <a
        v-for="s in y.items"
        :key="s.sem"
        class="rm-card"
        :class="s.status"
        :href="`/semester_${s.sem}/`"
      >
        <div class="rm-head">
          <h3>Semester {{ s.sem }}</h3>
          <span class="rm-chip">
            <span v-if="s.status === 'active'" class="rm-dot"></span>
            <template v-else-if="s.status === 'archived'">&#10003;&nbsp;</template>
            {{ labels[s.status] || s.status }}
          </span>
        </div>
        <div v-if="s.focus && s.focus.length" class="rm-tags">
          <span v-for="f in s.focus" :key="f" class="rm-tag">{{ f }}</span>
        </div>
        <p v-else class="rm-note">Upcoming</p>
      </a>
    </section>
  </div>
</template>

<style scoped>
.roadmap { margin: 1.5rem 0 2rem; }

.rm-year {
  display: grid;
  grid-template-columns: 4.5rem 1fr 1fr;
  gap: 14px;
  padding: 18px 0;
  border-top: 1px solid var(--vp-c-divider);
}
.rm-year:last-child { border-bottom: 1px solid var(--vp-c-divider); }

.rm-year-label {
  font-size: 13px;
  font-weight: 500;
  color: var(--vp-c-text-3);
  padding-top: 14px;
}
.rm-year.is-now .rm-year-label { color: var(--vp-c-brand-1); }

.rm-card {
  display: flex;
  flex-direction: column;
  gap: 10px;
  min-height: 108px;
  padding: 14px 16px 16px;
  border: 1px solid var(--vp-c-divider);
  border-radius: 10px;
  background: var(--vp-c-bg-soft);
  color: inherit;
  text-decoration: none !important;
  transition: border-color 0.15s;
}
.rm-card:hover { border-color: var(--vp-c-text-3); }
.rm-card:focus-visible { outline: 2px solid var(--vp-c-brand-1); outline-offset: 3px; }

.rm-head { display: flex; justify-content: space-between; align-items: center; gap: 8px; }
.rm-head h3 { margin: 0; padding: 0; border: none; font-size: 1rem; font-weight: 600; letter-spacing: 0; line-height: 1.4; }

.rm-chip {
  display: inline-flex;
  align-items: center;
  gap: 6px;
  font-size: 12px;
  font-weight: 500;
  padding: 2px 9px;
  border-radius: 999px;
  border: 1px solid currentColor;
  white-space: nowrap;
}

.rm-tags { display: flex; flex-wrap: wrap; gap: 6px; margin-top: auto; }
.rm-tag {
  font-family: var(--vp-font-family-mono);
  font-size: 12px;
  padding: 1px 8px;
  border-radius: 6px;
  background: var(--vp-c-bg-elv);
  color: var(--vp-c-text-2);
}
.rm-note { margin: auto 0 0 !important; font-size: 13px; color: var(--vp-c-text-3); }

.rm-card.archived .rm-chip { color: var(--vp-c-green-1); }

.rm-card.pending { background: transparent; border-style: dashed; }
.rm-card.pending h3 { color: var(--vp-c-text-2); }
.rm-card.pending .rm-chip { color: var(--vp-c-text-3); }

.rm-card.active {
  border-color: var(--vp-c-brand-1);
  background: color-mix(in srgb, var(--vp-c-brand-1) 9%, var(--vp-c-bg-soft));
  box-shadow: 0 0 0 3px color-mix(in srgb, var(--vp-c-brand-1) 16%, transparent);
}
.rm-card.active .rm-chip { background: var(--vp-c-brand-1); border-color: var(--vp-c-brand-1); color: var(--vp-c-bg); }
.rm-card.active .rm-tag { background: color-mix(in srgb, var(--vp-c-brand-1) 16%, var(--vp-c-bg-elv)); color: var(--vp-c-text-1); }

.rm-dot { width: 6px; height: 6px; border-radius: 50%; background: currentColor; animation: rm-pulse 2s ease-in-out infinite; }
@keyframes rm-pulse { 50% { opacity: 0.35; } }
@media (prefers-reduced-motion: reduce) { .rm-dot { animation: none; } .rm-card { transition: none; } }

@media (max-width: 640px) {
  .rm-year { grid-template-columns: 1fr; gap: 10px; padding: 16px 0; }
  .rm-year-label { padding-top: 0; }
}
</style>
