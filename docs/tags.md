---
title: Tags
description: Browse every page by tag.
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
  height: 30px;
  padding: 0 14px 0 22px;
  font-size: 14px;
  font-weight: 500;
  line-height: 1;
  text-decoration: none;
  white-space: nowrap;
  color: var(--vp-c-brand-1);
  background: var(--vp-c-bg-soft);
  border: 1px solid var(--vp-c-divider);
  border-left: none;
  clip-path: polygon(12px 0, 100% 0, 100% 100%, 12px 100%, 0 50%);
}

.bsc-tag::before {
  content: '';
  position: absolute;
  left: 7px;
  top: 50%;
  transform: translateY(-50%);
  width: 4px;
  height: 4px;
  border-radius: 50%;
  background: var(--vp-c-text-3);
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
