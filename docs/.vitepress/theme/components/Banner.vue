<script setup>
import { ref, onMounted } from 'vue'

const isVisible = ref(false)
const isFirstVisit = ref(true)

const STORAGE_KEY = 'terms_acknowledged_deploy_id'
const currentDeployId = import.meta.env.VITE_DEPLOY_ID || 'deploy_v1'

onMounted(() => {
  const lastAcknowledgedId = localStorage.getItem(STORAGE_KEY)
  
  if (!lastAcknowledgedId) {
    // Brand new user: Show the terms
    isFirstVisit.value = true
    isVisible.value = true
  } else if (lastAcknowledgedId !== currentDeployId) {
    // Returning user: Show the update notification
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
        <div class="banner-content">
          
          <template v-if="isFirstVisit">
            <h3 class="banner-title">Welcome to the BSC Code Index</h3>
            <div class="banner-text-group">
              <p class="banner-text">
                This codebase is open-source and hosted on GitHub under the <a href="https://github.com/notamitgamer/bsc/blob/main/LICENSE"><u><strong>MIT License</strong></u></a>. 
                While you are completely free to use it, we encourage you to use these materials as an educational study reference rather than copying solutions verbatim.
              </p>
              <p class="banner-text">
                By continuing to browse this site, you acknowledge that you have read and agree to our 
                <a href="/terms" class="banner-link">Terms of Use</a>.
              </p>
            </div>
            <div class="banner-actions">
              <button class="banner-btn" @click="acceptTerms">I Understand</button>
            </div>
          </template>

          <template v-else>
            <h3 class="banner-title">New Updates Available</h3>
            <div class="banner-text-group">
              <p class="banner-text">
                The code index has been updated with new materials or improvements. 
                Check out the <a href="/changelog" class="banner-link">Changelog</a> to see what changed recently.
              </p>
            </div>
            <div class="banner-actions">
              <button class="banner-btn" @click="acceptTerms">Got it</button>
            </div>
          </template>

        </div>
      </div>
    </div>
  </Transition>
</template>

<style scoped>
/* Wrapper to stick the banner to the bottom of the screen */
.terms-banner-wrapper {
  position: fixed;
  bottom: 0;
  left: 0;
  width: 100vw;
  z-index: 99999; 
  pointer-events: none; 
}

/* Main banner box */
.terms-banner {
  pointer-events: auto; 
  width: 100%;
  background-color: #5c6bc8f6;
  color: #ffffff;  
  /* Adjusted padding to wrap content naturally instead of forcing 33vh */
  padding: 32px 24px calc(24px + env(safe-area-inset-bottom)) 24px; 
  box-shadow: 0 -10px 30px rgba(0, 0, 0, 0.15);
  font-family: var(--vp-font-family-base);
  display: flex;
  flex-direction: column;
  justify-content: center; 
}

/* Layout spacing */
.banner-content {
  max-width: var(--vp-layout-max-width);
  margin: 0 auto;
  width: 100%;
  display: flex;
  flex-direction: column;
  gap: 16px; 
}

.banner-title {
  margin: 0;
  font-size: 20px;
  font-weight: 700;
  line-height: 1.2;
}

.banner-text-group {
  display: flex;
  flex-direction: column;
  gap: 10px; 
}

.banner-text {
  margin: 0;
  font-size: 15px;
  font-weight: 500;
  line-height: 1.5;
  opacity: 0.95;
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
  display: flex;
  align-items: center;
  margin-top: 4px;
}

.banner-btn {
  background-color: #ffffff;
  color: #5c6bc8;
  padding: 12px 28px;
  border-radius: 6px;
  font-size: 14px;
  font-weight: 700;
  border: none;
  cursor: pointer;
  white-space: nowrap;
  transition: transform 0.1s ease, background-color 0.2s ease;
}

.banner-btn:hover {
  transform: scale(1.02);
}

/* Mobile responsive fixes */
@media (max-width: 767px) {
  .terms-banner {
    padding: 24px 16px calc(20px + env(safe-area-inset-bottom)) 16px;
  }

  .banner-title {
    font-size: 18px;
  }
  
  .banner-text {
    font-size: 14px;
  }

  .banner-btn {
    width: 100%; 
    font-size: 15px;
    padding: 14px 16px;
  }
}

/* Desktop: floating card (bottom-right) */
@media (min-width: 768px) {
  .terms-banner-wrapper {
    width: auto;
    left: unset;
    right: 24px;
    bottom: 24px;
  }

  .terms-banner {
    width: 420px;
    border-radius: 12px;
    padding: 20px 22px;
    box-shadow: 0 8px 32px rgba(0, 0, 0, 0.18), 0 2px 8px rgba(0, 0, 0, 0.10);
  }

  .banner-content {
    gap: 12px;
  }

  .banner-title {
    font-size: 15px;
    font-weight: 700;
  }

  .banner-text {
    font-size: 13px;
    line-height: 1.55;
    opacity: 0.92;
  }

  .banner-text-group {
    gap: 7px;
  }

  .banner-actions {
    margin-top: 2px;
    justify-content: flex-end;
  }

  .banner-btn {
    padding: 9px 20px;
    font-size: 13px;
    border-radius: 6px;
  }
}

/* Slide Up Animation */
.slide-up-enter-active,
.slide-up-leave-active {
  transition: transform 0.4s cubic-bezier(0.16, 1, 0.3, 1), opacity 0.4s ease;
}

.slide-up-enter-from,
.slide-up-leave-to {
  transform: translateY(100%);
  opacity: 0;
}
</style>