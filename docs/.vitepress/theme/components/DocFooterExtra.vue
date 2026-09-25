<template>
  <div class="doc-footer-extra">
    <!-- Decorative divider: GitHub-inspired isometric composition -->
    <div class="footer-divider" aria-hidden="true" ref="dividerRef">
      <svg
        viewBox="0 0 700 130"
        preserveAspectRatio="xMidYMid meet"
        xmlns="http://www.w3.org/2000/svg"
        class="cityscape-svg"
        :class="{ 'is-visible': isVisible }"
      >
        <defs>
          <!-- Circular / Dome Ambient Backdrop Glow -->
          <radialGradient id="circleAmbientGlow" cx="50%" cy="100%" r="55%">
            <stop offset="0%" class="stop-glow-center" />
            <stop offset="45%" class="stop-glow-mid" />
            <stop offset="100%" class="stop-glow-edge" />
          </radialGradient>
        </defs>

        <!-- Dynamic Circular Ambient Glow -->
        <rect x="0" y="0" width="700" height="130" fill="url(#circleAmbientGlow)" />

        <!-- Continuous Neon Horizon Baseline -->
        <line x1="0" y1="110" x2="700" y2="110" class="neon-baseline" />

        <!-- ==================== LEFT ARCHITECTURE ==================== -->
        <!-- Background Block -->
        <g class="cube">
          <polygon points="120,44 146,57 120,70 94,57" class="face-top" />
          <polygon points="94,57 120,70 120,110 94,97" class="face-left" />
          <polygon points="120,70 146,57 146,97 120,110" class="face-right" />
        </g>

        <!-- Commit Matrix Block (Heatmap Grid on Left Face) -->
        <g class="cube">
          <polygon points="158,26 188,41 158,56 128,41" class="face-top-bright" />
          <!-- Heatmap facet -->
          <g transform="translate(128, 41) skewY(26.565)">
            <rect x="0" y="0" width="7.5" height="13.5" class="heat-0" />
            <rect x="7.5" y="0" width="7.5" height="13.5" class="heat-2" />
            <rect x="15" y="0" width="7.5" height="13.5" class="heat-3" />
            <rect x="22.5" y="0" width="7.5" height="13.5" class="heat-1" />

            <rect x="0" y="13.5" width="7.5" height="13.5" class="heat-3" />
            <rect x="7.5" y="13.5" width="7.5" height="13.5" class="heat-glow" />
            <rect x="15" y="13.5" width="7.5" height="13.5" class="heat-2" />
            <rect x="22.5" y="13.5" width="7.5" height="13.5" class="heat-0" />

            <rect x="0" y="27" width="7.5" height="13.5" class="heat-1" />
            <rect x="7.5" y="27" width="7.5" height="13.5" class="heat-3" />
            <rect x="15" y="27" width="7.5" height="13.5" class="heat-glow" />
            <rect x="22.5" y="27" width="7.5" height="13.5" class="heat-2" />

            <rect x="0" y="40.5" width="7.5" height="14.5" class="heat-0" />
            <rect x="7.5" y="40.5" width="7.5" height="14.5" class="heat-1" />
            <rect x="15" y="40.5" width="7.5" height="14.5" class="heat-3" />
            <rect x="22.5" y="40.5" width="7.5" height="14.5" class="heat-glow" />
          </g>
          <polygon points="158,56 188,41 188,95 158,110" class="face-right" />
        </g>

        <!-- Foreground Anchor Block -->
        <g class="cube">
          <polygon points="76,46 104,60 76,74 48,60" class="face-top-bright" />
          <polygon points="48,60 76,74 76,110 48,96" class="face-left" />
          <polygon points="76,74 104,60 104,96 76,110" class="face-right" />
        </g>

        <!-- ==================== CENTER MONOLITH ==================== -->
        <!-- Low-profile frosted glass block emerging from horizon -->
        <g class="cube">
          <polygon points="350,56 376,69 350,82 324,69" class="face-top-luminous" />
          <polygon points="324,69 350,82 350,110 324,97" class="face-left-luminous" />
          <polygon points="350,82 376,69 376,97 350,110" class="face-right-luminous" />
        </g>

        <!-- ==================== RIGHT ARCHITECTURE ==================== -->
        <!-- Right Background Prism -->
        <g class="cube">
          <polygon points="636,36 666,51 636,66 606,51" class="face-top" />
          <polygon points="606,51 636,66 636,110 606,95" class="face-left" />
          <polygon points="636,66 666,51 666,95 636,110" class="face-right" />
        </g>

        <!-- Right Commit Matrix Block -->
        <g class="cube">
          <polygon points="562,34 590,48 562,62 534,48" class="face-top-bright" />
          <!-- Heatmap facet -->
          <g transform="translate(534, 48) skewY(26.565)">
            <rect x="0" y="0" width="7" height="12" class="heat-3" />
            <rect x="7" y="0" width="7" height="12" class="heat-glow" />
            <rect x="14" y="0" width="7" height="12" class="heat-2" />
            <rect x="21" y="0" width="7" height="12" class="heat-0" />

            <rect x="0" y="12" width="7" height="12" class="heat-1" />
            <rect x="7" y="12" width="7" height="12" class="heat-2" />
            <rect x="14" y="12" width="7" height="12" class="heat-glow" />
            <rect x="21" y="12" width="7" height="12" class="heat-3" />

            <rect x="0" y="24" width="7" height="12" class="heat-2" />
            <rect x="7" y="24" width="7" height="12" class="heat-0" />
            <rect x="14" y="24" width="7" height="12" class="heat-1" />
            <rect x="21" y="24" width="7" height="12" class="heat-glow" />

            <rect x="0" y="36" width="7" height="14" class="heat-glow" />
            <rect x="7" y="36" width="7" height="14" class="heat-3" />
            <rect x="14" y="36" width="7" height="14" class="heat-2" />
            <rect x="21" y="36" width="7" height="14" class="heat-1" />
          </g>
          <polygon points="562,62 590,48 590,96 562,110" class="face-right" />
        </g>

        <!-- Right Primary Anchor Block (Clean Glass Prism) -->
        <g class="cube">
          <polygon points="488,18 518,33 488,48 458,33" class="face-top-bright" />
          <polygon points="458,33 488,48 488,110 458,95" class="face-left-luminous" />
          <polygon points="488,48 518,33 518,95 488,110" class="face-right" />
        </g>
      </svg>
    </div>

    <!-- Top Action Row -->
    <div class="footer-top-row">
      <a href="https://github.com/notamitgamer/bsc" target="_blank" rel="noopener noreferrer" class="gh-mark" aria-label="View on GitHub">
        <svg viewBox="0 0 16 16" width="22" height="22" fill="currentColor">
          <path d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38
            0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13
            -.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66
            .07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15
            -.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27s1.36.09 2 .27
            c1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15
            0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2
            0 .21.15.46.55.38A8.01 8.01 0 0 0 16 8c0-4.42-3.58-8-8-8Z"/>
        </svg>
      </a>
      <button class="back-to-top" @click="scrollTop">
        Back to top
        <svg viewBox="0 0 16 16" width="14" height="14" fill="none" stroke="currentColor" stroke-width="2">
          <path d="M8 13V3M3 8l5-5 5 5" stroke-linecap="round" stroke-linejoin="round" />
        </svg>
      </button>
    </div>

    <!-- 3-Column Footer Grid -->
    <div class="footer-columns">
      <div class="col helpful-col">
        <p class="col-title">Was this page helpful?</p>
        
        <div class="helpful-btns" v-if="voteStatus === null">
          <button class="vote-btn" @click="vote(true)">Yes</button>
          <button class="vote-btn" @click="vote(false)">No</button>
        </div>
        
        <p class="thanks" v-else-if="voteStatus === 'yes'">Thanks for the feedback!</p>
        
        <p class="feedback-msg" v-else-if="voteStatus === 'no'">
          Email me why at
          <a :href="feedbackMailto" class="mail-link">mail@amit.is-a.dev</a>
        </p>
      </div>

      <div class="col contribute-col">
        <p class="col-title">Help improve this page</p>
        <p class="col-text">Spotted a mistake or something unclear? All content is open source.</p>
        <a :href="editUrl" target="_blank" rel="noopener noreferrer" class="contribute-btn">Suggest an edit</a>
      </div>

      <div class="col help-col">
        <p class="col-title">Still need help?</p>
        <ul class="help-links">
          <li><a href="https://github.com/notamitgamer/bsc/discussions" target="_blank" rel="noopener noreferrer">Ask a question</a></li>
          <li><a href="https://github.com/notamitgamer/bsc/issues" target="_blank" rel="noopener noreferrer">Report an issue</a></li>
          <li><a href="/changelog">Changelog</a></li>
        </ul>
      </div>
    </div>

    <!-- Bottom Copyright & Utility Bar -->
    <div class="footer-bottom-bar">
      <span>BSc Code Index &copy; 2026</span>
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
    `Hi Amit,\n\nI found this page unhelpful because:\n\n---\nPage: ${pageTitle}\nPath: ${pagePath}`
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
  margin-top: 3rem;
  border-top: 1px solid var(--vp-c-divider);
  padding-top: 0;
  font-family: var(--vp-font-family-base);
}

