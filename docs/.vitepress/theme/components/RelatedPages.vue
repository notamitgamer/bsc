<script setup>
import { computed } from 'vue'
import { useData, useRoute } from 'vitepress'
import { data as tagsData } from '../../tags.data.ts'

const MAX_RELATED = 6

const { frontmatter } = useData()
const route = useRoute()

function stripTitleIcon(title) {
  if (!title) return title
  return title.replace(/<svg[\s\S]*?<\/svg>\s*/i, '').trim()
}

const related = computed(() => {
  const tags = frontmatter.value.tags
  if (!Array.isArray(tags) || tags.length === 0) return []

  const currentPath = route.path

  const seen = new Map()

  for (const tag of tags) {
    const pages = tagsData[tag]
    if (!pages) continue
    for (const p of pages) {
      if (seen.has(p.url)) continue
      if (p.url === currentPath) continue
      seen.set(p.url, { title: stripTitleIcon(p.title), url: p.url, tag })
    }
  }

  return Array.from(seen.values()).slice(0, MAX_RELATED)
})
</script>

<template>
  <div v-if="related.length" class="bsc-related">
    <h3 class="bsc-related-heading">Related pages</h3>
    <ul class="bsc-related-list">
      <li v-for="item in related" :key="item.url">
        <a :href="item.url">{{ item.title }}</a>
      </li>
    </ul>
  </div>
</template>

<style scoped>
.bsc-related {
  margin-top: 24px;
  margin-bottom: 24px;
  padding-top: 16px;
  border-top: 1px solid var(--vp-c-divider);
}

.bsc-related-heading {
  margin: 0 0 8px;
  font-size: 13px;
  font-weight: 600;
  color: var(--vp-c-text-2);
  border: none;
  padding: 0;
}

.bsc-related-list {
  margin: 0;
  padding-left: 0;
  list-style: none;
  display: flex;
  flex-direction: column;
  gap: 4px;
}

.bsc-related-list a {
  font-size: 14px;
  color: var(--vp-c-text-1);
  text-decoration: none;
}

.bsc-related-list a:hover {
  color: var(--vp-c-brand-1);
  text-decoration: underline;
}
</style>
