<template>
  <ul class="md-links">
    <li>
      <a :href="rawUrl" target="_blank" rel="noopener">
        <svg class="md-links-icon" viewBox="0 0 208 128" fill="none" xmlns="http://www.w3.org/2000/svg">
          <rect x="2" y="2" width="204" height="124" rx="6" stroke="currentColor" stroke-width="8"/>
          <path d="M30 98V30h20l20 25 20-25h20v68H90V59L70 84 50 59v39H30z" fill="currentColor"/>
          <path d="M141 98l-25-28h17V30h16v40h17l-25 28z" fill="currentColor"/>
        </svg>
        <span>View as Markdown</span>
      </a>
    </li>
    <li>
      <a :href="chatGptUrl" target="_blank" rel="noopener">
        <svg class="md-links-icon" viewBox="0 0 24 24" fill="currentColor" xmlns="http://www.w3.org/2000/svg">
          <path d="M22.28 9.82a5.98 5.98 0 0 0-.52-4.91 6.05 6.05 0 0 0-6.51-2.9A6.07 6.07 0 0 0 4.98 4.18a5.98 5.98 0 0 0-4 2.9 6.05 6.05 0 0 0 .75 7.1 5.98 5.98 0 0 0 .51 4.9 6.05 6.05 0 0 0 6.52 2.91 5.97 5.97 0 0 0 4.5 2.01 6.07 6.07 0 0 0 5.79-4.21 5.98 5.98 0 0 0 4-2.9 6.06 6.06 0 0 0-.77-7.07ZM13.26 21.9a4.48 4.48 0 0 1-2.88-1.04l.14-.08 4.79-2.77a.8.8 0 0 0 .39-.68v-6.76l2.02 1.17.02.11v5.6a4.5 4.5 0 0 1-4.48 4.45ZM3.86 17.85a4.47 4.47 0 0 1-.54-3.02l.14.08 4.79 2.77a.78.78 0 0 0 .78 0l5.85-3.38v2.33l-.1.06-4.84 2.8a4.5 4.5 0 0 1-6.08-1.64ZM2.6 7.85a4.48 4.48 0 0 1 2.35-1.97v5.7a.78.78 0 0 0 .39.67l5.85 3.38-2.02 1.17-.1-.05-4.84-2.8A4.5 4.5 0 0 1 2.6 7.85Zm16.63 3.86-5.85-3.39 2.02-1.16.1.05 4.84 2.79a4.5 4.5 0 0 1-.68 8.11v-5.7a.79.79 0 0 0-.43-.7Zm2-3.02-.14-.09-4.78-2.78a.79.79 0 0 0-.79 0l-5.85 3.38V6.87l.1-.06 4.84-2.79a4.5 4.5 0 0 1 6.62 4.67ZM8.83 13.24l-2.02-1.17-.02-.11v-5.6a4.5 4.5 0 0 1 7.37-3.46l-.14.08-4.79 2.77a.8.8 0 0 0-.39.68l-.01 6.81Zm1.1-2.36 2.6-1.5 2.6 1.5v3l-2.6 1.5-2.6-1.5v-3Z"/>
        </svg>
        <span>Open in ChatGPT</span>
      </a>
    </li>
    <li>
      <a :href="claudeUrl" target="_blank" rel="noopener">
        <svg class="md-links-icon" viewBox="0 0 24 24" fill="currentColor" xmlns="http://www.w3.org/2000/svg">
          <path d="M17.3 3.5h-3.4l6.2 17h3.4l-6.2-17Zm-9.9 0L1.2 20.5h3.5l1.3-3.6h7l1.3 3.6h3.5L11.6 3.5H7.4Zm-1 10.2 2.4-6.8 2.4 6.8H6.4Z"/>
        </svg>
        <span>Open in Claude</span>
      </a>
    </li>
  </ul>
</template>

<script setup>
import { computed } from 'vue'
import { useData, useRoute } from 'vitepress'

const { frontmatter } = useData()
const route = useRoute()

const rawUrl = computed(() => {
  const source = frontmatter.value.source
  const path = source || `docs${route.path.replace(/\/$/, '/index')}.md`
  return `https://raw.githubusercontent.com/notamitgamer/bsc/refs/heads/main/${path}`
})

const chatGptUrl = computed(() =>
  `https://chat.openai.com/?q=${encodeURIComponent('Read this page and help me understand it: ' + rawUrl.value)}`
)
const claudeUrl = computed(() =>
  `https://claude.ai/new?q=${encodeURIComponent('Read this page and help me understand it: ' + rawUrl.value)}`
)
</script>

<style scoped>
.md-links {
  display: flex;
  flex-wrap: wrap;
  gap: 8px;
  list-style: none;
  margin: 0 0 20px;
  padding: 0;
}

.md-links li {
  margin: 0;
}

.md-links a {
  display: inline-flex;
  align-items: center;
  gap: 6px;
  padding: 6px 12px;
  border-radius: 6px;
  border: 1px solid var(--vp-c-divider);
  background: var(--vp-c-bg-soft);
  color: var(--vp-c-text-2) !important;
  font-size: 13px;
  font-weight: 500;
  text-decoration: none !important;
  transition: border-color 0.2s, color 0.2s;
}

.md-links a:hover {
  border-color: var(--vp-c-brand);
  color: var(--vp-c-text-1) !important;
}

.md-links-icon {
  width: 14px;
  height: 14px;
  flex-shrink: 0;
}
</style>
