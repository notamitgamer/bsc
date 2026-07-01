<template>
  <div class="refresh-wrapper">
    <button class="nav-refresh-btn" @click="clearAndReload" :disabled="busy" aria-label="Clear cache and refresh" title="Force refresh (clears cache)">
      <svg
        class="icon refresh-icon"
        :class="{ spinning: busy, hidden: done }"
        xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24"
        fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round"
      >
        <path d="M21 12a9 9 0 1 1-2.64-6.36"/>
        <polyline points="21 3 21 9 15 9"/>
      </svg>
      <svg
        class="icon check-icon"
        :class="{ visible: done }"
        xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24"
        fill="none" stroke="#22c55e" stroke-width="2.5" stroke-linecap="round" stroke-linejoin="round"
      >
        <path d="M4 12l5 5L20 6" stroke-dasharray="24" :stroke-dashoffset="done ? 0 : 24"/>
      </svg>
    </button>
  </div>
</template>

<script setup>
import { ref } from 'vue'

const busy = ref(false)
const done = ref(false)

async function clearAndReload() {
  if (busy.value) return
  busy.value = true

  try {
    if ('serviceWorker' in navigator) {
      const registrations = await navigator.serviceWorker.getRegistrations()
      await Promise.all(registrations.map(r => r.unregister()))
    }

    if ('caches' in window) {
      const keys = await caches.keys()
      await Promise.all(keys.map(key => caches.delete(key)))
    }

    busy.value = false
    done.value = true

    setTimeout(() => {
      window.location.reload()
    }, 500)
  } catch (e) {
    busy.value = false
    console.error('Cache clear failed:', e)
  }
}
</script>

<style scoped>
.refresh-wrapper {
  display: inline-flex;
  align-items: center;
  margin-left: 8px;
}

.nav-refresh-btn {
  position: relative;
  width: 30px;
  height: 30px;
  display: flex;
  align-items: center;
  justify-content: center;
  border: none;
  background: transparent;
  cursor: pointer;
  border-radius: 50%;
  transition: background-color 0.2s;
}

.nav-refresh-btn:hover {
  background-color: #6e7fff2a;
}

.nav-refresh-btn:hover .refresh-icon {
  color: #dde0ff;
}

.icon {
  position: absolute;
  transition: opacity 0.2s ease, transform 0.2s ease;
}

.refresh-icon {
  color: var(--vp-c-text-2);
  opacity: 1;
  transform: scale(1) rotate(0deg);
}

.refresh-icon.hidden {
  opacity: 0;
  transform: scale(0.5);
}

.refresh-icon.spinning {
  animation: spin 0.8s linear infinite;
}

@keyframes spin {
  from { transform: rotate(0deg); }
  to { transform: rotate(360deg); }
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