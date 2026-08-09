<script setup>
import { ref, onMounted } from 'vue'

const isVisible = ref(false)
const isFirstVisit = ref(true)

const STORAGE_KEY = 'terms_acknowledged_deploy_id'
const currentDeployId = import.meta.env.VITE_DEPLOY_ID || 'deploy_v1'

onMounted(() => {
  const lastAcknowledgedId = localStorage.getItem(STORAGE_KEY)

  if (!lastAcknowledgedId) {
    isFirstVisit.value = true
    isVisible.value = true
  } else if (lastAcknowledgedId !== currentDeployId) {
    isFirstVisit.value = false
    isVisible.value = true
  }
})

const acceptTerms = () => {
  localStorage.setItem(STORAGE_KEY, currentDeployId)
  isVisible.value = false
}
</script>

<template>
  <Transition name="slide-up">
    <div v-if="isVisible" class="terms-banner-wrapper" role="alert">
      <div class="terms-banner">
        <p class="banner-text">
          <template v-if="isFirstVisit">
            This is an open-source, <a href="https://github.com/notamitgamer/bsc/blob/main/LICENSE" class="banner-link"><strong>MIT-licensed</strong></a>
            code index — please use it as a study reference, not a copy-paste source.
            By browsing, you agree to <a href="/terms" class="banner-link">Terms</a>.
          </template>
          <template v-else>
            Updated with new materials — see the <a href="/changelog" class="banner-link">Changelog</a>.
          </template>
        </p>
        <div class="banner-actions">
          <button class="banner-btn" @click="acceptTerms" aria-label="Dismiss">OK</button>
        </div>
      </div>
    </div>
  </Transition>
</template>

<style scoped>
.terms-banner-wrapper {
  position: fixed;
  bottom: 0;
  left: 0;
  width: 100vw;
  z-index: 99999;
  pointer-events: none;
}

.terms-banner {
  pointer-events: auto;
  width: 100%;
  background-color: color-mix(in srgb, var(--banner-bg) 96%, transparent);
  color: #ffffff;
  padding: 10px 20px calc(10px + env(safe-area-inset-bottom)) 20px;
  box-shadow: 0 -4px 20px rgba(0, 0, 0, 0.15);
  font-family: var(--vp-font-family-base);
  display: flex;
  align-items: center;
  gap: 16px;
  max-width: var(--vp-layout-max-width, 100%);
  margin: 0 auto;
}

.banner-text {
  margin: 0;
  font-size: 13px;
  font-weight: 500;
  line-height: 1.4;
  opacity: 0.95;
  flex: 1;
}

.banner-link {
  color: #ffffff;
  text-decoration: underline;
  font-weight: 700;
  cursor: pointer;
  transition: opacity 0.2s;
}

.banner-link:hover {
  opacity: 0.8;
}

.banner-actions {
  flex-shrink: 0;
}

.banner-btn {
  background-color: #ffffff;
  color: var(--vp-c-brand-1);
  padding: 6px 16px;
  border-radius: 6px;
  font-size: 13px;
  font-weight: 700;
  border: none;
  cursor: pointer;
  white-space: nowrap;
  transition: transform 0.1s ease, background-color 0.2s ease;
}

.banner-btn:hover {
  transform: scale(1.02);
}

.banner-btn {
  color: #2f81f7;
}

@media (max-width: 640px) {
  .terms-banner {
    padding: 12px 16px calc(12px + env(safe-area-inset-bottom)) 16px;
  }

  .banner-text {
    font-size: 12.5px;
  }

  .banner-btn {
    padding: 7px 14px;
    font-size: 12.5px;
  }
}

.slide-up-enter-active,
.slide-up-leave-active {
  transition: transform 0.3s cubic-bezier(0.16, 1, 0.3, 1), opacity 0.3s ease;
}

.slide-up-enter-from,
.slide-up-leave-to {
  transform: translateY(100%);
  opacity: 0;
}
</style>