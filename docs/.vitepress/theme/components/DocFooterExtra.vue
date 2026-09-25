<template>
  <div class="doc-footer-extra">
    <!-- Decorative divider: original isometric-cube illustration, our own composition/palette -->
    <div class="footer-divider" aria-hidden="true">
      <svg viewBox="0 0 1200 110" preserveAspectRatio="xMidYMid slice" xmlns="http://www.w3.org/2000/svg">
        <g class="cube">
          <polygon points="140,38 174,55 140,72 106,55" class="face-top" />
          <polygon points="106,55 140,72 140,106 106,89" class="face-left" />
          <polygon points="140,72 174,55 174,89 140,106" class="face-right" />
        </g>
        <g class="cube">
          <polygon points="195,15 225,30 195,45 165,30" class="face-top" />
          <polygon points="165,30 195,45 195,75 165,60" class="face-left" />
          <polygon points="195,45 225,30 225,60 195,75" class="face-right" />
        </g>
        <g class="cube">
          <polygon points="110,16 138,30 110,44 82,30" class="face-top" />
          <polygon points="82,30 110,44 110,72 82,58" class="face-left" />
          <polygon points="110,44 138,30 138,58 110,72" class="face-right" />
        </g>
        <g class="cube">
          <polygon points="1020,38 1054,55 1020,72 986,55" class="face-top" />
          <polygon points="986,55 1020,72 1020,106 986,89" class="face-left" />
          <polygon points="1020,72 1054,55 1054,89 1020,106" class="face-right" />
        </g>
        <g class="cube">
          <polygon points="1075,15 1105,30 1075,45 1045,30" class="face-top" />
          <polygon points="1045,30 1075,45 1075,75 1045,60" class="face-left" />
          <polygon points="1075,45 1105,30 1105,60 1075,75" class="face-right" />
        </g>
        <g class="cube">
          <polygon points="960,27 986,40 960,53 934,40" class="face-top" />
          <polygon points="934,40 960,53 960,79 934,66" class="face-left" />
          <polygon points="960,53 986,40 986,66 960,79" class="face-right" />
        </g>
      </svg>
    </div>

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

    <div class="footer-columns">
      <div class="col helpful-col">
        <p class="col-title">Was this page helpful?</p>
        <div class="helpful-btns" v-if="!voted">
          <button class="vote-btn" @click="vote(true)">Yes</button>
          <button class="vote-btn" @click="vote(false)">No</button>
        </div>
        <p class="thanks" v-else>Thanks for the feedback!</p>
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
import { ref } from 'vue'
import { useData } from 'vitepress'

const { frontmatter, page } = useData()
const voted = ref(false)

function vote(isYes) {
  voted.value = true
  // Cosmetic only for now — wire to Algolia Insights or a simple API later if you want real analytics.
}

function scrollTop() {
  window.scrollTo({ top: 0, behavior: 'smooth' })
}

const editUrl = frontmatter.value.source
  ? `https://github.com/notamitgamer/bsc/edit/main/${frontmatter.value.source}`
  : `https://github.com/notamitgamer/bsc/edit/main/docs/${page.value.filePath}`
</script>

<style scoped>
.doc-footer-extra {
  margin-top: 3rem;
  border-top: 1px solid var(--vp-c-divider);
  padding-top: 0;
}

/* Decorative divider */
.footer-divider {
  width: 100%;
  height: 90px;
  overflow: hidden;
  opacity: 0.9;
}
.footer-divider svg {
  width: 100%;
  height: 100%;
}
/* Isometric shading: top face lightest, right face mid, left face darkest —
   using your brand green as the base hue. */
.cube .face-top   { fill: color-mix(in srgb, var(--vp-c-brand-3, #30a46c) 70%, white 30%); }
.cube .face-right  { fill: var(--vp-c-brand-3, #30a46c); }
.cube .face-left   { fill: color-mix(in srgb, var(--vp-c-brand-3, #30a46c) 65%, black 35%); }
.cube { opacity: 0.9; }

.footer-top-row {
  display: flex;
  align-items: center;
  justify-content: space-between;
  padding: 0.9rem 0;
  border-bottom: 1px solid var(--vp-c-divider);
  color: var(--vp-c-text-2);
}
.gh-mark { color: var(--vp-c-text-2); display: flex; }
.gh-mark:hover { color: var(--vp-c-text-1); }

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
.back-to-top:hover { color: var(--vp-c-brand-1); }

.footer-columns {
  display: grid;
  grid-template-columns: 1fr 1fr 1fr;
  gap: 2rem;
  padding: 1.75rem 0;
  border-bottom: 1px solid var(--vp-c-divider);
}
@media (max-width: 719px) {
  .footer-columns { grid-template-columns: 1fr; gap: 1.5rem; }
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

.helpful-btns { display: flex; gap: 0.5rem; }
.vote-btn {
  border: 1px solid var(--vp-c-divider);
  background: var(--vp-c-bg-soft);
  color: var(--vp-c-text-1);
  border-radius: 6px;
  padding: 0.3rem 0.9rem;
  font-size: 13px;
  cursor: pointer;
}
.vote-btn:hover { border-color: var(--vp-c-brand-1); color: var(--vp-c-brand-1); }
.thanks { font-size: 13px; color: var(--vp-c-brand-3); }

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
.contribute-btn:hover { border-color: var(--vp-c-brand-1); color: var(--vp-c-brand-1); }

.help-links { list-style: none; margin: 0; padding: 0; display: flex; flex-direction: column; gap: 0.4rem; }
.help-links a { font-size: 13px; color: var(--vp-c-text-2); text-decoration: none; }
.help-links a:hover { color: var(--vp-c-brand-1); }

.footer-bottom-bar {
  display: flex;
  justify-content: space-between;
  align-items: center;
  padding: 1rem 0;
  font-size: 12px;
  color: var(--vp-c-text-3, var(--vp-c-text-2));
}
.bottom-links { display: flex; gap: 1.2rem; }
.bottom-links a { color: inherit; text-decoration: none; }
.bottom-links a:hover { color: var(--vp-c-brand-1); }
</style>
