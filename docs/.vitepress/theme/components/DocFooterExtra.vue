<template>
  <footer class="doc-footer-extra" :class="{ 'is-home': isHome }">
    <!-- Decorative divider: rising entrance animation on scroll -->
    <div
      ref="dividerRef"
      class="footer-divider"
      :class="{ 'is-visible': isDividerVisible }"
      aria-hidden="true"
    >
      <img
        src="/skyline3.svg"
        alt=""
        class="footer-divider-img"
        width="1000"
        height="460"
        loading="lazy"
        decoding="async"
      />
    </div>

    <!-- Top Action & Meta Row -->
    <div class="footer-top-row">
      <div class="top-row-left">
        <a
          href="https://github.com/notamitgamer/bsc"
          target="_blank"
          rel="noopener noreferrer"
          class="gh-mark"
          aria-label="View BSc Repository on GitHub"
        >
          <svg viewBox="0 0 16 16" width="22" height="22" fill="currentColor">
            <path
              d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27s1.36.09 2 .27 c1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.01 8.01 0 0 0 16 8c0-4.42-3.58-8-8-8Z"
            />
          </svg>
        </a>
        <span class="repo-badge">
          <span class="badge-dot"></span>
          <code>main</code> • bsc-v2026
        </span>
      </div>

      <button class="back-to-top" type="button" @click="scrollTop">
        Back to top
        <svg
          viewBox="0 0 16 16"
          width="14"
          height="14"
          fill="none"
          stroke="currentColor"
          stroke-width="2"
        >
          <path
            d="M8 13V3M3 8l5-5 5 5"
            stroke-linecap="round"
            stroke-linejoin="round"
          />
        </svg>
      </button>
    </div>

    <!-- M3 Bento Grid Columns -->
    <div class="footer-columns">
      <div class="footer-card">
        <div class="card-header">
          <svg class="card-icon" viewBox="0 0 24 24" width="18" height="18" fill="none" stroke="currentColor" stroke-width="2">
            <path d="M11 4H4a2 2 0 0 0-2 2v14a2 2 0 0 0 2 2h14a2 2 0 0 0 2-2v-7" stroke-linecap="round" stroke-linejoin="round"/>
            <path d="M18.5 2.5a2.121 2.121 0 0 1 3 3L12 15l-4 1 1-4 9.5-9.5z" stroke-linecap="round" stroke-linejoin="round"/>
          </svg>
          <span class="col-title">Help Improve</span>
        </div>
        <p class="col-text">
          Spotted a typo, broken snippet, or missing lab note? Contributions are welcome.
        </p>
        <a
          href="https://github.com/notamitgamer/bsc/issues/new/choose"
          target="_blank"
          rel="noopener noreferrer"
          class="m3-tonal-btn"
        >
          Suggest an edit
        </a>
      </div>

      <div class="footer-card">
        <div class="card-header">
          <svg class="card-icon" viewBox="0 0 24 24" width="18" height="18" fill="none" stroke="currentColor" stroke-width="2">
            <polyline points="16 18 22 12 16 6" stroke-linecap="round" stroke-linejoin="round"/>
            <polyline points="8 6 2 12 8 18" stroke-linecap="round" stroke-linejoin="round"/>
          </svg>
          <span class="col-title">Automation & Scripts</span>
        </div>
        <p class="col-text">
          Want to inspect or modify the underlying scrapers, parsers, and generators?
        </p>
        <a
          href="https://github.com/notamitgamer/bsc/tree/main/utils/bsc_md"
          target="_blank"
          rel="noopener noreferrer"
          class="m3-tonal-btn"
        >
          View scripts
        </a>
      </div>

      <div class="footer-card">
        <div class="card-header">
          <svg class="card-icon" viewBox="0 0 24 24" width="18" height="18" fill="none" stroke="currentColor" stroke-width="2">
            <circle cx="12" cy="12" r="10" stroke-linecap="round" stroke-linejoin="round"/>
            <path d="M9.09 9a3 3 0 0 1 5.83 1c0 2-3 3-3 3" stroke-linecap="round" stroke-linejoin="round"/>
            <line x1="12" y1="17" x2="12.01" y2="17" stroke-linecap="round" stroke-linejoin="round"/>
          </svg>
          <span class="col-title">Community & Support</span>
        </div>
        <ul class="help-links">
          <li>
            <a
              href="https://github.com/notamitgamer/bsc/discussions"
              target="_blank"
              rel="noopener noreferrer"
            >
              Ask a question &rarr;
            </a>
          </li>
          <li>
            <a
              href="https://github.com/notamitgamer/bsc/issues"
              target="_blank"
              rel="noopener noreferrer"
            >
              Report an issue &rarr;
            </a>
          </li>
          <li>
            <a href="/changelog">Changelog & revision history &rarr;</a>
          </li>
        </ul>
      </div>
    </div>

    <!-- Copyright & Legal Bottom Bar -->
    <div class="footer-bottom-bar">
      <div class="copyright-line">
        <span>&copy; 2025–2026 </span>
        <a
          href="https://github.com/notamitgamer"
          target="_blank"
          rel="noopener noreferrer"
          class="author-link"
        >
          notamitgamer
        </a>
        <span class="license-sep">•</span>
        <span>All content is licensed under the </span>
        <a
          href="https://github.com/notamitgamer/bsc/blob/main/LICENSE"
          target="_blank"
          rel="noopener noreferrer"
          class="license-link"
        >
          MIT License
        </a>
      </div>

      <div class="bottom-links">
        <a href="/terms">Terms</a>
        <a
          href="https://github.com/notamitgamer/bsc/blob/main/LICENSE"
          target="_blank"
          rel="noopener noreferrer"
        >
          License
        </a>
        <a
          href="https://github.com/notamitgamer/bsc"
          target="_blank"
          rel="noopener noreferrer"
        >
          GitHub
        </a>
      </div>
    </div>
  </footer>
