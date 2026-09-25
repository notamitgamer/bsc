<template>
  <div class="doc-footer-extra">
    <!-- Decorative divider: original isometric-cube illustration -->
    <div class="footer-divider" aria-hidden="true">
      <svg viewBox="0 0 700 110" preserveAspectRatio="xMidYMid meet" xmlns="http://www.w3.org/2000/svg">
        
        <!-- LEFT CLUSTER: Downward Arrow (3 Cubes - Unchanged) -->
        <g class="cube">
          <polygon points="100,38 134,55 100,72 66,55" class="face-top" />
          <polygon points="66,55 100,72 100,106 66,89" class="face-left" />
          <polygon points="100,72 134,55 134,89 100,106" class="face-right" />
        </g>
        <g class="cube">
          <polygon points="155,15 185,30 155,45 125,30" class="face-top" />
          <polygon points="125,30 155,45 155,75 125,60" class="face-left" />
          <polygon points="155,45 185,30 185,60 155,75" class="face-right" />
        </g>
        <g class="cube">
          <polygon points="40,27 66,40 40,53 14,40" class="face-top" />
          <polygon points="14,40 40,53 40,79 14,66" class="face-left" />
          <polygon points="40,53 66,40 66,66 40,79" class="face-right" />
        </g>

        <!-- RIGHT CLUSTER: Leftward Arrow (4 Cubes - NEW) -->
        <!-- Tip of the arrow (Leftmost in this group) -->
        <g class="cube">
          <polygon points="530,38 564,55 530,72 496,55" class="face-top" />
          <polygon points="496,55 530,72 530,106 496,89" class="face-left" />
          <polygon points="530,72 564,55 564,89 530,106" class="face-right" />
        </g>
        <!-- Body Cube 1 -->
        <g class="cube">
          <polygon points="575,38 609,55 575,72 541,55" class="face-top" />
          <polygon points="541,55 575,72 575,106 541,89" class="face-left" />
          <polygon points="575,72 609,55 609,89 575,106" class="face-right" />
        </g>
        <!-- Body Cube 2 -->
        <g class="cube">
          <polygon points="620,38 654,55 620,72 586,55" class="face-top" />
          <polygon points="586,55 620,72 620,106 586,89" class="face-left" />
          <polygon points="620,72 654,55 654,89 620,106" class="face-right" />
        </g>
        <!-- End Cube (Rightmost) -->
        <g class="cube">
          <polygon points="665,38 699,55 665,72 631,55" class="face-top" />
          <polygon points="631,55 665,72 665,106 631,89" class="face-left" />
          <polygon points="665,72 699,55 699,89 665,106" class="face-right" />
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
import { ref, computed } from 'vue'
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

// Must be computed(), not a plain const — VitePress does client-side route
// navigation without remounting this component, so a plain const would
// freeze at whatever page was loaded first and never update again.
const editUrl = computed(() =>
  frontmatter.value.source
    ? `https://github.com/notamitgamer/bsc/edit/main/${frontmatter.value.source}`
    : `https://github.com/notamitgamer/bsc/edit/main/docs/${page.value.filePath}`
)
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
