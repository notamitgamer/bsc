<script setup lang="ts">
import { ref, onMounted, watch } from 'vue'

const needRefresh = ref(false)
let _updateServiceWorker: ((reloadPage?: boolean) => Promise<void>) | null = null

const close = () => { needRefresh.value = false }
const reload = () => {
  if (_updateServiceWorker) _updateServiceWorker(true)
  else window.location.reload()
}

onMounted(async () => {
  const { useRegisterSW } = await import('virtual:pwa-register/vue')
  const { needRefresh: nr, updateServiceWorker } = useRegisterSW()
  _updateServiceWorker = updateServiceWorker
  needRefresh.value = nr.value
  watch(nr, (val) => { needRefresh.value = val })
})
</script>

<template>
  <Transition name="toast">
    <div v-if="needRefresh" class="toast" role="status" aria-live="polite">
      <div class="toast-inner">
        <div class="toast-main">
          <span class="toast-heading">Update available</span>
          <p class="toast-sub">A new version of BSc Code Index is ready.</p>
        </div>
        <div class="toast-actions">
          <button class="btn-reload" @click="reload">Reload</button>
          <button class="btn-cancel" @click="close" aria-label="Dismiss">
            <svg xmlns="http://www.w3.org/2000/svg" width="13" height="13" viewBox="0 0 24 24" fill="none"
              stroke="currentColor" stroke-width="2.5" stroke-linecap="round" stroke-linejoin="round">
              <line x1="18" y1="6" x2="6" y2="18"/>
              <line x1="6" y1="6" x2="18" y2="18"/>
            </svg>
          </button>
        </div>
      </div>
    </div>
  </Transition>
</template>

<style scoped>
.toast {
  position: fixed;
  bottom: 24px;
  left: 24px;
  z-index: 100000;
  width: 300px;
  background: var(--vp-c-bg);
  border: 1px solid var(--vp-c-divider);
  border-radius: 10px;
  box-shadow: 0 4px 24px rgba(0, 0, 0, 0.15), 0 1px 4px rgba(0, 0, 0, 0.08);
  overflow: hidden;
}

.toast-inner {
  display: flex;
  align-items: center;
  gap: 12px;
  padding: 14px 12px 14px 16px;
}

.toast-main {
  flex: 1;
  min-width: 0;
}

.toast-heading {
  display: block;
  font-size: 0.8125rem;
  font-weight: 600;
  color: var(--vp-c-text-1);
  margin-bottom: 2px;
}

.toast-sub {
  font-size: 0.75rem;
  color: var(--vp-c-text-2);
  margin: 0;
  line-height: 1.4;
}

.toast-actions {
  display: flex;
  align-items: center;
  gap: 6px;
  flex-shrink: 0;
}

.btn-reload {
  padding: 5px 12px;
  border-radius: 6px;
  font-size: 0.8rem;
  font-weight: 600;
  cursor: pointer;
  background: var(--vp-c-brand-1);
  color: #fff;
  border: none;
  transition: opacity 0.15s;
}

.btn-reload:hover {
  opacity: 0.85;
}

.btn-cancel {
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

@media (max-width: 480px) {
  .toast {
    bottom: 0;
    left: 0;
    right: 0;
    width: 100%;
    border-radius: 12px 12px 0 0;
    border-bottom: none;
    padding-bottom: env(safe-area-inset-bottom, 0px);
  }

  .toast-enter-from,
  .toast-leave-to {
    transform: translateY(100%);
    opacity: 1;
  }
}
</style>