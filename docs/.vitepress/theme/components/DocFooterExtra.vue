<template>
  <div class="doc-footer-extra">
    <!-- Static isometric commit skyline -->
    <div class="footer-divider" aria-hidden="true">
      <svg
        viewBox="0 0 900 170"
        preserveAspectRatio="xMidYMid meet"
        xmlns="http://www.w3.org/2000/svg"
        class="cityscape-svg"
      >
        <defs>
          <clipPath id="heatLeftTall">
            <polygon points="112,70 142,85 142,132 112,117" />
          </clipPath>
          <clipPath id="heatLeftMedium">
            <polygon points="205,82 233,96 233,132 205,118" />
          </clipPath>
          <clipPath id="heatLeftShort">
            <polygon points="287,99 311,111 311,132 287,120" />
          </clipPath>

          <clipPath id="heatRightOne">
            <polygon points="560,88 588,102 588,132 560,118" />
          </clipPath>
          <clipPath id="heatRightTwo">
            <polygon points="625,100 649,112 649,132 625,120" />
          </clipPath>
          <clipPath id="heatRightThree">
            <polygon points="681,75 709,89 709,132 681,118" />
          </clipPath>
          <clipPath id="heatRightFour">
            <polygon points="735,91 759,103 759,132 735,120" />
          </clipPath>
        </defs>

        <!-- Left: leaderboard / contribution bars -->
        <g class="cube cube-tall">
          <polygon points="112,70 142,55 172,70 142,85" class="face-top" />
          <polygon points="112,70 142,85 142,132 112,117" class="face-left" />

          <g clip-path="url(#heatLeftTall)" class="heatmap">
            <rect x="114" y="71" width="6" height="6" class="heat-1" />
            <rect x="121" y="74" width="6" height="6" class="heat-3" />
            <rect x="128" y="77" width="6" height="6" class="heat-2" />
            <rect x="135" y="80" width="6" height="6" class="heat-4" />
            <rect x="114" y="79" width="6" height="6" class="heat-2" />
            <rect x="121" y="82" width="6" height="6" class="heat-4" />
            <rect x="128" y="85" width="6" height="6" class="heat-1" />
            <rect x="135" y="88" width="6" height="6" class="heat-3" />
            <rect x="114" y="87" width="6" height="6" class="heat-4" />
            <rect x="121" y="90" width="6" height="6" class="heat-2" />
            <rect x="128" y="93" width="6" height="6" class="heat-3" />
            <rect x="135" y="96" width="6" height="6" class="heat-1" />
            <rect x="114" y="95" width="6" height="6" class="heat-2" />
            <rect x="121" y="98" width="6" height="6" class="heat-3" />
            <rect x="128" y="101" width="6" height="6" class="heat-4" />
            <rect x="135" y="104" width="6" height="6" class="heat-2" />
            <rect x="114" y="103" width="6" height="6" class="heat-3" />
            <rect x="121" y="106" width="6" height="6" class="heat-1" />
            <rect x="128" y="109" width="6" height="6" class="heat-2" />
            <rect x="135" y="112" width="6" height="6" class="heat-4" />
          </g>

          <polygon points="142,85 172,70 172,117 142,132" class="face-right" />
        </g>

        <g class="cube cube-medium">
          <polygon points="205,82 233,68 261,82 233,96" class="face-top" />
          <polygon points="205,82 233,96 233,132 205,118" class="face-left" />

          <g clip-path="url(#heatLeftMedium)" class="heatmap">
            <rect x="207" y="83" width="6" height="6" class="heat-2" />
            <rect x="214" y="86" width="6" height="6" class="heat-4" />
            <rect x="221" y="89" width="6" height="6" class="heat-1" />
            <rect x="207" y="91" width="6" height="6" class="heat-3" />
            <rect x="214" y="94" width="6" height="6" class="heat-2" />
            <rect x="221" y="97" width="6" height="6" class="heat-4" />
            <rect x="207" y="99" width="6" height="6" class="heat-4" />
            <rect x="214" y="102" width="6" height="6" class="heat-1" />
            <rect x="221" y="105" width="6" height="6" class="heat-3" />
            <rect x="207" y="107" width="6" height="6" class="heat-2" />
            <rect x="214" y="110" width="6" height="6" class="heat-3" />
            <rect x="221" y="113" width="6" height="6" class="heat-1" />
          </g>

          <polygon points="233,96 261,82 261,118 233,132" class="face-right" />
        </g>

        <g class="cube cube-short">
          <polygon points="287,99 311,87 335,99 311,111" class="face-top" />
          <polygon points="287,99 311,111 311,132 287,120" class="face-left" />

          <g clip-path="url(#heatLeftShort)" class="heatmap">
            <rect x="289" y="100" width="6" height="6" class="heat-1" />
            <rect x="296" y="103" width="6" height="6" class="heat-3" />
            <rect x="303" y="106" width="6" height="6" class="heat-2" />
            <rect x="289" y="108" width="6" height="6" class="heat-4" />
            <rect x="296" y="111" width="6" height="6" class="heat-1" />
            <rect x="303" y="114" width="6" height="6" class="heat-3" />
          </g>

          <polygon points="311,111 335,99 335,120 311,132" class="face-right" />
        </g>

        <!-- Right: staggered four-cube staircase -->
        <g class="cube">
          <polygon points="560,88 588,74 616,88 588,102" class="face-top" />
          <polygon points="560,88 588,102 588,132 560,118" class="face-left" />
          <polygon points="588,102 616,88 616,118 588,132" class="face-right" />
        </g>

        <g class="cube">
          <polygon points="625,100 649,88 673,100 649,112" class="face-top" />
          <polygon points="625,100 649,112 649,132 625,120" class="face-left" />
          <polygon points="649,112 673,100 673,120 649,132" class="face-right" />
        </g>

        <g class="cube">
          <polygon points="681,75 709,61 737,75 709,89" class="face-top" />
          <polygon points="681,75 709,89 709,132 681,118" class="face-left" />
          <polygon points="709,89 737,75 737,118 709,132" class="face-right" />
        </g>

        <g class="cube">
          <polygon points="735,91 759,79 783,91 759,103" class="face-top" />
          <polygon points="735,91 759,103 759,132 735,120" class="face-left" />
          <polygon points="759,103 783,91 783,120 759,132" class="face-right" />
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
            <path d="M8 13V3M3 8l5-5 5 5" stroke-linecap="round" stroke-linejoin="round"/>
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
          <p class="feedback-msg" v-else>
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
import { ref, computed } from 'vue'
import { useData } from 'vitepress'

