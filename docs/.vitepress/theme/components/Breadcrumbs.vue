<script setup>
import { computed } from 'vue'
import { useRoute, useData } from 'vitepress'

const route = useRoute()
const { page, theme } = useData()

// Turn "semester_2/tuition/file-name" into readable, linkable crumbs
const crumbs = computed(() => {
  const path = route.path
    .replace(/\.html$/, '')
    .replace(/^\/|\/$/g, '')

  if (!path || path === 'index') return []

  const segments = path.split('/').filter(Boolean)
  const result = []
  let accPath = ''

  segments.forEach((seg, i) => {
    accPath += '/' + seg
    const isLast = i === segments.length - 1

    // Last segment: use the real page title if available
    let label = isLast && page.value.title
      ? page.value.title
      : humanize(seg)

    result.push({
      label,
      link: isLast ? null : accPath + '/',
    })
  })

  return result
})

function humanize(slug) {
  return slug
    .replace(/[-_]/g, ' ')
    .replace(/\b\w/g, (c) => c.toUpperCase())
}
</script>

<template>
  <nav v-if="crumbs.length" class="bsc-breadcrumbs" aria-label="Breadcrumb">
    <ol>
      <li>
        <a href="/" class="crumb-link">Home</a>
        <span class="crumb-sep">/</span>
      </li>
      <li v-for="(crumb, i) in crumbs" :key="i">
        <a v-if="crumb.link" :href="crumb.link" class="crumb-link">{{ crumb.label }}</a>
        <span v-else class="crumb-current">{{ crumb.label }}</span>
        <span v-if="i < crumbs.length - 1" class="crumb-sep">/</span>
      </li>
    </ol>
  </nav>
</template>

<style scoped>
.bsc-breadcrumbs {
  margin-bottom: 16px;
  font-size: 13px;
  overflow-x: auto;
  white-space: nowrap;
  scrollbar-width: none;
}

.bsc-breadcrumbs::-webkit-scrollbar {
  display: none;
}

.bsc-breadcrumbs ol {
  display: flex;
  align-items: center;
  list-style: none;
  margin: 0;
  padding: 0;
}

.bsc-breadcrumbs li {
  display: flex;
  align-items: center;
}

.crumb-link {
  color: var(--vp-c-text-2);
  text-decoration: none;
  transition: color 0.15s ease;
}

.crumb-link:hover {
  color: var(--vp-c-brand-1);
}

.crumb-current {
  color: var(--vp-c-text-1);
  font-weight: 500;
}

.crumb-sep {
  margin: 0 8px;
  color: var(--vp-c-divider);
}
</style>