</template>

<script setup>
import { ref, computed, onMounted, onUnmounted } from 'vue'
import { useData } from 'vitepress'

const { page } = useData()
const isHome = computed(() => page.value?.frontmatter?.layout === 'home')

const dividerRef = ref(null)
const isDividerVisible = ref(false)
let observer = null

function scrollTop() {
  window.scrollTo({ top: 0, behavior: 'smooth' })
}

onMounted(() => {
  if (typeof window === 'undefined' || !('IntersectionObserver' in window)) {
    isDividerVisible.value = true
    return
  }

  observer = new IntersectionObserver(
    (entries) => {
      const [entry] = entries
      if (entry.isIntersecting) {
        isDividerVisible.value = true
        if (dividerRef.value) observer.unobserve(dividerRef.value)
      }
    },
    { threshold: 0.15 }
  )

  if (dividerRef.value) {
    observer.observe(dividerRef.value)
  }
})

onUnmounted(() => {
  if (observer) observer.disconnect()
})
</script>

<style scoped>
.doc-footer-extra {
  margin-top: 3.5rem;
  border-top: 1px solid var(--vp-c-divider);
  padding-top: 0;
  font-family: var(--vp-font-family-base);
  clear: both;
  width: 100%;
  max-width: 688px;
  margin-left: auto;
  margin-right: auto;
  padding-left: 24px;
  padding-right: 24px;
  box-sizing: border-box;
}

/* Dynamically matches VitePress home layout width */
.doc-footer-extra.is-home {
  max-width: 1152px;
  padding-left: 64px;
  padding-right: 64px;
}

@media (max-width: 960px) {
  .doc-footer-extra.is-home {
    padding-left: 32px;
    padding-right: 32px;
  }
}

@media (max-width: 640px) {
  .doc-footer-extra,
  .doc-footer-extra.is-home {
    padding-left: 16px;
    padding-right: 16px;
  }
}

.doc-footer-extra button,
.doc-footer-extra a {
  font-family: inherit;
}

/* Decorative Divider with Smooth Scroll Elevation */
.footer-divider {
  width: 100%;
  position: relative;
  display: flex;
  justify-content: center;
  align-items: flex-end;
  line-height: 0;
  margin-bottom: 0.5rem;
  opacity: 0;
  transform: translateY(28px);
  transition: opacity 0.7s cubic-bezier(0.16, 1, 0.3, 1),
              transform 0.7s cubic-bezier(0.16, 1, 0.3, 1);
  will-change: transform, opacity;
  overflow: hidden;
}

.footer-divider.is-visible {
  opacity: 0.95;
  transform: translateY(0);
}

@media (prefers-reduced-motion: reduce) {
  .footer-divider {
    transition: none !important;
    transform: none !important;
    opacity: 0.95 !important;
  }
}

.footer-divider-img {
  width: 100%;
  height: clamp(140px, 18vw, 240px);
  object-fit: contain;
  object-position: bottom center;
  display: block;
}

/* Top Meta Row */
.footer-top-row {
  display: flex;
  align-items: center;
  justify-content: space-between;
  padding: 0.9rem 0;
  border-bottom: 1px solid var(--vp-c-divider);
  color: var(--vp-c-text-2);
}

.top-row-left {
  display: flex;
  align-items: center;
  gap: 12px;
}

