<template>
  <footer class="bsc-footer" :class="{ 'is-home': isHome }">
    <!-- Catppuccin line art, tinted with the active theme via CSS mask -->
    <div class="bsc-footer-art" aria-hidden="true"></div>

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

/* Line art: alpha of the SVG is used as a mask, colour comes from the theme */
.bsc-footer-art {
  width: min(100%, 600px);
  aspect-ratio: 600 / 75;
  margin: 0 auto 1.25rem;
  background-color: var(--vp-c-text-3);
  opacity: 0.8;
  -webkit-mask: url('/footer-line.svg') center / contain no-repeat;
  mask: url('/footer-line.svg') center / contain no-repeat;
}

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
