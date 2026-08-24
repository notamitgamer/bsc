---
source: 'docs/tags.md'
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M12.586 2.586A2 2 0 0 0 11.172 2H4a2 2 0 0 0-2 2v7.172a2 2 0 0 0 .586 1.414l8.704 8.704a2.426 2.426 0 0 0 3.42 0l6.58-6.58a2.426 2.426 0 0 0 0-3.42z"/><circle cx="7.5" cy="7.5" r=".5" fill="currentColor"/></svg> Tags'
---

<script setup>
import { ref, computed } from 'vue'
import { data as tagsData } from './.vitepress/tags.data.ts'

const tagNames = Object.keys(tagsData).sort()

const activeFilter = ref(null)

const visibleTags = computed(() => {
  return activeFilter.value ? [activeFilter.value] : tagNames
})

function toggleFilter(tag) {
  activeFilter.value = activeFilter.value === tag ? null : tag
}

function humanize(tag) {
  return tag.replace(/[-_]/g, ' ').replace(/\b\w/g, (c) => c.toUpperCase())
}
</script>

# Tags

Browse pages grouped by tag. Click a tag below to filter to just that one, or click a tag chip anywhere on the site to jump straight here.

<div v-if="!tagNames.length" class="bsc-tags-empty">
  No tags found yet.
</div>

<div v-else class="bsc-filter-bar">
  <button
    v-for="tag in tagNames"
    :key="tag"
    class="bsc-filter-chip"
    :class="{ 'bsc-filter-chip-active': activeFilter === tag }"
    @click="toggleFilter(tag)"
  >{{ humanize(tag) }}</button>
</div>

<p v-if="activeFilter" class="bsc-filter-status">
  Showing only <strong>{{ humanize(activeFilter) }}</strong> —
  <a href="#" class="bsc-filter-clear" @click.prevent="activeFilter = null">clear filter</a>
</p>

<div v-for="tag in visibleTags" :key="tag" :id="tag" class="bsc-tag-section">
  <h2 class="bsc-tag-heading">
    <a class="bsc-tag" :href="`#${tag}`">{{ humanize(tag) }}</a>
    <span class="bsc-tag-count">{{ tagsData[tag].length }}</span>
  </h2>
  <ul class="bsc-tag-pages">
    <li v-for="page in tagsData[tag]" :key="page.url">
      <a :href="page.url">{{ page.title }}</a>
    </li>
  </ul>
</div>

<style scoped>
.bsc-tags-empty {
  color: var(--vp-c-text-2);
  font-size: 14px;
}

.bsc-filter-bar {
  display: flex;
  flex-wrap: wrap;
  gap: 8px;
  margin: 16px 0 8px;
}

.bsc-filter-chip {
  font: inherit;
  font-size: 13px;
  font-weight: 500;
  padding: 5px 12px;
  color: var(--vp-c-text-2);
  background: var(--vp-c-bg-soft);
  border: 1px solid var(--vp-c-divider);
  border-radius: 16px;
  cursor: pointer;
  /* Animation removed for instant hover snapping */
}

.bsc-filter-chip:hover {
  color: var(--vp-c-brand-1);
  border-color: var(--vp-c-brand-1);
}

.bsc-filter-chip-active {
  color: #ffffff;
  background: var(--vp-c-brand-1);
  border-color: var(--vp-c-brand-1);
}

.bsc-filter-status {
  font-size: 13px;
  color: var(--vp-c-text-2);
  margin: 0 0 12px;
}

.bsc-filter-clear {
  color: var(--vp-c-brand-1);
  cursor: pointer;
}

.bsc-tag-section {
  margin: 28px 0;
  padding-top: 8px;
  border-top: 1px solid var(--vp-c-divider);
}

.bsc-tag-heading {
  display: flex;
  align-items: center;
  gap: 10px;
  margin: 16px 0 10px;
  border: none;
  padding: 0;
}

.bsc-tag-count {
  font-size: 12px;
  color: var(--vp-c-text-3);
  font-weight: 400;
}

.bsc-tag {
  position: relative;
  display: inline-flex;
  align-items: center;
  height: 28px;
  padding: 0 14px 0 10px;
  font-size: 14px;
  font-weight: 500;
  line-height: 1;
  text-decoration: none;
  white-space: nowrap;

  color: var(--vp-c-brand-1);
  background: var(--vp-c-bg-soft);

  border: 1px solid var(--vp-c-divider);
  border-left: none;
  border-radius: 0 5px 5px 0;

  margin-left: 14px;
}

/* The Pointed Left Angle */
.bsc-tag::after {
  content: '';
  position: absolute;
  left: -10px;
  top: 50%;
  margin-top: -10px;
  width: 20px;
  height: 20px;

  background: inherit;

  border-left: 1px solid var(--vp-c-divider);
  border-bottom: 1px solid var(--vp-c-divider);
  border-radius: 0 0 0 3px;

  transform: rotate(45deg);
  z-index: -1;
}

/* The Hole Punch Dot */
.bsc-tag::before {
  content: '';
  position: absolute;
  left: -3px;
  top: 50%;
  margin-top: -2px;
  width: 4px;
  height: 4px;
  border-radius: 50%;
  background: var(--vp-c-brand-1);
  z-index: 1;
}

/* Hover States */
.bsc-tag:hover {
  color: #fff;
  background: var(--vp-c-brand-1);
  border-color: var(--vp-c-brand-1);
}

.bsc-tag:hover::after {
  border-color: var(--vp-c-brand-1);
}

.bsc-tag:hover::before {
  background: #fff;
}

.bsc-tag-pages {
  margin: 0;
  padding-left: 4px;
  list-style: none;
  display: flex;
  flex-wrap: wrap;
  align-items: center; /* Aligns all text directly on the same baseline */
  row-gap: 10px;
  column-gap: 20px;
}

.bsc-tag-pages li {
  margin: 0 !important; /* Forces VitePress list margins to zero */
  padding: 0;
  line-height: 1.6;
}

.bsc-tag-pages a {
  display: inline-block;
  color: var(--vp-c-brand-1);
  text-decoration: none;
  font-size: 14px;
  line-height: 1.6;
}

.bsc-tag-pages a:hover {
  text-decoration: underline;
}
</style>