.doc-footer-extra button,
.doc-footer-extra a {
  font-family: inherit;
}

/* ==================== SVG CONTAINER & BASELINE ==================== */
.footer-divider {
  width: 100%;
  height: 120px;
  overflow: hidden;
  position: relative;
}

.cityscape-svg {
  width: 100%;
  height: 100%;
  opacity: 0;
  transform: translateY(42px);
  will-change: transform, opacity;
}

/* Parallel straight vertical rise (^ ^ | |) */
.cityscape-svg.is-visible {
  animation: parallelVerticalRise 1.1s cubic-bezier(0.16, 1, 0.3, 1) forwards;
}

@keyframes parallelVerticalRise {
  0% {
    opacity: 0;
    transform: translateY(42px);
  }
  100% {
    opacity: 1;
    transform: translateY(0);
  }
}

/* ==================== DYNAMIC COLOR THEME (NO HARDCODING) ==================== */

/* Circular ambient background stops */
.stop-glow-center {
  stop-color: var(--vp-c-brand-3, #30a46c);
  stop-opacity: 0.22;
}
.stop-glow-mid {
  stop-color: var(--vp-c-brand-3, #30a46c);
  stop-opacity: 0.08;
}
.stop-glow-edge {
  stop-color: var(--vp-c-brand-3, #30a46c);
  stop-opacity: 0;
}

/* Continuous ground line */
.neon-baseline {
  stroke: var(--vp-c-brand-3, #30a46c);
  stroke-width: 1.5;
  opacity: 0.85;
}

/* Cube Facet Shadings */
.face-top {
  fill: color-mix(in srgb, var(--vp-c-brand-3, #30a46c) 70%, white 30%);
}
.face-top-bright {
  fill: color-mix(in srgb, var(--vp-c-brand-3, #30a46c) 50%, white 50%);
}
.face-top-luminous {
  fill: color-mix(in srgb, var(--vp-c-brand-3, #30a46c) 30%, white 70%);
}

.face-right {
  fill: var(--vp-c-brand-3, #30a46c);
}
.face-right-luminous {
  fill: color-mix(in srgb, var(--vp-c-brand-3, #30a46c) 85%, white 15%);
}

.face-left {
  fill: color-mix(in srgb, var(--vp-c-brand-3, #30a46c) 65%, black 35%);
}
.face-left-luminous {
  fill: color-mix(in srgb, var(--vp-c-brand-3, #30a46c) 75%, white 25%);
}

/* Heatmap commit contribution tiles */
.heat-0 {
  fill: color-mix(in srgb, var(--vp-c-brand-3, #30a46c) 45%, black 55%);
}
.heat-1 {
  fill: color-mix(in srgb, var(--vp-c-brand-3, #30a46c) 70%, black 30%);
}
.heat-2 {
  fill: var(--vp-c-brand-3, #30a46c);
}
.heat-3 {
  fill: color-mix(in srgb, var(--vp-c-brand-3, #30a46c) 75%, white 25%);
}
.heat-glow {
  fill: color-mix(in srgb, var(--vp-c-brand-3, #30a46c) 40%, white 60%);
}

/* ==================== FOOTER NAV & FEEDBACK STYLES ==================== */
.footer-top-row {
  display: flex;
  align-items: center;
  justify-content: space-between;
  padding: 0.9rem 0;
  border-bottom: 1px solid var(--vp-c-divider);
  color: var(--vp-c-text-2);
}
.gh-mark {
  color: var(--vp-c-text-2);
  display: flex;
}
.gh-mark:hover {
  color: var(--vp-c-text-1);
}

.back-to-top {
  display: flex;
  align-items: center;
  gap: 6px;
  background: none;
  border: none;
  color: var(--vp-c-text-2);
  font-size: 13px;
  cursor: pointer;
  font-weight: 500;
}
.back-to-top:hover {
  color: var(--vp-c-brand-1);
}

.footer-columns {
  display: grid;
  grid-template-columns: 1fr 1fr 1fr;
  gap: 2rem;
  padding: 1.75rem 0;
  border-bottom: 1px solid var(--vp-c-divider);
}
@media (max-width: 719px) {
  .footer-columns {
    grid-template-columns: 1fr;
    gap: 1.5rem;
  }
}

.col-title {
  font-size: 13px;
  text-transform: uppercase;
  letter-spacing: 0.04em;
  color: var(--vp-c-text-1);
  font-weight: 600;
  margin: 0 0 0.6rem;
}
.col-text {
  font-size: 13px;
  color: var(--vp-c-text-2);
  margin: 0 0 0.75rem;
  line-height: 1.5;
}

.helpful-btns {
  display: flex;
  gap: 0.5rem;
}
.vote-btn {
  border: 1px solid var(--vp-c-divider);
  background: var(--vp-c-bg-soft);
  color: var(--vp-c-text-1);
  border-radius: 6px;
  padding: 0.3rem 0.9rem;
  font-size: 13px;
  cursor: pointer;
}
.vote-btn:hover {
  border-color: var(--vp-c-brand-1);
  color: var(--vp-c-brand-1);
}
.thanks {
  font-size: 13px;
  color: var(--vp-c-brand-3);
  margin: 0;
}

.feedback-msg {
  font-size: 13px;
  color: var(--vp-c-text-2);
  line-height: 1.5;
  margin: 0;
}
.mail-link {
  color: var(--vp-c-brand-1);
  text-decoration: underline;
  text-underline-offset: 3px;
  font-weight: 500;
}
.mail-link:hover {
  color: var(--vp-c-brand-2);
}

.contribute-btn {
  display: inline-block;
  border: 1px solid var(--vp-c-divider);
  background: var(--vp-c-bg-soft);
  color: var(--vp-c-text-1);
  border-radius: 6px;
  padding: 0.3rem 0.9rem;
  font-size: 13px;
  text-decoration: none;
}
.contribute-btn:hover {
  border-color: var(--vp-c-brand-1);
  color: var(--vp-c-brand-1);
}

.help-links {
  list-style: none;
  margin: 0;
  padding: 0;
  display: flex;
  flex-direction: column;
  gap: 0.4rem;
}
.help-links a {
  font-size: 13px;
  color: var(--vp-c-text-2);
  text-decoration: none;
}
.help-links a:hover {
  color: var(--vp-c-brand-1);
}

.footer-bottom-bar {
  display: flex;
  justify-content: space-between;
  align-items: center;
  padding: 1rem 0;
  font-size: 12px;
  color: var(--vp-c-text-3, var(--vp-c-text-2));
}
.bottom-links {
  display: flex;
  gap: 1.2rem;
}
.bottom-links a {
  color: inherit;
  text-decoration: none;
}
.bottom-links a:hover {
  color: var(--vp-c-brand-1);
}
</style>
