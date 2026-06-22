<script setup lang="ts">
import { ref } from 'vue'

// Controls visibility for the close button
const isVisible = ref(true)

const closeAd = () => {
  isVisible.value = false
}
</script>

<template>
  <Transition name="slide-up" appear>
    <div v-if="isVisible" class="floating-ad-container">
      <button class="close-btn" @click="closeAd" aria-label="Close Ad">×</button>
      <span class="ad-label">AD</span>
      
      <div class="ad-content">
        <iframe 
          data-aa='2445210' 
          src='//ad.a-ads.com/2445210/?size=125x125'
          style='border:0; padding:0; width:125px; height:125px; overflow:hidden; display:block;' 
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
  width: 140px; 
  height: 140px; 
  
  /* Matches VitePress dark/light mode automatically */
  background: var(--vp-c-bg-elv);
  border: 1px solid var(--vp-c-divider);
  border-radius: 12px;
  box-shadow: 0 8px 24px rgba(0, 0, 0, 0.2);
  z-index: 100;
  
  display: flex;
  align-items: center;
  justify-content: center;
}

.close-btn {
  position: absolute;
  top: -6px;
  right: 6px;
  font-size: 22px;
  color: var(--vp-c-text-2);
  background: none;
  border: none;
  cursor: pointer;
  z-index: 10;
  line-height: 1;
}

.close-btn:hover {
  color: var(--vp-c-text-1);
}

.ad-label {
  position: absolute;
  top: 4px;
  left: 8px;
  font-size: 9px;
  font-weight: 800;
  color: var(--vp-c-text-3);
  letter-spacing: 0.5px;
}

.ad-content {
  /* Nudges the 125x125 iframe down slightly to avoid the close button */
  margin-top: 10px; 
}

/* Cinematic Slide-In Animation */
.slide-up-enter-active,
.slide-up-leave-active {
  transition: opacity 0.5s ease, transform 0.5s cubic-bezier(0.25, 1, 0.5, 1);
}

.slide-up-enter-from,
.slide-up-leave-to {
  opacity: 0;
  /* Starts 50px below its final position and scales up slightly */
  transform: translateY(50px) scale(0.95); 
}
</style>