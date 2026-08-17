<script setup lang="ts">
import { ref, onMounted, onUnmounted } from 'vue'

const isVisible = ref(false)
const pendingUrl = ref('')
const copied = ref(false)

const safeDomains = [
  'amit.is-a.dev',
  'github.com',
  'raw.githubusercontent.com',
  'raw.usercontent.amit.is-a.dev'
]

const lockScroll = () => {
  document.body.style.overflow = 'hidden'
}

const unlockScroll = () => {
  document.body.style.overflow = ''
}

const reset = () => {
  isVisible.value = false
  pendingUrl.value = ''
  copied.value = false
  unlockScroll()
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
      lockScroll()
    }
  } catch {}
}

onMounted(() => document.addEventListener('click', handleGlobalClick))
onUnmounted(() => {
  document.removeEventListener('click', handleGlobalClick)
  unlockScroll()
})

const openLink = () => {
  window.open(pendingUrl.value, '_blank', 'noopener,noreferrer')
  reset()
}

const copyUrl = async () => {
  await navigator.clipboard.writeText(pendingUrl.value)
  copied.value = true
  setTimeout(() => { copied.value = false }, 1500)
}
</script>

<template>
  <Teleport to="body">
    <Transition name="fade">
      <div v-if="isVisible" class="overlay" @click="reset"></div>
    </Transition>

    <Transition name="sheet">
      <div v-if="isVisible" class="sheet" role="dialog" aria-modal="true">
        <div class="handle"></div>

        <p class="warning">
          <strong>You're about to leave this site.</strong><br />
          This link leads to an external site I don't control, and can't vouch for its content. Continue anyway?
        </p>

        <div class="url-box">
          <span class="url-text">{{ pendingUrl }}</span>
          <button class="copy-icon-btn" @click="copyUrl" :aria-label="copied ? 'Copied' : 'Copy link'" :title="copied ? 'Copied' : 'Copy link'">
            <svg v-if="!copied" width="15" height="15" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round">
              <rect width="14" height="14" x="8" y="8" rx="2" ry="2"/>
              <path d="M4 16c-1.1 0-2-.9-2-2V4c0-1.1.9-2 2-2h10c1.1 0 2 .9 2 2"/>
            </svg>
            <svg v-else width="15" height="15" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round">
              <polyline points="20 6 9 17 4 12"/>
            </svg>
          </button>
        </div>

        <div class="actions">
          <button class="btn btn-no" @click="reset">
            No
          </button>

          <button class="btn btn-open" @click="openLink">
            Continue
          </button>
        </div>
      </div>
    </Transition>
  </Teleport>
</template>

<style scoped>
.overlay {
  position: fixed;
  inset: 0;
  background: rgba(0, 0, 0, 0.35);
  backdrop-filter: blur(6px);
  -webkit-backdrop-filter: blur(6px);
  z-index: 99998;
}

.sheet {
  position: fixed;
  left: 0;
  right: 0;
  bottom: 0;
  z-index: 99999;
  width: 100%;
  max-width: 420px;
  margin: 0 auto;
  background: var(--vp-c-bg);
  border: 1px solid rgba(255, 255, 255, 0.18);
  border-radius: 16px 16px 0 0;
  padding: 10px 20px calc(20px + env(safe-area-inset-bottom, 0px));
  box-shadow: 0 -4px 24px rgba(0, 0, 0, 0.15);
}

.handle {
  width: 36px;
  height: 4px;
  border-radius: 2px;
  background: var(--vp-c-divider);
  margin: 0 auto 16px;
}

.warning {
  font-size: 0.875rem;
  line-height: 1.5;
  color: var(--vp-c-text-2);
  margin: 0 0 14px;
  text-align: center;
}

.warning strong {
  color: var(--vp-c-text-1);
  font-size: 0.95rem;
}

.url-box {
  display: flex;
  align-items: center;
  gap: 8px;
  font-size: 0.8rem;
  font-family: var(--vp-font-family-mono);
  color: var(--vp-c-text-1);
  background: var(--vp-c-bg-alt);
  border-radius: 8px;
  padding: 10px 10px 10px 12px;
  margin-bottom: 16px;
  line-height: 1.4;
}

.url-text {
  flex: 1;
  min-width: 0;
  word-break: break-all;
}

.copy-icon-btn {
  flex-shrink: 0;
  display: flex;
  align-items: center;
  justify-content: center;
  width: 30px;
  height: 30px;
  border-radius: 6px;
  border: none;
  background: transparent;
  color: var(--vp-c-text-2);
  cursor: pointer;
  transition: background 0.15s, color 0.15s;
}

.copy-icon-btn:hover {
  background: var(--vp-c-bg);
  color: var(--vp-c-text-1);
}

.copy-icon-btn:active {
  opacity: 0.75;
}

.actions {
  display: flex;
  gap: 10px;
}

.btn {
  flex: 1;
  display: flex;
  align-items: center;
  justify-content: center;
  gap: 6px;
  padding: 11px 12px;
  border-radius: 8px;
  border: none;
  font-size: 0.875rem;
  font-weight: 500;
  cursor: pointer;
  transition: opacity 0.15s;
}

.btn:active {
  opacity: 0.75;
}

.btn-no {
  background: var(--vp-c-bg-alt);
  color: var(--vp-c-text-1);
}

.btn-open {
  background: var(--vp-c-brand-1);
  color: #fff;
}

/* Larger screens: centered rounded card instead of a bottom sheet */
@media (min-width: 640px) {
  .sheet {
    left: 50%;
    right: auto;
    bottom: auto;
    top: 50%;
    transform: translate(-50%, -50%);
    width: 100%;
    max-width: 400px;
    border-radius: 16px;
    border: 1px solid rgba(255, 255, 255, 0.18);
    padding: 24px;
    box-shadow: 0 12px 40px rgba(0, 0, 0, 0.25);
  }

  .handle {
    display: none;
  }

  .warning {
    text-align: left;
  }

  .sheet-enter-active,
  .sheet-leave-active {
    transition: opacity 0.2s ease, transform 0.2s cubic-bezier(0.22, 1, 0.36, 1);
  }
  .sheet-enter-from,
  .sheet-leave-to {
    opacity: 0;
    transform: translate(-50%, -46%);
  }
}

/* Transitions */
.fade-enter-active,
.fade-leave-active {
  transition: opacity 0.2s ease;
}
.fade-enter-from,
.fade-leave-to {
  opacity: 0;
}

.sheet-enter-active {
  transition: transform 0.25s cubic-bezier(0.22, 1, 0.36, 1);
}
.sheet-leave-active {
  transition: transform 0.2s ease;
}
.sheet-enter-from,
.sheet-leave-to {
  transform: translateY(100%);
}
</style>