const { frontmatter, page } = useData()
const voteStatus = ref(null)

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
</script>

<style scoped>
.doc-footer-extra {
  margin-top: 3rem;
  padding-top: 0;
  font-family: var(--vp-font-family-base);
  color: var(--vp-c-text-1);
}

.doc-footer-extra button,
.doc-footer-extra a {
  font-family: inherit;
}

/* ==================== STATIC ISOMETRIC CUBES ==================== */

.footer-divider {
  width: 100%;
  height: 120px;
  overflow: hidden;
  position: relative;
  margin-bottom: 0.25rem;
}

.cityscape-svg {
  display: block;
  width: 100%;
  height: 100%;
}

.cube .face-top {
  fill: color-mix(in srgb, var(--vp-c-brand-3) 70%, var(--vp-c-bg) 30%);
}

.cube .face-left {
  fill: color-mix(in srgb, var(--vp-c-brand-3) 65%, var(--vp-c-bg) 35%);
}

.cube .face-right {
  fill: var(--vp-c-brand-3);
}

.heatmap rect {
  shape-rendering: crispEdges;
}

.heat-1 {
  fill: var(--vp-c-brand-3);
  opacity: 0.28;
}

.heat-2 {
  fill: var(--vp-c-brand-3);
  opacity: 0.46;
}

.heat-3 {
  fill: var(--vp-c-brand-3);
  opacity: 0.68;
}

.heat-4 {
  fill: var(--vp-c-brand-3);
  opacity: 0.92;
}

/* ==================== TOP UTILITY ROW ==================== */

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
}

.gh-mark:hover,
.back-to-top:hover {
  color: var(--vp-c-brand-1);
}

.back-to-top {
  background: none;
  border: 0;
  cursor: pointer;
  padding: 8px 0;
}

.back-icon {
  display: grid;
  place-items: center;
  width: 23px;
  height: 23px;
  border: 1px solid var(--vp-c-divider);
  border-radius: 6px;
}

.back-to-top:hover .back-icon {
  border-color: var(--vp-c-brand-3);
  background: var(--vp-c-brand-soft);
}

/* ==================== FEEDBACK CARDS ==================== */

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
  background: var(--vp-c-bg-soft);
}

.footer-card:hover {
  border-color: color-mix(in srgb, var(--vp-c-brand-3) 45%, var(--vp-c-divider));
}

.card-icon {
  flex: 0 0 auto;
  display: grid;
  place-items: center;
  width: 32px;
  height: 32px;
  border: 1px solid color-mix(in srgb, var(--vp-c-brand-3) 35%, var(--vp-c-divider));
  border-radius: 8px;
  background: var(--vp-c-brand-soft);
  color: var(--vp-c-brand-1);
  font-size: 14px;
  font-weight: 700;
}

.card-content {
  min-width: 0;
}

.col-title {
  margin: 1px 0 7px;
  color: var(--vp-c-text-1);
  font-size: 13px;
  font-weight: 650;
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
  border: 1px solid color-mix(in srgb, var(--vp-c-brand-3) 38%, var(--vp-c-divider));
  border-radius: 7px;
  background: var(--vp-c-brand-soft);
  color: var(--vp-c-brand-1);
  padding: 7px 10px;
  font-size: 12px;
  font-weight: 550;
  text-decoration: none;
  cursor: pointer;
}

.vote-btn.secondary {
  border-color: var(--vp-c-divider);
  background: transparent;
  color: var(--vp-c-text-2);
}

.vote-btn:hover,
.contribute-btn:hover {
  border-color: var(--vp-c-brand-3);
  background: var(--vp-c-brand-soft);
}

.thanks,
.feedback-msg {
  margin: 0;
  color: var(--vp-c-text-2);
  font-size: 12px;
  line-height: 1.55;
}

.thanks,
.mail-link {
  color: var(--vp-c-brand-1);
}

.mail-link {
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
}

.help-links a:hover {
  color: var(--vp-c-brand-1);
}

/* ==================== BOTTOM BAR ==================== */

.footer-bottom-bar {
  display: flex;
  align-items: center;
  justify-content: space-between;
  min-height: 58px;
  color: var(--vp-c-text-3);
  font-size: 11px;
}

.dot {
  margin: 0 3px;
  color: var(--vp-c-brand-1);
}

.bottom-links {
  display: flex;
  gap: 18px;
}

.bottom-links a {
  color: inherit;
  text-decoration: none;
}

.bottom-links a:hover {
  color: var(--vp-c-brand-1);
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
    height: 105px;
  }

  .cityscape-svg {
    width: 145%;
    max-width: none;
    margin-left: -22.5%;
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
</style>
