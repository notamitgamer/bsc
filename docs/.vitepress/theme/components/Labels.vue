<script setup>
import { computed } from 'vue'
import { useData } from 'vitepress'

const { frontmatter } = useData()

const tags = computed(() => {
  const raw = frontmatter.value.tags
  if (!raw) return []
  return Array.isArray(raw) ? raw.filter(Boolean) : [raw]
})

function humanize(tag) {
  return tag.replace(/[-_]/g, ' ').replace(/\b\w/g, (c) => c.toUpperCase())
}
</script>

<template>
  <div v-if="tags.length" class="bsc-labels" aria-label="Page tags">
    <a
      v-for="tag in tags"
      :key="tag"
      class="bsc-tag"
      :href="`/tags#${tag}`"
      :title="`Browse pages tagged ${humanize(tag)}`"
    >{{ humanize(tag) }}</a>
  </div>
</template>

<style scoped>
.bsc-labels {
  display: flex;
  flex-wrap: wrap;
  gap: 10px;
  margin-bottom: 16px;
}

.bsc-tag {
  position: relative;
  display: inline-flex;
  align-items: center;
  height: 26px;
  padding: 0 12px 0 20px;
  font-size: 12.5px;
  font-weight: 500;
  line-height: 1;
  text-decoration: none;
  white-space: nowrap;
  color: var(--vp-c-brand-1);
  background: var(--vp-c-bg-soft);
  border: 1px solid var(--vp-c-divider);
  border-left: none;
  clip-path: polygon(11px 0, 100% 0, 100% 100%, 11px 100%, 0 50%);
  transition: color 0.15s ease, background 0.15s ease, border-color 0.15s ease;
}

.bsc-tag::before {
  content: '';
  position: absolute;
  left: 6px;
  top: 50%;
  transform: translateY(-50%);
  width: 4px;
  height: 4px;
  border-radius: 50%;
  background: var(--vp-c-text-3);
}

.bsc-tag:hover {
  color: #ffffff;
  background: var(--vp-c-brand-1);
}

.bsc-tag:hover::before {
  background: #ffffff;
}
</style>
