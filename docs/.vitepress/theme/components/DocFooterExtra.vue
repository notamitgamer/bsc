<template>
  <div class="doc-footer-extra">
    <!-- Animated developer skyline -->
    <div class="footer-divider" aria-hidden="true" ref="dividerRef">
      <div class="footer-glow"></div>
      <svg
        viewBox="0 0 900 170"
        preserveAspectRatio="xMidYMid meet"
        xmlns="http://www.w3.org/2000/svg"
        class="cityscape-svg"
        :class="{ 'is-visible': isVisible }"
      >
        <defs>
          <linearGradient id="footerBeam" x1="0" y1="0" x2="1" y2="0">
            <stop offset="0%" class="beam-stop" stop-opacity="0" />
            <stop offset="50%" class="beam-stop" stop-opacity=".9" />
            <stop offset="100%" class="beam-stop" stop-opacity="0" />
          </linearGradient>
          <linearGradient id="cubeTop" x1="0" y1="0" x2="0" y2="1">
            <stop offset="0%" class="cube-top-light" />
            <stop offset="100%" class="cube-top-dark" />
          </linearGradient>
          <filter id="softGlow" x="-50%" y="-50%" width="200%" height="200%">
            <feGaussianBlur stdDeviation="4" result="blur" />
            <feMerge>
              <feMergeNode in="blur" />
              <feMergeNode in="SourceGraphic" />
            </feMerge>
          </filter>
        </defs>

        <!-- Subtle horizon -->
        <path class="horizon-glow" d="M70 137H830" />
        <path class="horizon" d="M70 137H830" />
        <path class="moving-beam" d="M90 137H250" />

        <!-- Ambient particles -->
        <g class="particles">
          <circle cx="150" cy="61" r="1.5" />
          <circle cx="238" cy="91" r="1.2" />
          <circle cx="330" cy="43" r="1.4" />
          <circle cx="450" cy="72" r="1.2" />
          <circle cx="555" cy="42" r="1.5" />
          <circle cx="674" cy="84" r="1.2" />
          <circle cx="748" cy="57" r="1.4" />
        </g>

        <!-- Left cluster -->
        <g class="building building-a">
          <polygon points="145,77 175,62 205,77 175,92" class="cube-top" />
          <polygon points="145,77 175,92 175,137 145,122" class="cube-left" />
          <polygon points="175,92 205,77 205,122 175,137" class="cube-right" />
        </g>

        <g class="building building-b">
          <polygon points="202,60 230,46 258,60 230,74" class="cube-top" />
          <polygon points="202,60 230,74 230,137 202,123" class="cube-left" />
          <polygon points="230,74 258,60 258,123 230,137" class="cube-right" />
        </g>

        <g class="building building-c">
          <polygon points="254,88 278,76 302,88 278,100" class="cube-top" />
          <polygon points="254,88 278,100 278,137 254,125" class="cube-left" />
          <polygon points="278,100 302,88 302,125 278,137" class="cube-right" />
        </g>

        <!-- Center floating core -->
        <g class="core-building">
          <polygon points="425,79 455,64 485,79 455,94" class="cube-top luminous" />
          <polygon points="425,79 455,94 455,137 425,122" class="cube-left luminous" />
          <polygon points="455,94 485,79 485,122 455,137" class="cube-right luminous" />
        </g>
        <circle cx="455" cy="64" r="3" class="core-dot" filter="url(#softGlow)" />

        <!-- Right cluster -->
        <g class="building building-d">
          <polygon points="575,71 605,56 635,71 605,86" class="cube-top" />
          <polygon points="575,71 605,86 605,137 575,122" class="cube-left" />
          <polygon points="605,86 635,71 635,122 605,137" class="cube-right" />
        </g>

        <g class="building building-e">
          <polygon points="635,91 659,79 683,91 659,103" class="cube-top" />
          <polygon points="635,91 659,103 659,137 635,125" class="cube-left" />
          <polygon points="659,103 683,91 683,125 659,137" class="cube-right" />
        </g>

        <g class="building building-f">
          <polygon points="684,61 714,46 744,61 714,76" class="cube-top" />
          <polygon points="684,61 714,76 714,137 684,122" class="cube-left" />
          <polygon points="714,76 744,61 744,122 714,137" class="cube-right" />
        </g>
      </svg>
    </div>

    <!-- Footer utility row -->
    <div class="footer-top-row">
      <a href="https://github.com/notamitgamer/bsc" target="_blank" rel="noopener noreferrer" class="gh-mark" aria-label="View on GitHub">
        <svg viewBox="0 0 16 16" width="19" height="19" fill="currentColor" aria-hidden="true">
          <path d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27s1.36.09 2 .27c1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.01 8.01 0 0 0 16 8c0-4.42-3.58-8-8-8Z"/>
        </svg>
        <span>Open source on GitHub</span>
      </a>

      <button class="back-to-top" @click="scrollTop">
        Back to top
        <span class="back-icon">
          <svg viewBox="0 0 16 16" width="13" height="13" fill="none" stroke="currentColor" stroke-width="2" aria-hidden="true">
            <path d="M8 13V3M3 8l5-5 5 5" stroke-linecap="round" stroke-linejoin="round" />
          </svg>
        </span>
      </button>
    </div>

    <!-- Feedback / help cards -->
    <div class="footer-columns">
      <section class="footer-card helpful-col">
        <div class="card-icon">?</div>
        <div class="card-content">
          <p class="col-title">Was this page helpful?</p>
          <p class="col-text">Your feedback helps improve the documentation.</p>
          <div class="helpful-btns" v-if="voteStatus === null">
            <button class="vote-btn" @click="vote(true)">Yes, helpful</button>
            <button class="vote-btn secondary" @click="vote(false)">Not quite</button>
          </div>
          <p class="thanks" v-else-if="voteStatus === 'yes'">Thanks for the feedback!</p>
          <p class="feedback-msg" v-else-if="voteStatus === 'no'">
            Email me why at <a :href="feedbackMailto" class="mail-link">mail@amit.is-a.dev</a>
          </p>
        </div>
      </section>

      <section class="footer-card contribute-col">
        <div class="card-icon edit-icon">↗</div>
        <div class="card-content">
          <p class="col-title">Help improve this page</p>
          <p class="col-text">Spotted a mistake or something unclear? All content is open source.</p>
          <a :href="editUrl" target="_blank" rel="noopener noreferrer" class="contribute-btn">
            <span>Suggest an edit</span>
            <span>→</span>
          </a>
        </div>
      </section>

      <section class="footer-card help-col">
        <div class="card-icon">⌁</div>
        <div class="card-content">
          <p class="col-title">Still need help?</p>
          <p class="col-text">Find answers or report something that is broken.</p>
          <ul class="help-links">
            <li><a href="https://github.com/notamitgamer/bsc/discussions" target="_blank" rel="noopener noreferrer">Ask a question <span>↗</span></a></li>
            <li><a href="https://github.com/notamitgamer/bsc/issues" target="_blank" rel="noopener noreferrer">Report an issue <span>↗</span></a></li>
            <li><a href="/changelog">Changelog <span>→</span></a></li>
          </ul>
        </div>
      </section>
    </div>

    <!-- Bottom utility bar -->
    <div class="footer-bottom-bar">
      <span>BSc Code Index <span class="dot">·</span> © 2026</span>
      <div class="bottom-links">
        <a href="/terms">Terms</a>
        <a href="https://github.com/notamitgamer/bsc/blob/main/LICENSE" target="_blank" rel="noopener noreferrer">License</a>
        <a href="https://github.com/notamitgamer/bsc" target="_blank" rel="noopener noreferrer">GitHub</a>
      </div>
    </div>
  </div>
