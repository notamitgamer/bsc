<template>
  <footer class="bsc-footer" :class="{ 'is-home': isHome }">
    <!-- Original mark: hairline rule with a small `{ ; }` glyph (C-flavoured) -->
    <div class="bsc-footer-mark" aria-hidden="true">
      <span class="rule rule-l"></span>
      <svg viewBox="0 0 24 24" width="26" height="26" fill="none" stroke="currentColor" stroke-width="1.6" stroke-linecap="round" stroke-linejoin="round">
        <path d="M9 4C7 4 6 5 6 7v2c0 1.5-1 2.5-2.5 3C5 12.5 6 13.5 6 15v2c0 2 1 3 3 3" />
        <path d="M15 4c2 0 3 1 3 3v2c0 1.5 1 2.5 2.5 3-1.5.5-2.5 1.5-2.5 3v2c0 2-1 3-3 3" />
        <circle cx="12" cy="10.5" r="1.1" fill="var(--vp-c-brand-1)" stroke="none" />
        <path d="M12 13v1.5c0 .8-.3 1.5-1 2" stroke="var(--vp-c-brand-1)" />
      </svg>
      <span class="rule rule-r"></span>
    </div>

    <nav class="bsc-footer-links" aria-label="Footer">
      <a href="https://github.com/notamitgamer/bsc/issues/new/choose" target="_blank" rel="noopener noreferrer">Suggest an edit</a>
      <a href="https://github.com/notamitgamer/bsc/discussions" target="_blank" rel="noopener noreferrer">Discussions</a>
      <a href="https://github.com/notamitgamer/bsc/issues" target="_blank" rel="noopener noreferrer">Issues</a>
      <a href="https://github.com/notamitgamer/bsc/tree/main/utils/bsc_md" target="_blank" rel="noopener noreferrer">Scripts</a>
      <a href="/changelog">Changelog</a>
      <a href="/terms">Terms</a>
      <a href="https://github.com/notamitgamer/bsc" target="_blank" rel="noopener noreferrer">GitHub</a>
      <button type="button" class="bsc-footer-top" @click="scrollTop">Top &uarr;</button>
    </nav>

    <p class="bsc-footer-copy">
      &copy; 2025–2026
      <a href="https://github.com/notamitgamer" target="_blank" rel="noopener noreferrer">notamitgamer</a>
      <span class="sep">•</span>
      <a href="https://github.com/notamitgamer/bsc/blob/main/LICENSE" target="_blank" rel="noopener noreferrer">MIT License</a>
      <span class="sep">•</span>
      Themed with
      <a href="https://github.com/catppuccin/vitepress" target="_blank" rel="noopener noreferrer">Catppuccin</a>
    </p>
  </footer>
</template>

<script setup>
import { computed } from 'vue'
import { useData } from 'vitepress'

const { page } = useData()
const isHome = computed(() => page.value?.frontmatter?.layout === 'home')

function scrollTop() {
  window.scrollTo({ top: 0, behavior: 'smooth' })
}
</script>

<style scoped>
.bsc-footer {
  margin: 3.5rem auto 0;
  padding: 0 24px 2.5rem;
  width: 100%;
  max-width: 688px;
  box-sizing: border-box;
  clear: both;
  text-align: center;
  font-family: var(--vp-font-family-base);
}

.bsc-footer.is-home {
  max-width: 1152px;
  padding-left: 64px;
  padding-right: 64px;
}

@media (max-width: 960px) {
  .bsc-footer.is-home { padding-left: 32px; padding-right: 32px; }
}

@media (max-width: 640px) {
  .bsc-footer,
  .bsc-footer.is-home { padding-left: 16px; padding-right: 16px; }
}

/* Hairline rule fading out to both sides, glyph centred */
.bsc-footer-mark {
  display: flex;
  align-items: center;
  gap: 14px;
  margin: 0 auto 1.25rem;
  color: var(--vp-c-text-3);
}

.bsc-footer-mark .rule {
  flex: 1;
  height: 1px;
}

.rule-l { background: linear-gradient(to right, transparent, var(--vp-c-divider)); }
.rule-r { background: linear-gradient(to left, transparent, var(--vp-c-divider)); }

.bsc-footer-links {
  display: flex;
  flex-wrap: wrap;
  justify-content: center;
  align-items: center;
  gap: 0.35rem 1.25rem;
  font-size: 13px;
}

.bsc-footer-links a,
.bsc-footer-top {
  color: var(--vp-c-text-2);
  text-decoration: none;
  font: inherit;
  background: none;
  border: none;
  padding: 0;
  cursor: pointer;
  transition: color 0.2s;
}

.bsc-footer-links a:hover,
.bsc-footer-top:hover {
  color: var(--vp-c-brand-1);
}

.bsc-footer-copy {
  margin: 0.9rem 0 0;
  font-size: 12px;
  color: var(--vp-c-text-3);
}

.bsc-footer-copy a {
  color: var(--vp-c-text-2);
  text-decoration: none;
  transition: color 0.2s;
}

.bsc-footer-copy a:hover {
  color: var(--vp-c-brand-1);
}

.sep {
  margin: 0 0.4rem;
}
</style>
