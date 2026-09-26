<template>
  <div class="doc-footer-extra">
    <!-- Decorative divider: original isometric skyline illustration -->
    <div class="footer-divider" aria-hidden="true">
      <svg viewBox="0 0 900 140" preserveAspectRatio="xMidYMax slice" xmlns="http://www.w3.org/2000/svg">

        <!-- Ground line -->
        <line x1="0" y1="128" x2="900" y2="128" class="ground-line" />

        <!-- ===== Far background row (smaller, dimmer, fills gaps) ===== -->
        <g class="bldg bg-row">
          <polygon points="60,90 100,90 100,128 60,128" />
          <polygon points="230,78 265,78 265,128 230,128" />
          <polygon points="420,85 450,85 450,128 420,128" />
          <polygon points="600,72 640,72 640,128 600,128" />
          <polygon points="760,88 795,88 795,128 760,128" />
        </g>

        <!-- ===== Cluster 1: low pitched-roof building ===== -->
        <g class="cube">
          <polygon points="40,70 70,55 100,70 100,110 40,110" class="face-front" />
          <polygon points="40,70 70,55 70,95 40,110" class="face-side" />
          <polygon points="70,55 100,70 100,110 70,95" class="face-front" />
        </g>
        <polygon points="46,80 54,80 54,90 46,90" class="window heat-1" />
        <polygon points="60,80 68,80 68,90 60,90" class="window heat-1" />
        <polygon points="46,95 54,95 54,105" class="window heat-2" />

        <!-- ===== Cluster 1: tall slim tower ===== -->
        <g class="cube">
          <polygon points="105,20 130,8 155,20 155,110 105,110" class="face-front" />
          <polygon points="105,20 130,8 130,98 105,110" class="face-side" />
          <polygon points="130,8 155,20 155,110 130,98" class="face-front" />
        </g>
        <polygon points="111,30 118,30 118,40 111,40" class="window heat-2" />
        <polygon points="123,25 130,25 130,35 123,35" class="window heat-1" />
        <polygon points="111,45 118,45 118,55 111,55" class="window heat-3" />
        <polygon points="123,40 130,40 130,50 123,50" class="window heat-1" />
        <polygon points="111,60 118,60 118,70 111,70" class="window heat-1" />
        <polygon points="123,55 130,55 130,65 123,65" class="window heat-4" />
        <polygon points="111,75 118,75 118,85 111,85" class="window heat-2" />
        <polygon points="123,70 130,70 130,80 123,80" class="window heat-1" />
        <polygon points="136,25 143,25 143,35" class="window heat-1" />
        <polygon points="148,20 155,20 155,30" class="window heat-2" />
        <polygon points="136,45 143,45 143,55" class="window heat-2" />
        <polygon points="136,65 143,65 143,75" class="window heat-1" />

        <!-- ===== Cluster 1: mid box building ===== -->
        <g class="cube">
          <polygon points="160,50 190,38 220,50 220,110 160,110" class="face-front" />
          <polygon points="160,50 190,38 190,98 160,110" class="face-side" />
          <polygon points="190,38 220,50 220,110 190,98" class="face-front" />
        </g>
        <polygon points="167,60 176,60 176,70 167,70" class="window heat-2" />
        <polygon points="182,55 191,55 191,65 182,65" class="window heat-1" />
        <polygon points="167,75 176,75 176,85 167,85" class="window heat-4" />
        <polygon points="182,70 191,70 191,80 182,80" class="window heat-2" />
        <polygon points="167,90 176,90 176,100 167,100" class="window heat-1" />
        <polygon points="196,50 205,50 205,60" class="window heat-1" />
        <polygon points="210,45 219,45 219,55" class="window heat-3" />
        <polygon points="196,65 205,65 205,75" class="window heat-1" />
        <polygon points="196,80 205,80 205,90" class="window heat-2" />

        <!-- ===== Middle: low wide connector building bridges the gap ===== -->
        <g class="cube">
          <polygon points="440,95 480,80 520,95 520,110 440,110" class="face-front" />
          <polygon points="440,95 480,80 480,100 440,110" class="face-side" />
          <polygon points="480,80 520,95 520,110 480,100" class="face-front" />
        </g>

        <!-- ===== Cluster 2: box building with </> motif ===== -->
        <g class="cube">
          <polygon points="600,45 635,30 670,45 670,110 600,110" class="face-front" />
          <polygon points="600,45 635,30 635,95 600,110" class="face-side" />
          <polygon points="635,30 670,45 670,110 635,95" class="face-front" />
        </g>
        <!-- </> emblem panel -->
        <rect x="611" y="55" width="46" height="30" rx="3" class="emblem-panel" />
        <text x="634" y="76" text-anchor="middle" class="emblem-text">&lt;/&gt;</text>
        <polygon points="607,95 616,95 616,105 607,105" class="window heat-2" />
        <polygon points="622,95 631,95 631,105 622,105" class="window heat-1" />
        <polygon points="641,90 650,90 650,100" class="window heat-2" />
        <polygon points="656,85 665,85 665,95" class="window heat-1" />

        <!-- ===== Cluster 2: tallest tower ===== -->
        <g class="cube">
          <polygon points="675,15 705,2 735,15 735,110 675,110" class="face-front" />
          <polygon points="675,15 705,2 705,97 675,110" class="face-side" />
          <polygon points="705,2 735,15 735,110 705,97" class="face-front" />
        </g>
        <polygon points="681,25 689,25 689,35 681,35" class="window heat-1" />
        <polygon points="696,20 704,20 704,30 696,30" class="window heat-3" />
        <polygon points="681,40 689,40 689,50 681,50" class="window heat-2" />
        <polygon points="696,35 704,35 704,45 696,45" class="window heat-1" />
        <polygon points="681,55 689,55 689,65 681,65" class="window heat-4" />
        <polygon points="696,50 704,50 704,60 696,60" class="window heat-1" />
        <polygon points="681,70 689,70 689,80 681,80" class="window heat-1" />
        <polygon points="696,65 704,65 704,75 696,75" class="window heat-2" />
        <polygon points="681,85 689,85 689,95 681,95" class="window heat-2" />
        <polygon points="710,20 718,20 718,30" class="window heat-1" />
        <polygon points="724,15 732,15 732,25" class="window heat-2" />
        <polygon points="710,40 718,40 718,50" class="window heat-1" />
        <polygon points="724,35 732,35 732,45" class="window heat-1" />
        <polygon points="710,60 718,60 718,70" class="window heat-3" />
        <polygon points="724,55 732,55 732,65" class="window heat-1" />
        <polygon points="710,80 718,80 718,90" class="window heat-1" />

        <!-- ===== Cluster 2: small stepped building ===== -->
        <g class="cube">
          <polygon points="740,68 765,56 790,68 790,110 740,110" class="face-front" />
          <polygon points="740,68 765,56 765,102 740,110" class="face-side" />
          <polygon points="765,56 790,68 790,110 765,102" class="face-front" />
        </g>
        <polygon points="746,78 754,78 754,88 746,88" class="window heat-1" />
        <polygon points="759,74 767,74 767,84 759,84" class="window heat-1" />
        <polygon points="746,92 754,92 754,102 746,102" class="window heat-2" />
        <polygon points="772,68 780,68 780,78" class="window heat-1" />

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
import { computed } from 'vue'
import { useData } from 'vitepress'