</template>

<script setup>
import { ref, computed, onMounted, onUnmounted } from 'vue'
import { useData } from 'vitepress'

const { frontmatter, page } = useData()
const voteStatus = ref(null)
const dividerRef = ref(null)
const isVisible = ref(false)

function vote(isYes) {
  voteStatus.value = isYes ? 'yes' : 'no'
}

function scrollTop() {
  window.scrollTo({ top: 0, behavior: 'smooth' })
}

const editUrl = computed(() =>
  frontmatter.value.source
    ? `https://github.com/notamitgamer/bsc/edit/main/${frontmatter.value.source}`
    : `https://github.com/notamitgamer/bsc/edit/main/docs/${page.value.filePath}`
)

const feedbackMailto = computed(() => {
  const pageTitle = page.value.title || 'Docs Page'
  const pagePath = page.value.relativePath || ''
  const subject = encodeURIComponent(`Feedback on: ${pageTitle}`)
  const body = encodeURIComponent(
    `Hi Amit,

I found this page unhelpful because:

---
Page: ${pageTitle}
Path: ${pagePath}`
  )
  return `mailto:mail@amit.is-a.dev?subject=${subject}&body=${body}`
})

let observer = null
onMounted(() => {
  if (dividerRef.value && 'IntersectionObserver' in window) {
    observer = new IntersectionObserver(
      (entries) => {
        if (entries[0].isIntersecting) {
          isVisible.value = true
          observer?.disconnect()
        }
      },
      { threshold: 0.15 }
    )
    observer.observe(dividerRef.value)
  } else {
    isVisible.value = true
  }
})

