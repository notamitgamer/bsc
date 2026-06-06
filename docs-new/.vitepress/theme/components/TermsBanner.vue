<script setup>
import { ref, onMounted, onBeforeUnmount, watch } from 'vue'
import { useRouter } from 'vitepress'

const isVisible = ref(false)
const bannerRef = ref(null)
const router = useRouter()

const STORAGE_KEY = 'terms_acknowledged_deploy_id'
const currentDeployId = import.meta.env.VITE_DEPLOY_ID || 'deploy_v1'

let observer = null

// Function to enforce scroll locking and click blocking on the page
const lockPage = () => {
  if (typeof document !== 'undefined') {
    document.documentElement.classList.add('terms-locked')
    document.body.classList.add('terms-locked')
  }
}

// Function to unlock page restrictions
const unlockPage = () => {
  if (typeof document !== 'undefined') {
    document.documentElement.classList.remove('terms-locked')
    document.body.classList.remove('terms-locked')
  }
}

onMounted(() => {
  const lastAcknowledgedId = localStorage.getItem(STORAGE_KEY)
  
  if (lastAcknowledgedId !== currentDeployId) {
    isVisible.value = true
    lockPage()
    setupAntiF12Protection()
  }
})

onBeforeUnmount(() => {
  unlockPage()
  if (observer) observer.disconnect()
})

// Automatically re-lock the page if visibility is forced back on
watch(isVisible, (newVal) => {
  if (newVal) lockPage()
  else unlockPage()
})

const acceptTerms = () => {
  localStorage.setItem(STORAGE_KEY, currentDeployId)
  isVisible.value = false
  if (observer) observer.disconnect()
}

const acceptAndNavigateToTerms = (event) => {
  event.preventDefault()
  acceptTerms()
  router.go('/terms')
}

// ANTI-F12 INSPECT ELEMENT PROTECTION
const setupAntiF12Protection = () => {
  if (typeof document === 'undefined') return

  // Watch the HTML body to see if someone deletes the banner element using F12
  observer = new MutationObserver((mutations) => {
    const bannerStillExists = document.querySelector('.terms-backdrop') || document.querySelector('.terms-banner')
    
    if (isVisible.value && !bannerStillExists) {
      // The user tried to delete the banner element via dev tools!
      // Crash or completely blank out the screen as punishment
      document.body.innerHTML = `
        <div style="font-family:sans-serif; text-align:center; padding:100px 20px; color:#ff3b30;">
          <h2>Security Violation</h2>
          <p>You must accept the Terms of Use to view this website.</p>
          <button onclick="window.location.reload()" style="padding:10px 20px; background:#3E63DD; color:white; border:none; border-radius:5px; cursor:pointer;">Reload Page</button>
        </div>
      `
      lockPage()
    }
  })

  observer.observe(document.body, { childList: true, subtree: true })
}
</script>

<template>
  <Transition name="fade-in">
    <!-- Full screen dark background layer that blocks clicks to the site -->
    <div v-if="isVisible" ref="bannerRef" class="terms-backdrop">
      <div class="terms-banner" role="alert">
        <div class="banner-content">
          <p class="banner-text">
            Please review our 
            <a href="/terms" class="banner-link" @click="acceptAndNavigateToTerms">Terms of Use</a> 
            before accessing the website.
          </p>
          
          <div class="banner-actions">
            <button class="banner-btn secondary-btn" @click="acceptAndNavigateToTerms">Terms of Use</button>
            <button class="banner-btn" @click="acceptTerms">I Understand</button>
          </div>
        </div>
      </div>
    </div>
  </Transition>
</template>

<style>
/* 
  NOTE: Removed 'scoped' from this class so it can inject 
  scroll locks into the root <html> and <body> elements.
*/
html.terms-locked, 
body.terms-locked {
  overflow: hidden !important;       /* Disables mouse scrolling completely */
  height: 100% !important;           /* Fixes viewport height */
  touch-action: none !important;     /* Disables mobile swipe scrolling */
  pointer-events: none !important;   /* Deactivates ALL clicks across the entire site */
}

/* Restores click actions ONLY inside the active banner system */
.terms-backdrop {
  pointer-events: auto !important; 
}
</style>

<style scoped>
/* Full screen backdrop blur overlay */
.terms-backdrop {
  position: fixed;
  top: 0;
  left: 0;
  width: 100vw;
  height: 100vh;
  background-color: rgba(0, 0, 0, 0.4); /* Dim out the background website */
  backdrop-filter: blur(8px);           /* Makes the website content unreadable previews */
  z-index: 99999;                       /* Stays above absolutely everything */
  display: flex;
  align-items: flex-end;                /* Keeps banner fixed at bottom */
}

/* Main banner box */
.terms-banner {
  width: 100%;
  background-color: #3E63DD !important;
  color: #ffffff !important;  
  padding: 16px;
  box-shadow: 0 -4px 30px rgba(0, 0, 0, 0.3);
  font-family: var(--vp-font-family-base);
}

/* Layout spacing */
.banner-content {
  max-width: var(--vp-layout-max-width);
  margin: 0 auto;
  display: flex;
  justify-content: space-between;
  align-items: center;
  gap: 16px;
}

.banner-text {
  margin: 0;
  font-size: 14px;
  font-weight: 500;
  line-height: 1.4;
}

.banner-link {
  color: #ffffff;
  text-decoration: underline;
  font-weight: 700;
  cursor: pointer;
}

.banner-link:hover {
  opacity: 0.9;
}

.banner-actions {
  display: flex;
  align-items: center;
}

.banner-btn {
  background-color: #ffffff !important;
  color: #3E63DD !important;
  padding: 8px 16px;
  border-radius: 6px;
  font-size: 13px;
  font-weight: 600;
  border: none;
  cursor: pointer;
  white-space: nowrap;
  transition: transform 0.1s ease, background-color 0.2s ease;
}

.banner-btn:hover {
  transform: scale(1.03);
}

.banner-actions .banner-btn + .banner-btn {
  margin-left: 12px !important;
}

.secondary-btn {
  background-color: transparent !important;
  color: #ffffff !important;
  border: 1px solid rgba(255, 255, 255, 0.5) !important;
}

.secondary-btn:hover {
  background-color: rgba(255, 255, 255, 0.1) !important;
  border-color: #ffffff !important;
}

/* Mobile responsive fixes */
@media (max-width: 767px) {
  .banner-content {
    flex-direction: column;
    text-align: center;
    gap: 12px;
  }

  .banner-actions {
    width: 100%;             
    flex-direction: row;
    justify-content: center;
    gap: 8px;
  }

  .banner-btn {
    flex: initial;
    font-size: 11px;
    padding: 6px 12px;
  }

  .banner-actions .banner-btn + .banner-btn {
    margin-left: 0 !important;
  }
}

/* Overlay Fade In Transitions */
.fade-in-enter-active,
.fade-in-leave-active {
  transition: opacity 0.35s ease;
}

.fade-in-enter-active .terms-banner,
.fade-in-leave-active .terms-banner {
  transition: transform 0.35s ease;
}

.fade-in-enter-from,
.fade-in-leave-to {
  opacity: 0;
}

.fade-in-enter-from .terms-banner,
.fade-in-leave-to .terms-banner {
  transform: translateY(100%);
}
</style>
