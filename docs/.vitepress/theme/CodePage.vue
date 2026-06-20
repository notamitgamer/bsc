<template>
  <div class="bsc-page">

    <!-- Header -->
    <div class="bsc-header">
      <div class="bsc-header-top">
        <div class="bsc-file-icon">
          <svg xmlns="http://www.w3.org/2000/svg" width="20" height="20" viewBox="0 0 24 24"
            fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round">
            <path d="M14 2H6a2 2 0 0 0-2 2v16a2 2 0 0 0 2 2h12a2 2 0 0 0 2-2V8z"/>
            <polyline points="14 2 14 8 20 8"/>
            <line x1="10" y1="13" x2="14" y2="13"/>
            <line x1="10" y1="17" x2="14" y2="17"/>
            <line x1="10" y1="9" x2="12" y2="9"/>
          </svg>
        </div>
        <h1 class="bsc-filename"><code>{{ fm.title }}</code></h1>
      </div>

      <!-- Metadata grid -->
      <div class="bsc-meta">
        <div v-if="fm.lang" class="bsc-meta-row">
          <span class="bsc-meta-icon">
            <svg xmlns="http://www.w3.org/2000/svg" width="13" height="13" viewBox="0 0 24 24"
              fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round">
              <polyline points="16 18 22 12 16 6"/><polyline points="8 6 2 12 8 18"/>
            </svg>
          </span>
          <span class="bsc-meta-key">Lang</span>
          <span class="bsc-meta-val">{{ fm.lang }}</span>
        </div>
        <div v-if="fm.author" class="bsc-meta-row">
          <span class="bsc-meta-icon">
            <svg xmlns="http://www.w3.org/2000/svg" width="13" height="13" viewBox="0 0 24 24"
              fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round">
              <path d="M20 21v-2a4 4 0 0 0-4-4H8a4 4 0 0 0-4 4v2"/>
              <circle cx="12" cy="7" r="4"/>
            </svg>
          </span>
          <span class="bsc-meta-key">Author</span>
          <span class="bsc-meta-val">{{ fm.author }}</span>
        </div>
        <div v-if="fm.date" class="bsc-meta-row">
          <span class="bsc-meta-icon">
            <svg xmlns="http://www.w3.org/2000/svg" width="13" height="13" viewBox="0 0 24 24"
              fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round">
              <rect x="3" y="4" width="18" height="18" rx="2" ry="2"/>
              <line x1="16" y1="2" x2="16" y2="6"/>
              <line x1="8" y1="2" x2="8" y2="6"/>
              <line x1="3" y1="10" x2="21" y2="10"/>
            </svg>
          </span>
          <span class="bsc-meta-key">Date</span>
          <span class="bsc-meta-val">{{ fm.date }}</span>
        </div>
        <div v-if="fm.license" class="bsc-meta-row">
          <span class="bsc-meta-icon">
            <svg xmlns="http://www.w3.org/2000/svg" width="13" height="13" viewBox="0 0 24 24"
              fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round">
              <path d="M14 2H6a2 2 0 0 0-2 2v16a2 2 0 0 0 2 2h12a2 2 0 0 0 2-2V8z"/>
              <polyline points="14 2 14 8 20 8"/>
            </svg>
          </span>
          <span class="bsc-meta-key">License</span>
          <span class="bsc-meta-val">{{ fm.license }}</span>
        </div>
      </div>
    </div>

    <!-- Problem statement -->
    <div v-if="fm.problem" class="bsc-problem">
      <div class="bsc-problem-label">
        <svg xmlns="http://www.w3.org/2000/svg" width="12" height="12" viewBox="0 0 24 24"
          fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round">
          <path d="M14 2H6a2 2 0 0 0-2 2v16a2 2 0 0 0 2 2h12a2 2 0 0 0 2-2V8z"/>
          <polyline points="14 2 14 8 20 8"/>
          <line x1="16" y1="13" x2="8" y2="13"/>
          <line x1="16" y1="17" x2="8" y2="17"/>
          <polyline points="10 9 9 9 8 9"/>
        </svg>
        Problem statement
      </div>
      <p>{{ fm.problem }}</p>
    </div>

    <!-- Actions -->
    <div class="bsc-actions">
      <a :href="fm.raw_url" target="_blank" rel="noopener" class="bsc-btn bsc-btn-primary">
        <svg xmlns="http://www.w3.org/2000/svg" width="14" height="14" viewBox="0 0 24 24"
          fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round">
          <path d="M14 2H6a2 2 0 0 0-2 2v16a2 2 0 0 0 2 2h12a2 2 0 0 0 2-2V8z"/>
          <polyline points="14 2 14 8 20 8"/>
        </svg>
        Raw
      </a>
      <a :href="fm.github_url" target="_blank" rel="noopener" class="bsc-btn">
        <svg xmlns="http://www.w3.org/2000/svg" width="14" height="14" viewBox="0 0 24 24"
          fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round">
          <path d="M9 19c-5 1.5-5-2.5-7-3m14 6v-3.87a3.37 3.37 0 0 0-.94-2.61c3.14-.35 6.44-1.54 6.44-7A5.44 5.44 0 0 0 20 4.77 5.07 5.07 0 0 0 19.91 1S18.73.65 16 2.48a13.38 13.38 0 0 0-7 0C6.27.65 5.09 1 5.09 1A5.07 5.07 0 0 0 5 4.77a5.44 5.44 0 0 0-1.5 3.78c0 5.42 3.3 6.61 6.44 7A3.37 3.37 0 0 0 9 18.13V22"/>
        </svg>
        View on GitHub
      </a>
      <button class="bsc-btn" @click="copyUrl">
        <svg v-if="!copied" xmlns="http://www.w3.org/2000/svg" width="14" height="14" viewBox="0 0 24 24"
          fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round">
          <rect x="9" y="9" width="13" height="13" rx="2" ry="2"/>
          <path d="M5 15H4a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h9a2 2 0 0 1 2 2v1"/>
        </svg>
        <svg v-else xmlns="http://www.w3.org/2000/svg" width="14" height="14" viewBox="0 0 24 24"
          fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round">
          <polyline points="20 6 9 17 4 12"/>
        </svg>
        {{ copied ? 'Copied!' : 'Copy URL' }}
      </button>
    </div>

    <!-- Page slot — renders the markdown content (code block) below -->
    <slot />

  </div>
</template>

<script setup lang="ts">
import { ref } from 'vue'
import { useData } from 'vitepress'

const { frontmatter: fm } = useData()
const copied = ref(false)

function copyUrl() {
  navigator.clipboard.writeText(window.location.href)
    .then(() => {
      copied.value = true
      setTimeout(() => { copied.value = false }, 1800)
    })
    .catch(() => {
      // fallback
      const ta = document.createElement('textarea')
      ta.value = window.location.href
      ta.style.position = 'fixed'
      ta.style.opacity = '0'
      document.body.appendChild(ta)
      ta.focus()
      ta.select()
      try { document.execCommand('copy') } catch {}
      document.body.removeChild(ta)
      copied.value = true
      setTimeout(() => { copied.value = false }, 1800)
    })
}
</script>