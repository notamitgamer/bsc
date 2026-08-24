---
source: 'docs/tags.md'
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round"><path d="M12.586 2.586A2 2 0 0 0 11.172 2H4a2 2 0 0 0-2 2v7.172a2 2 0 0 0 .586 1.414l8.704 8.704a2.426 2.426 0 0 0 3.42 0l6.58-6.58a2.426 2.426 0 0 0 0-3.42z"/><circle cx="7.5" cy="7.5" r=".5" fill="currentColor"/></svg> Tags'
---

<script setup>
import { data as tagsData } from './.vitepress/tags.data.ts'

const tagNames = Object.keys(tagsData).sort()

function humanize(tag) {
  return tag.replace(/[-_]/g, ' ').replace(/\b\w/g, (c) => c.toUpperCase())
}
</script>

# Tags

Browse pages grouped by tag. Click any tag chip across the site to jump here.

<div v-if="!tagNames.length" class="bsc-tags-empty">
  No tags found yet.
</div>

<div v-for="tag in tagNames" :key="tag" :id="tag" class="bsc-tag-section">
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
}

.bsc-tag-pages li {
  padding: 4px 0;
}

.bsc-tag-pages a {
  color: var(--vp-c-text-1);
  text-decoration: none;
  font-size: 14px;
}

.bsc-tag-pages a:hover {
  color: var(--vp-c-brand-1);
  text-decoration: underline;
}
</style>
