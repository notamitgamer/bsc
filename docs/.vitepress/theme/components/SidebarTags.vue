<script setup>
import { computed } from 'vue'
import { data as tagsData } from '../../tags.data.ts'

const MAX_SHOWN = 12

function humanize(tag) {
  return tag.replace(/[-_]/g, ' ').replace(/\b\w/g, (c) => c.toUpperCase())
}

const topTags = computed(() => {
  return Object.entries(tagsData)
    .map(([tag, pages]) => ({ tag, count: pages.length }))
    .sort((a, b) => b.count - a.count || a.tag.localeCompare(b.tag))
    .slice(0, MAX_SHOWN)
})

const hasMore = computed(() => Object.keys(tagsData).length > MAX_SHOWN)
</script>

<template>
  <div v-if="topTags.length" class="bsc-sidebar-tags">
    <p class="bsc-sidebar-tags-heading">Tags</p>
    <div class="bsc-sidebar-tags-list">
      <a
        v-for="t in topTags"
        :key="t.tag"
        class="bsc-sidebar-tag"
        :href="`/tags#${t.tag}`"
      >{{ humanize(t.tag) }}</a>
    </div>
    <a v-if="hasMore" class="bsc-sidebar-tags-more" href="/tags">View all tags →</a>
  </div>
</template>

<style scoped>
.bsc-sidebar-tags {
  margin-top: 16px;
  padding: 12px 0 0;
  border-top: 1px solid var(--vp-c-divider);
}

.bsc-sidebar-tags-heading {
  margin: 0 0 8px;
  padding: 0 24px;
  font-size: 12px;
  font-weight: 600;
  text-transform: uppercase;
  letter-spacing: 0.02em;
  color: var(--vp-c-text-2);
}

.bsc-sidebar-tags-list {
  display: flex;
  flex-wrap: wrap;
  gap: 6px;
  padding: 0 24px;
}

.bsc-sidebar-tag {
  font-size: 12px;
  padding: 3px 8px;
  color: var(--vp-c-text-2);
  background: var(--vp-c-bg-soft);
  border: 1px solid var(--vp-c-divider);
  border-radius: 4px;
  text-decoration: none;
  transition: color 0.15s ease, border-color 0.15s ease;
}

.bsc-sidebar-tag:hover {
  color: var(--vp-c-brand-1);
  border-color: var(--vp-c-brand-1);
}

.bsc-sidebar-tags-more {
  display: block;
  margin-top: 8px;
  padding: 0 24px;
  font-size: 12px;
  color: var(--vp-c-brand-1);
  text-decoration: none;
}

.bsc-sidebar-tags-more:hover {
  text-decoration: underline;
}
</style>
