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
  /* Reduced left padding since the point adds visual space */
  padding: 0 12px 0 10px;
  font-size: 12.5px;
  font-weight: 500;
  text-decoration: none;
  white-space: nowrap;

  color: var(--vp-c-brand-1);
  background: var(--vp-c-bg-soft);

  border: 1px solid var(--vp-c-divider);
  /* Removes the flat left border so the point can connect seamlessly */
  border-left: none;
  border-radius: 0 5px 5px 0;

  /* Adds outer margin to make room for the point so it doesn't overlap tags */
  margin-left: 14px;

  transition:
    color 0.15s ease,
    background 0.15s ease,
    border-color 0.15s ease,
    transform 0.15s ease;
}

/* 1. The Pointed Left Angle */
.bsc-tag::after {
  content: '';
  position: absolute;
  /* Pulls the square exactly halfway out to form the left point */
  left: -10px;
  top: 50%;
  /* Vertically centers a 20px square */
  margin-top: -10px;
  width: 20px;
  height: 20px;

  /* 'inherit' magically copies the parent's hover background perfectly */
  background: inherit;

  /* Apply borders only to the left and bottom edges */
  border-left: 1px solid var(--vp-c-divider);
  border-bottom: 1px solid var(--vp-c-divider);
  /* Slightly rounds the sharp tip */
  border-radius: 0 0 0 3px;

  /* Rotating 45deg turns the left/bottom borders into a perfect '<' shape */
  transform: rotate(45deg);
  
  transition: border-color 0.15s ease;
  z-index: -1;
}

/* 2. The Hole Punch Dot */
.bsc-tag::before {
  content: '';
  position: absolute;
  /* Centered perfectly inside the neck of the triangle */
  left: -3px;
  top: 50%;
  margin-top: -2px;
  width: 4px;
  height: 4px;
  border-radius: 50%;
  background: var(--vp-c-brand-1);
  transition: background 0.15s ease;
  z-index: 1;
}

/* Hover States */
.bsc-tag:hover {
  color: #fff;
  background: var(--vp-c-brand-1);
  border-color: var(--vp-c-brand-1);
  transform: translateY(-1px);
}

.bsc-tag:hover::after {
  /* Background auto-updates due to 'inherit', just need to color the borders */
  border-color: var(--vp-c-brand-1);
}

.bsc-tag:hover::before {
  background: #fff;
}
</style>