.gh-mark {
  color: var(--vp-c-text-2);
  display: flex;
  transition: color 0.2s ease;
}

.gh-mark:hover {
  color: var(--vp-c-text-1);
}

.repo-badge {
  display: inline-flex;
  align-items: center;
  gap: 6px;
  font-family: 'JetBrains Mono', ui-monospace, SFMono-Regular, monospace;
  font-size: 11.5px;
  background: var(--vp-c-bg-soft);
  border: 1px solid var(--vp-c-divider);
  padding: 2px 8px;
  border-radius: 6px;
  color: var(--vp-c-text-2);
}

.repo-badge code {
  color: var(--vp-c-text-1);
  font-weight: 600;
}

.badge-dot {
  width: 6px;
  height: 6px;
  border-radius: 50%;
  background: var(--vp-c-brand-1, #10b981);
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
  transition: color 0.2s ease;
}

.back-to-top:hover {
  color: var(--vp-c-brand-1);
}

/* Bento Surface Columns */
.footer-columns {
  display: grid;
  grid-template-columns: repeat(3, 1fr);
  gap: 1.25rem;
  padding: 1.75rem 0;
  border-bottom: 1px solid var(--vp-c-divider);
}

@media (max-width: 768px) {
  .footer-columns {
    grid-template-columns: 1fr;
    gap: 1rem;
  }
}

.footer-card {
  background: var(--vp-c-bg-soft);
  border: 1px solid var(--vp-c-divider);
  border-radius: 12px;
  padding: 1.2rem;
  display: flex;
  flex-direction: column;
  justify-content: space-between;
  transition: border-color 0.2s ease, transform 0.2s ease;
}

.footer-card:hover {
  border-color: var(--vp-c-brand-1);
  transform: translateY(-2px);
}

.card-header {
  display: flex;
  align-items: center;
  gap: 8px;
  margin-bottom: 0.5rem;
}

.card-icon {
  color: var(--vp-c-brand-1);
}

.col-title {
  font-size: 13.5px;
  font-weight: 600;
  color: var(--vp-c-text-1);
  margin: 0;
}

.col-text {
  font-size: 12.5px;
  color: var(--vp-c-text-2);
  line-height: 1.5;
  margin: 0 0 1rem;
}

/* Material Design 3 Tonal Button */
.m3-tonal-btn {
  display: inline-flex;
  align-items: center;
  justify-content: center;
  width: fit-content;
  border-radius: 20px;
  padding: 0.35rem 0.95rem;
  font-size: 12.5px;
  font-weight: 500;
  background: var(--vp-c-default-soft);
  color: var(--vp-c-text-1);
  border: 1px solid transparent;
  text-decoration: none;
  transition: all 0.2s ease;
}

.m3-tonal-btn:hover {
  background: var(--vp-c-brand-soft);
  color: var(--vp-c-brand-1);
  border-color: var(--vp-c-brand-1);
}

.help-links {
  list-style: none;
  margin: 0;
  padding: 0;
  display: flex;
  flex-direction: column;
  gap: 0.45rem;
}

.help-links a {
  font-size: 12.5px;
  color: var(--vp-c-text-2);
  text-decoration: none;
  transition: color 0.2s ease;
}

.help-links a:hover {
  color: var(--vp-c-brand-1);
}

/* Footer Bottom Bar */
.footer-bottom-bar {
  display: flex;
  justify-content: space-between;
  align-items: center;
  flex-wrap: wrap;
  gap: 0.75rem;
  padding: 1.2rem 0;
  font-size: 12.5px;
  color: var(--vp-c-text-3, var(--vp-c-text-2));
}

.copyright-line {
  display: inline-flex;
  align-items: center;
  flex-wrap: wrap;
  gap: 4px;
}

.author-link {
  font-weight: 600;
  color: var(--vp-c-text-1);
  text-decoration: none;
  transition: color 0.2s ease;
}

.author-link:hover {
  color: var(--vp-c-brand-1);
  text-decoration: underline;
}

.license-sep {
  margin: 0 4px;
  opacity: 0.6;
}

.license-link {
  color: var(--vp-c-text-2);
  text-decoration: underline;
  text-underline-offset: 2px;
  transition: color 0.2s ease;
}

.license-link:hover {
  color: var(--vp-c-brand-1);
}

.bottom-links {
  display: flex;
  gap: 1.2rem;
}

.bottom-links a {
  color: inherit;
  text-decoration: none;
  transition: color 0.2s ease;
}

.bottom-links a:hover {
  color: var(--vp-c-brand-1);
}
</style>
