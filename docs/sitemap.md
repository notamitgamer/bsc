---
title: 'Sitemap'
description: 'All pages available on BSc Code Index.'
---

# Sitemap

<script setup>
import { ref, onMounted } from 'vue'

const pages = ref([])
const loading = ref(true)
const error = ref(false)

function parseXml(text) {
  const parser = new DOMParser()
  const xml = parser.parseFromString(text, 'application/xml')
  return Array.from(xml.querySelectorAll('loc'))
    .map(loc => loc.textContent.replace('https://code.amit.is-a.dev', ''))
    .sort()
}

onMounted(async () => {
  try {
    const res = await fetch('/sitemap.xml')
    const text = await res.text()
    if (!res.ok || !text.includes('<loc>')) throw new Error('local not valid')
    pages.value = parseXml(text)
  } catch {
    try {
      const res = await fetch('https://code.amit.is-a.dev/sitemap.xml')
      pages.value = parseXml(await res.text())
    } catch {
      error.value = true
    }
  } finally {
    loading.value = false
  }
})
</script>

<div v-if="loading">Loading sitemap...</div>
<div v-else-if="error">Failed to load sitemap.</div>
<ul v-else>
  <li v-for="page in pages" :key="page">
    <a :href="page">{{ page }}</a>
  </li>
</ul>