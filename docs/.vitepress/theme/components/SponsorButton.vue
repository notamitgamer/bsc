<script setup lang="ts">
import { ref, onMounted } from 'vue'

const particles = ref<SVGElement[]>([])
const isBeating = ref(false)
const isTouchDevice = ref(false)

onMounted(() => {
  isTouchDevice.value = window.matchMedia('(hover: none) and (pointer: coarse)').matches
})

// Varied colors like anime.js — different pinks, reds, corals
const particleColors = [
  '#ff4772', '#ff6b9d', '#ff3355', '#ff8fab',
  '#e91e63', '#f06292', '#ff1744', '#ff80ab'
]

const triggerBurst = () => {
  if (isTouchDevice.value || !particles.value?.length) return

  // Cancel any running animations first so re-hover always works
  particles.value.forEach((particle, i) => {
    particle.getAnimations().forEach(a => a.cancel())

    const angle = (i / particles.value.length) * Math.PI * 2 + (Math.random() - 0.5) * 0.6
    const distance = 28 + Math.random() * 32
    const tx = Math.cos(angle) * distance
    const ty = Math.sin(angle) * distance
    const size = 0.6 + Math.random() * 0.8 // vary particle size

    // Random color from palette
    const color = particleColors[Math.floor(Math.random() * particleColors.length)];
    (particle as SVGElement & { style: CSSStyleDeclaration }).style.color = color

    particle.animate([
      {
        transform: `translate(0px, 0px) scale(${size})`,
        opacity: 1,
        visibility: 'visible'
      },
      {
        transform: `translate(${tx * 0.4}px, ${ty * 0.4}px) scale(${size * 1.1})`,
        opacity: 1,
        offset: 0.2
      },
      {
        transform: `translate(${tx}px, ${ty}px) scale(0)`,
        opacity: 0,
        visibility: 'hidden'
      }
    ], {
      duration: 500 + Math.random() * 250,
      easing: 'cubic-bezier(0.25, 1, 0.5, 1)',
      fill: 'forwards'
    })
  })

  // Heart beat
  isBeating.value = true
  setTimeout(() => { isBeating.value = false }, 400)
}
</script>

<template>
  <div class="sponsor-wrapper">
    <a
      href="https://github.com/sponsors/notamitgamer"
      class="sponsor-button"
      target="_blank"
      title="Sponsor Amit Dutta on GitHub"
      @mouseenter="triggerBurst"
      @click="triggerBurst"
      :class="{ 'mobile-pill': isTouchDevice }"
    >
      <svg
        xmlns="http://www.w3.org/2000/svg"
        viewBox="4 7 16 12"
        class="icon heart-icon"
        :class="{ beating: isBeating }"
      >
        <path
          fill="currentColor"
          d="M12 18.445a.778.778 0 0 1-.34-.078C11.39 18.235 5 15.077 5 9.889a3.889 3.889 0 0 1 6.638-2.75L12 7.5l.362-.361A3.889 3.889 0 0 1 19 9.889c0 5.17-6.387 8.344-6.66 8.478a.778.778 0 0 1-.34.078z"
        />
      </svg>
      <span>Sponsor</span>
    </a>

    <!-- Burst particles — desktop only -->
    <svg
      v-if="!isTouchDevice"
      v-for="i in 12"
      :key="i"
      ref="particles"
      xmlns="http://www.w3.org/2000/svg"
      viewBox="4 7 16 12"
      class="particle"
    >
      <path
        fill="currentColor"
        d="M12 18.445a.778.778 0 0 1-.34-.078C11.39 18.235 5 15.077 5 9.889a3.889 3.889 0 0 1 6.638-2.75L12 7.5l.362-.361A3.889 3.889 0 0 1 19 9.889c0 5.17-6.387 8.344-6.66 8.478a.778.778 0 0 1-.34.078z"
      />
    </svg>
  </div>
</template>

<style scoped>
.sponsor-wrapper {
  position: relative;
  display: inline-flex;
  align-items: center;
  margin-left: 8px;
}

.sponsor-button {
  display: inline-flex;
  align-items: center;
  gap: 5px;
  padding: 5px 12px 5px 10px;
  background-color: transparent;
  color: var(--vp-c-text-1, #3c3c43);
  font-size: 13px;
  font-weight: 500;
  border-radius: 20px;
  transition:
    background-color 0.2s ease,
    color 0.2s ease;
  text-decoration: none;
  position: relative;
  z-index: 2;
  white-space: nowrap;
  cursor: pointer;
}

.sponsor-button:hover {
  background-color: rgba(255, 71, 114, 0.1);
  color: #ff4772;
}

/* Heart icon */
.heart-icon {
  width: 15px;
  height: 15px;
  color: #ff4772;
  flex-shrink: 0;
  transition: transform 0.25s cubic-bezier(0.175, 0.885, 0.32, 1.275);
}

.sponsor-button:hover .heart-icon {
  transform: scale(1.2);
}

/* Beat animation triggered on click */
.heart-icon.beating {
  animation: heartbeat 0.4s cubic-bezier(0.175, 0.885, 0.32, 1.275);
}

@keyframes heartbeat {
  0%   { transform: scale(1); }
  40%  { transform: scale(1.4); }
  70%  { transform: scale(0.9); }
  100% { transform: scale(1.2); }
}

/* Mobile: static pink pill, no hover/animation */
.mobile-pill {
  background-color: rgba(255, 71, 114, 0.12);
  color: #ff4772;
}

.mobile-pill .heart-icon {
  color: #ff4772;
}

.particle {
  position: absolute;
  top: 50%;
  left: 18px; /* roughly where the heart icon center sits */
  width: 10px;
  height: 10px;
  margin-top: -5px;
  margin-left: -5px;
  color: #ff4772;
  visibility: hidden;
  opacity: 0;
  pointer-events: none;
  z-index: 1;
}
</style>