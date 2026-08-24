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
  height: 28px;
  padding: 0 12px 0 10px;
  font-size: 12.5px;
  font-weight: 500;
  text-decoration: none;
  white-space: nowrap;

  color: var(--vp-c-brand-1);
  background: var(--vp-c-bg-soft);

  border: 1px solid var(--vp-c-divider);
  border-left: none;
  border-radius: 0 5px 5px 0;

  margin-left: 14px;
}

/* 1. The Pointed Left Angle */
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

/* 2. The Hole Punch Dot */
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

/* Hover States (Instant color snap, no movement) */
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
</style>
