<script setup lang="ts">
import { ref, computed, onMounted, onUnmounted, watch } from 'vue'

const isVisible = ref(false)
const pendingUrl = ref('')
const countdown = ref(3)
const isOpening = ref(false)
let timer: ReturnType<typeof setInterval> | null = null
let openingTimer: ReturnType<typeof setTimeout> | null = null

const safeDomains = [
  'amit.is-a.dev',
  'github.com',
  'raw.githubusercontent.com',
  'raw.usercontent.amit.is-a.dev'
]

const displayDomain = computed(() => {
  try { return new URL(pendingUrl.value).hostname } catch { return pendingUrl.value }
})

const truncatedUrl = computed(() => {
  return pendingUrl.value.length > 52 ? pendingUrl.value.slice(0, 52) + '…' : pendingUrl.value
})

const countdownLabel = computed(() => {
  if (isOpening.value) return 'Opening…'
  return `in ${countdown.value}s`
})

const stopAll = () => {
  if (timer) { clearInterval(timer); timer = null }
  if (openingTimer) { clearTimeout(openingTimer); openingTimer = null }
}

const startCountdown = () => {
  stopAll()
  countdown.value = 3
  isOpening.value = false
  timer = setInterval(() => {
    countdown.value--
    if (countdown.value <= 0) {
      clearInterval(timer!)
      timer = null
      triggerOpen()
    }
  }, 1000)
}

const triggerOpen = () => {
  isOpening.value = true
  openingTimer = setTimeout(() => {
    window.open(pendingUrl.value, '_blank', 'noopener,noreferrer')
    reset()
  }, 400)
}

const reset = () => {
  stopAll()
  isVisible.value = false
  isOpening.value = false
  pendingUrl.value = ''
}

const handleGlobalClick = (e: MouseEvent) => {
  const target = (e.target as HTMLElement).closest('a')
  if (!target || !target.href) return
  try {
    const url = new URL(target.href)
    if (url.protocol !== 'http:' && url.protocol !== 'https:') return
    const isExternal = url.hostname !== window.location.hostname
    const isSafe = safeDomains.some(domain => url.hostname.endsWith(domain))
    if (isExternal && !isSafe) {
      if (e.ctrlKey || e.metaKey || e.shiftKey || e.button !== 0) return
      e.preventDefault()
      pendingUrl.value = target.href
      isVisible.value = true
    }
  } catch {}
}

watch(isVisible, (val) => {
  if (val) startCountdown()
  else stopAll()
})

onMounted(() => document.addEventListener('click', handleGlobalClick))
onUnmounted(() => { document.removeEventListener('click', handleGlobalClick); stopAll() })

const proceed = () => triggerOpen()
const cancel = () => reset()

const copied = ref(false)
const copyUrl = () => {
  navigator.clipboard.writeText(pendingUrl.value)
  copied.value = true
  setTimeout(() => { copied.value = false }, 2000)
}
</script>

<template>
  <Transition name="toast">
    <div v-if="isVisible" class="toast" role="status" aria-live="polite">

      <!-- Progress bar -->
      <div class="progress">
        <div class="progress-bar" :style="{ animationDuration: '3s' }"></div>
      </div>

      <div class="toast-inner">

        <div class="toast-top">
          <span class="toast-heading">
            Redirecting to <strong>{{ displayDomain }}</strong> {{ countdownLabel }}
          </span>
          <button class="btn-cancel" @click="cancel" aria-label="Cancel redirect">
            <svg xmlns="http://www.w3.org/2000/svg" width="13" height="13" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2.5" stroke-linecap="round" stroke-linejoin="round">
              <line x1="18" y1="6" x2="6" y2="18"/>
              <line x1="6" y1="6" x2="18" y2="18"/>
            </svg>
          </button>
        </div>

        <div class="toast-url-row">
          <a class="toast-url" :href="pendingUrl" target="_blank" rel="noopener noreferrer" @click.prevent="proceed">
            {{ truncatedUrl }}
          </a>
          <button class="btn-copy" @click="copyUrl" :aria-label="copied ? 'Copied' : 'Copy URL'">
            <svg v-if="!copied" xmlns="http://www.w3.org/2000/svg" width="13" height="13" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round">
              <rect width="14" height="14" x="8" y="8" rx="2" ry="2"/>
              <path d="M4 16c-1.1 0-2-.9-2-2V4c0-1.1.9-2 2-2h10c1.1 0 2 .9 2 2"/>
            </svg>
            <svg v-else xmlns="http://www.w3.org/2000/svg" width="13" height="13" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round">
              <polyline points="20 6 9 17 4 12"/>
            </svg>
          </button>
        </div>

        <p class="toast-disclaimer">code.amit.is-a.dev is not responsible for the content of external sites.</p>

      </div>

    </div>
  </Transition>
