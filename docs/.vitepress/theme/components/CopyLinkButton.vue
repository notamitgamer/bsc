<template>
  <div class="copy-link-wrap">
    <button class="copy-link-btn" @click="copyLink" aria-label="Copy page link">
      <svg
        class="icon link-icon"
        :class="{ hidden: copied }"
        xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24"
        fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round"
      >
        <path d="M10 13a5 5 0 0 0 7.54.54l3-3a5 5 0 0 0-7.07-7.07l-1.72 1.71"/>
        <path d="M14 11a5 5 0 0 0-7.54-.54l-3 3a5 5 0 0 0 7.07 7.07l1.71-1.71"/>
      </svg>
      <svg
        class="icon check-icon"
        :class="{ visible: copied }"
        xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24"
        fill="none" stroke="#22c55e" stroke-width="2.5" stroke-linecap="round" stroke-linejoin="round"
      >
        <path
          ref="checkPath"
          d="M4 12l5 5L20 6"
          stroke-dasharray="24"
          :stroke-dashoffset="copied ? 0 : 24"
        />
      </svg>
    </button>
  </div>
</template>

<script setup>
import { ref } from 'vue'

const copied = ref(false)
let resetTimer = null

function copyLink() {
  const url = window.location.href

  navigator.clipboard.writeText(url).then(showCopied).catch(() => {
    fallbackCopy(url)
  })
}

function fallbackCopy(text) {
  const textarea = document.createElement('textarea')
  textarea.value = text
  textarea.style.position = 'fixed'
  textarea.style.opacity = '0'
  document.body.appendChild(textarea)
  textarea.focus()
  textarea.select()

  try {
    document.execCommand('copy')
    showCopied()
  } catch (err) {
    console.error('Copy failed:', err)
  }

  document.body.removeChild(textarea)
}

function showCopied() {
  clearTimeout(resetTimer)
  copied.value = true
  resetTimer = setTimeout(() => {
    copied.value = false
  }, 1400)
}
</script>

<style scoped>
.copy-link-wrap {
  display: flex;
  justify-content: flex-end;
  margin-bottom: 12px;
}

.copy-link-btn {
  position: relative;
  width: 32px;
  height: 32px;
  border-radius: 6px;
  border: 1px solid var(--vp-c-divider);
  background: var(--vp-c-bg-soft);
  display: flex;
  align-items: center;
  justify-content: center;
  cursor: pointer;
  transition: border-color 0.2s;
}

.copy-link-btn:hover {
  border-color: var(--vp-c-brand);
}

.icon {
  position: absolute;
  transition: opacity 0.2s ease, transform 0.2s ease;
}

.link-icon {
  color: var(--vp-c-text-2);
  opacity: 1;
  transform: scale(1);
}

.link-icon.hidden {
  opacity: 0;
  transform: scale(0.5);
}

.check-icon {
  opacity: 0;
  transform: scale(0.5);
}

.check-icon.visible {
  opacity: 1;
  transform: scale(1);
}

.check-icon path {
  transition: stroke-dashoffset 0.35s ease;
}
</style>