onUnmounted(() => {
  observer?.disconnect()
})
</script>

<style scoped>
.doc-footer-extra {
  --footer-accent: var(--vp-c-brand-1, #42b883);
  --footer-accent-soft: var(--vp-c-brand-soft, rgba(66, 184, 131, 0.12));
  margin-top: 3.5rem;
  padding-top: 0;
  font-family: var(--vp-font-family-base);
  color: var(--vp-c-text-1);
}

.doc-footer-extra button,
.doc-footer-extra a {
  font-family: inherit;
}

/* =========================================================
   ANIMATED DEVELOPER SKYLINE
   ========================================================= */
.footer-divider {
  position: relative;
  height: 178px;
  overflow: hidden;
  margin-bottom: 0.25rem;
  border-bottom: 1px solid var(--vp-c-divider);
}

.footer-glow {
  position: absolute;
  left: 50%;
  bottom: 17px;
  width: min(650px, 75%);
  height: 120px;
  transform: translateX(-50%);
  background: radial-gradient(ellipse, color-mix(in srgb, var(--footer-accent) 15%, transparent), transparent 68%);
  filter: blur(12px);
  pointer-events: none;
}

.cityscape-svg {
  position: relative;
  z-index: 1;
  width: 100%;
  height: 100%;
  opacity: 0;
  transform: translateY(28px) scale(0.985);
  transform-origin: center bottom;
  will-change: transform, opacity;
}

.cityscape-svg.is-visible {
  animation: footerEnter 0.9s cubic-bezier(0.16, 1, 0.3, 1) forwards;
}

@keyframes footerEnter {
  from {
    opacity: 0;
    transform: translateY(28px) scale(0.985);
  }
  to {
    opacity: 1;
    transform: translateY(0) scale(1);
  }
}

.horizon {
  fill: none;
  stroke: var(--footer-accent);
  stroke-width: 1;
  opacity: 0.55;
}

.horizon-glow {
  fill: none;
  stroke: var(--footer-accent);
  stroke-width: 6;
  opacity: 0.08;
  filter: blur(4px);
}

.moving-beam {
  fill: none;
  stroke: url(#footerBeam);
  stroke-width: 2;
  stroke-linecap: round;
  stroke-dasharray: 80 680;
  animation: beamMove 4s linear infinite;
}

@keyframes beamMove {
  to { stroke-dashoffset: -760; }
}

.particles circle {
  fill: var(--footer-accent);
  opacity: 0.18;
  animation: particleFloat 3.8s ease-in-out infinite;
}

.particles circle:nth-child(2n) { animation-delay: -1.4s; }
.particles circle:nth-child(3n) { animation-delay: -2.5s; }

@keyframes particleFloat {
  0%, 100% { opacity: 0.12; transform: translateY(4px); }
  50% { opacity: 0.65; transform: translateY(-8px); }
}

.cube-top {
  fill: color-mix(in srgb, var(--footer-accent) 42%, white 58%);
}

.cube-left {
  fill: color-mix(in srgb, var(--footer-accent) 68%, black 32%);
}

.cube-right {
  fill: color-mix(in srgb, var(--footer-accent) 78%, white 22%);
}

.luminous {
  filter: drop-shadow(0 0 8px color-mix(in srgb, var(--footer-accent) 45%, transparent));
}

.core-dot {
  fill: color-mix(in srgb, var(--footer-accent) 35%, white 65%);
  animation: corePulse 2.4s ease-in-out infinite;
}

@keyframes corePulse {
  0%, 100% { opacity: 0.35; transform: scale(0.8); }
  50% { opacity: 1; transform: scale(1.45); }
}

.building,
.core-building {
  transform-box: fill-box;
  transform-origin: center bottom;
}

.cityscape-svg.is-visible .building {
  animation: buildingFloat 5s ease-in-out infinite;
}

.cityscape-svg.is-visible .building-b { animation-delay: -1.2s; }
.cityscape-svg.is-visible .building-c { animation-delay: -2.4s; }
.cityscape-svg.is-visible .building-d { animation-delay: -0.8s; }
.cityscape-svg.is-visible .building-e { animation-delay: -2s; }
.cityscape-svg.is-visible .building-f { animation-delay: -3.1s; }

@keyframes buildingFloat {
  0%, 100% { transform: translateY(0); }
  50% { transform: translateY(-3px); }
}

.core-building {
  animation: coreFloat 3.8s ease-in-out infinite;
}

@keyframes coreFloat {
  0%, 100% { transform: translateY(0); }
  50% { transform: translateY(-7px); }
}

/* =========================================================
   TOP UTILITY ROW
   ========================================================= */
.footer-top-row {
  display: flex;
  align-items: center;
  justify-content: space-between;
  min-height: 54px;
  border-bottom: 1px solid var(--vp-c-divider);
  color: var(--vp-c-text-2);
}

.gh-mark,
.back-to-top {
  display: inline-flex;
  align-items: center;
  gap: 8px;
  color: var(--vp-c-text-2);
  font-size: 12px;
  font-weight: 500;
  text-decoration: none;
  transition: color 0.2s ease, transform 0.2s ease;
}

.gh-mark:hover,
.back-to-top:hover {
  color: var(--footer-accent);
}

.gh-mark:hover {
  transform: translateX(2px);
}

.back-to-top {
  background: none;
  border: 0;
  cursor: pointer;
  padding: 8px 0;
}

.back-to-top:hover {
  transform: translateY(-2px);
}

.back-icon {
  display: grid;
  place-items: center;
  width: 23px;
  height: 23px;
  border: 1px solid var(--vp-c-divider);
  border-radius: 6px;
  transition: border-color 0.2s ease, background 0.2s ease;
}

.back-to-top:hover .back-icon {
  border-color: color-mix(in srgb, var(--footer-accent) 55%, var(--vp-c-divider));
  background: var(--footer-accent-soft);
}

/* =========================================================
   FEEDBACK CARDS
   ========================================================= */
.footer-columns {
  display: grid;
  grid-template-columns: repeat(3, minmax(0, 1fr));
  gap: 12px;
  padding: 22px 0;
  border-bottom: 1px solid var(--vp-c-divider);
}

.footer-card {
  position: relative;
  display: flex;
  gap: 14px;
  min-height: 164px;
  padding: 18px;
  overflow: hidden;
  border: 1px solid var(--vp-c-divider);
  border-radius: 12px;
  background: linear-gradient(145deg, var(--vp-c-bg-soft), color-mix(in srgb, var(--vp-c-bg-soft) 72%, transparent));
  box-shadow: 0 8px 30px rgba(0, 0, 0, 0.08);
  transition: transform 0.25s ease, border-color 0.25s ease, box-shadow 0.25s ease;
}

.footer-card::before {
  content: '';
  position: absolute;
  inset: 0;
  background: radial-gradient(circle at 10% 0%, color-mix(in srgb, var(--footer-accent) 12%, transparent), transparent 48%);
  opacity: 0;
  transition: opacity 0.25s ease;
  pointer-events: none;
}

.footer-card:hover {
  transform: translateY(-3px);
  border-color: color-mix(in srgb, var(--footer-accent) 45%, var(--vp-c-divider));
  box-shadow: 0 12px 36px rgba(0, 0, 0, 0.12);
}

.footer-card:hover::before {
  opacity: 1;
}

.card-icon {
  position: relative;
  z-index: 1;
  flex: 0 0 auto;
  display: grid;
  place-items: center;
  width: 32px;
  height: 32px;
  border: 1px solid color-mix(in srgb, var(--footer-accent) 35%, var(--vp-c-divider));
  border-radius: 8px;
  background: var(--footer-accent-soft);
  color: var(--footer-accent);
  font-size: 14px;
  font-weight: 700;
}

.card-content {
  position: relative;
  z-index: 1;
  min-width: 0;
}

.col-title {
  margin: 1px 0 7px;
  color: var(--vp-c-text-1);
  font-size: 13px;
  font-weight: 650;
  letter-spacing: -0.01em;
}

.col-text {
  max-width: 31ch;
  margin: 0 0 15px;
  color: var(--vp-c-text-2);
  font-size: 12px;
  line-height: 1.6;
}

.helpful-btns {
  display: flex;
  flex-wrap: wrap;
  gap: 7px;
}

.vote-btn,
.contribute-btn {
  display: inline-flex;
  align-items: center;
  justify-content: center;
  gap: 9px;
  border: 1px solid color-mix(in srgb, var(--footer-accent) 38%, var(--vp-c-divider));
  border-radius: 7px;
  background: var(--footer-accent-soft);
  color: var(--footer-accent);
  padding: 7px 10px;
  font-size: 12px;
  font-weight: 550;
  text-decoration: none;
  cursor: pointer;
  transition: background 0.2s ease, border-color 0.2s ease, transform 0.2s ease;
}

.vote-btn.secondary {
  border-color: var(--vp-c-divider);
  background: transparent;
  color: var(--vp-c-text-2);
}

.vote-btn:hover,
.contribute-btn:hover {
  border-color: var(--footer-accent);
  background: color-mix(in srgb, var(--footer-accent) 14%, var(--vp-c-bg-soft));
  transform: translateY(-1px);
}

.thanks,
.feedback-msg {
  margin: 0;
  color: var(--vp-c-text-2);
  font-size: 12px;
  line-height: 1.55;
}

.thanks {
  color: var(--footer-accent);
}

.mail-link {
  color: var(--footer-accent);
  text-decoration: none;
}

.mail-link:hover {
  text-decoration: underline;
  text-underline-offset: 3px;
}

.contribute-btn {
  min-width: 128px;
  justify-content: space-between;
}

.help-links {
  display: flex;
  flex-direction: column;
  gap: 7px;
  margin: 0;
  padding: 0;
  list-style: none;
}

.help-links a {
  display: flex;
  align-items: center;
  justify-content: space-between;
  gap: 12px;
  width: min(220px, 100%);
  color: var(--vp-c-text-2);
  font-size: 12px;
  text-decoration: none;
  transition: color 0.2s ease, transform 0.2s ease;
}

.help-links a span {
  color: var(--vp-c-text-3);
  transition: transform 0.2s ease, color 0.2s ease;
}

.help-links a:hover {
  color: var(--footer-accent);
  transform: translateX(2px);
}

.help-links a:hover span {
  color: var(--footer-accent);
  transform: translateX(2px);
}

/* =========================================================
   BOTTOM BAR
   ========================================================= */
.footer-bottom-bar {
  display: flex;
  align-items: center;
  justify-content: space-between;
  min-height: 58px;
  color: var(--vp-c-text-3, var(--vp-c-text-2));
  font-size: 11px;
}

.dot {
  margin: 0 3px;
  color: var(--footer-accent);
}

.bottom-links {
  display: flex;
  gap: 18px;
}

.bottom-links a {
  color: inherit;
  text-decoration: none;
  transition: color 0.2s ease;
}

.bottom-links a:hover {
  color: var(--footer-accent);
}

@media (max-width: 900px) {
  .footer-columns {
    grid-template-columns: 1fr;
  }

  .footer-card {
    min-height: auto;
  }
}

@media (max-width: 640px) {
  .doc-footer-extra {
    margin-top: 2.5rem;
  }

  .footer-divider {
    height: 135px;
  }

  .cityscape-svg {
    width: 145%;
    max-width: none;
    margin-left: -22.5%;
  }

  .footer-top-row {
    min-height: 50px;
  }

  .gh-mark span {
    display: none;
  }

  .footer-columns {
    padding: 16px 0;
  }

  .footer-card {
    padding: 15px;
  }

  .footer-bottom-bar {
    align-items: flex-start;
    flex-direction: column;
    justify-content: center;
    gap: 9px;
    padding: 14px 0;
  }
}

@media (prefers-reduced-motion: reduce) {
  .cityscape-svg,
  .cityscape-svg.is-visible,
  .moving-beam,
  .particles circle,
  .core-dot,
  .cityscape-svg.is-visible .building,
  .core-building {
    animation: none !important;
  }

  .cityscape-svg {
    opacity: 1;
    transform: none;
  }

  .footer-card,
  .gh-mark,
  .back-to-top,
  .vote-btn,
  .contribute-btn,
  .help-links a {
    transition: none;
  }
}
</style>