const { frontmatter, page } = useData()

function scrollTop() {
  window.scrollTo({ top: 0, behavior: 'smooth' })
}

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
  height: 130px;
  overflow: hidden;
  opacity: 0.95;
}
.footer-divider svg {
  width: 100%;
  height: 100%;
  display: block;
}

.ground-line {
  stroke: var(--vp-c-divider);
  stroke-width: 1;
}

.face-front { fill: var(--vp-c-brand-3, #30a46c); }
.face-side  { fill: color-mix(in srgb, var(--vp-c-brand-3, #30a46c) 60%, black 40%); }

.bg-row polygon {
  fill: color-mix(in srgb, var(--vp-c-brand-3, #30a46c) 35%, black 65%);
  opacity: 0.7;
}

.window { stroke: none; }
.heat-1 { fill: color-mix(in srgb, var(--vp-c-brand-3, #30a46c) 20%, black 20%); opacity: 0.5; }
.heat-2 { fill: #9be9a8; opacity: 0.85; }
.heat-3 { fill: #40c463; opacity: 0.9; }
.heat-4 { fill: #ffd166; opacity: 0.95; } /* brightest windows read as "lit" against the green */

.emblem-panel {
  fill: color-mix(in srgb, var(--vp-c-brand-3, #30a46c) 60%, black 40%);
  stroke: #ffd166;
  stroke-width: 1;
}
.emblem-text {
  fill: #ffd166;
  font-family: var(--vp-font-family-mono, monospace);
  font-size: 13px;
  font-weight: 600;
}

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
  grid-template-columns: 1fr 1fr;
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
