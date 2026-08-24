import { h, Fragment, onMounted } from 'vue'
import DefaultTheme from 'vitepress/theme'
import type { Theme } from 'vitepress'
import Banner from './components/Banner.vue' 
import Footer from './components/Footer.vue' 
import SponsorButton from './components/SponsorButton.vue' 
import ExternalLinkWarning from './components/ExternalLinkWarning.vue'
import CopyLinkButton from './components/CopyLinkButton.vue'
import MarkdownMenu from './components/MarkdownMenu.vue'
import Breadcrumbs from './components/Breadcrumbs.vue'
import Labels from './components/Labels.vue'
import './style.css'

export default {
  extends: DefaultTheme,

  Layout() {
    return h(DefaultTheme.Layout, null, {
      'layout-bottom': () => h(Fragment, [
        h(Banner),
        h(ExternalLinkWarning)
      ]),
      'doc-before': () => h(Fragment, [
        h(Labels),
        h('div', { class: 'bsc-doc-toolbar' }, [
          h(Breadcrumbs),
          h(CopyLinkButton)
        ])
      ]),
      'doc-footer-before': () => h(MarkdownMenu),
      'doc-after': () => h(Footer),
      'nav-bar-content-after': () => h(SponsorButton)
    })
  },

  setup() {
    onMounted(() => {
      setTimeout(() => {
        const searchBtn = document.querySelector('.VPNavBarSearchButton');
        const askAiBtn = document.querySelector('.VPNavBarAskAiButton');
        const triggerBtns = [searchBtn, askAiBtn].filter(Boolean) as Element[];
        if (!triggerBtns.length) return;

        let prefetched = false;
        const prefetchDocSearch = () => {
          if (prefetched) return;
          prefetched = true;
          Promise.all([
            import('@docsearch/js'),
            import('@docsearch/sidepanel-js')
          ]).catch(() => {
            prefetched = false;
          });
        };

        for (const btn of triggerBtns) {
          btn.addEventListener('mouseenter', prefetchDocSearch, { once: true });
          btn.addEventListener('focus', prefetchDocSearch, { once: true });
          btn.addEventListener('touchstart', prefetchDocSearch, { once: true, passive: true });
          btn.addEventListener('click', prefetchDocSearch, { once: true });
        }

        window.addEventListener('keydown', (e) => {
          const key = e.key.toLowerCase();
          const isShortcut =
            ((e.ctrlKey || e.metaKey) && (key === 'k' || key === 'i')) ||
            key === '/';
          if (isShortcut) prefetchDocSearch();
        });

        for (const btn of triggerBtns) {
          btn.addEventListener('click', () => {
            if (
              !document.querySelector('.DocSearch-Modal') &&
              !document.querySelector('#docsearch-sidepanel')
            ) {
              btn.classList.add('is-loading');
            }
          });
        }

        const observer = new MutationObserver(() => {
          const isOpen =
            document.querySelector('.DocSearch-Modal') ||
            document.querySelector('#docsearch-sidepanel');
          if (isOpen) {
            for (const btn of triggerBtns) btn.classList.remove('is-loading');
          }
        });
        observer.observe(document.body, { childList: true, subtree: true });
      }, 500);
    })
  }
} satisfies Theme