</template>

<style scoped>
.toast {
  position: fixed;
  bottom: 24px;
  right: 24px;
  z-index: 100000;
  width: 360px;
  background: var(--vp-c-bg);
  border: 1px solid var(--vp-c-divider);
  border-radius: 10px;
  box-shadow: 0 4px 24px rgba(0, 0, 0, 0.15), 0 1px 4px rgba(0, 0, 0, 0.08);
  overflow: hidden;
}

/* Progress bar at top */
.progress {
  height: 3px;
  background: var(--vp-c-divider);
  width: 100%;
}

.progress-bar {
  height: 100%;
  background: var(--vp-c-brand-1);
  width: 100%;
  transform-origin: left;
  animation: shrink linear forwards;
}

@keyframes shrink {
  from { transform: scaleX(1); }
  to   { transform: scaleX(0); }
}

.toast-inner {
  display: flex;
  flex-direction: column;
  gap: 5px;
  padding: 12px 14px 14px 16px;
}

.toast-top {
  display: flex;
  align-items: center;
  justify-content: space-between;
  gap: 8px;
}

.toast-heading {
  font-size: 0.8125rem;
  color: var(--vp-c-text-1);
  line-height: 1.4;
}

.toast-url-row {
  display: flex;
  align-items: center;
  gap: 6px;
}

.toast-url {
  font-size: 0.725rem;
  font-family: var(--vp-font-family-mono);
  color: var(--vp-c-brand-1);
  text-decoration: underline;
  text-underline-offset: 2px;
  white-space: nowrap;
  overflow: hidden;
  text-overflow: ellipsis;
  min-width: 0;
  flex: 1;
  cursor: pointer;
}

.toast-url:hover {
  color: var(--vp-c-brand-2);
}

.toast-disclaimer {
  font-size: 0.675rem;
  color: var(--vp-c-text-3);
  margin: 6px 0 0;
  line-height: 1.4;
}

.btn-copy {
  flex-shrink: 0;
  display: inline-flex;
  align-items: center;
  justify-content: center;
  padding: 2px;
  background: none;
  border: none;
  cursor: pointer;
  color: var(--vp-c-text-3);
  transition: color 0.15s;
}

.btn-copy:hover {
  color: var(--vp-c-text-1);
}

.btn-cancel {
  flex-shrink: 0;
  display: inline-flex;
  align-items: center;
  justify-content: center;
  width: 22px;
  height: 22px;
  background: none;
  border: none;
  cursor: pointer;
  color: var(--vp-c-text-3);
  border-radius: 4px;
  transition: background 0.15s, color 0.15s;
  padding: 0;
}

.btn-cancel:hover {
  background: var(--vp-c-bg-alt);
  color: var(--vp-c-text-1);
}

/* Transition */
.toast-enter-active {
  transition: opacity 0.2s ease, transform 0.25s cubic-bezier(0.22, 1, 0.36, 1);
}
.toast-leave-active {
  transition: opacity 0.15s ease, transform 0.2s ease;
}
.toast-enter-from {
  opacity: 0;
  transform: translateY(12px) scale(0.97);
}
.toast-leave-to {
  opacity: 0;
  transform: translateY(6px) scale(0.97);
}

/* Mobile: full width at bottom */
@media (max-width: 480px) {
  .toast {
    bottom: 0;
    right: 0;
    left: 0;
    width: 100%;
    border-radius: 12px 12px 0 0;
    border-bottom: none;
    padding-bottom: env(safe-area-inset-bottom, 0px);
  }

  .toast-enter-from {
    transform: translateY(100%);
    opacity: 1;
  }
  .toast-leave-to {
    transform: translateY(100%);
    opacity: 1;
  }
}
</style>