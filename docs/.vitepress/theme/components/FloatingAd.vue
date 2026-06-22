<script setup lang="ts">
import { ref } from 'vue'

const isVisible = ref(true)

const closeAd = () => {
  isVisible.value = false
}
</script>

<template>
  <Transition name="slide-up" appear>
    <div v-if="isVisible" class="floating-ad-container">
      <!-- Header zone for the button and label so they never touch the iframe -->
      <div class="ad-header">
        <span class="ad-label">ADVERTISEMENT</span>
        <button class="close-btn" @click="closeAd" aria-label="Close Ad">×</button>
      </div>
      
      <!-- Isolated content zone purely for the 125x125 ad -->
      <div class="ad-content">
        <iframe 
          data-aa='2445210' 
          src='//ad.a-ads.com/2445210/?size=125x125'
          style='border:0; padding:0; width:125px; height:125px; overflow:hidden; display:block; margin:0;' 
          allowtransparency='true'>
        </iframe>
      </div>
    </div>
  </Transition>
</template>

<style scoped>
.floating-ad-container {
  position: fixed;
  bottom: 24px;
  right: 24px;
  /* Expanded size to ensure zero overlap with the 125x125 ad */
  width: 145px; 
  height: 165px; 
  
  background: var(--vp-c-bg-elv);
  border: 1px solid var(--vp-c-divider);
  border-radius: 12px;
  box-shadow: 0 8px 24px rgba(0, 0, 0, 0.2);
  /* Maximum z-index to ensure it sits on top of all VitePress UI elements */
  z-index: 99999; 
  
  display: flex;
  flex-direction: column;
  align-items: center;
  overflow: hidden;
  padding: 6px;
  box-sizing: border-box;
}

.ad-header {
  width: 100%;
  display: flex;
  justify-content: space-between;
  align-items: center;
  height: 20px;
  margin-bottom: 4px;
  padding: 0 4px;
  box-sizing: border-box;
}

.ad-label {
  font-size: 9px;
  font-weight: 700;
  color: var(--vp-c-text-3);
  letter-spacing: 0.5px;
}

.close-btn {
  font-size: 20px;
  color: var(--vp-c-text-2);
  background: none;
  border: none;
  cursor: pointer;
  line-height: 1;
  padding: 0;
}

.close-btn:hover {
  color: var(--vp-c-text-1);
}

.ad-content {
  width: 125px;
  height: 125px;
  display: block;
  clear: both;
}

/* Slide-In Animation */
.slide-up-enter-active,
.slide-up-leave-active {
  transition: opacity 0.4s ease, transform 0.4s cubic-bezier(0.25, 1, 0.5, 1);
}

.slide-up-enter-from,
.slide-up-leave-to {
  opacity: 0;
  transform: translateY(40px) scale(0.95); 
}
</style>