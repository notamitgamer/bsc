import { h, Fragment, onMounted } from 'vue'
import DefaultTheme from 'vitepress/theme'
import type { Theme } from 'vitepress'
import Banner from './components/Banner.vue' 
import Footer from './components/Footer.vue' 
import SponsorButton from './components/SponsorButton.vue' 
import ExternalLinkWarning from './components/ExternalLinkWarning.vue'
import CopyLinkButton from './components/CopyLinkButton.vue'
import Breadcrumbs from './components/Breadcrumbs.vue'
import './style.css'

export default {
  extends: DefaultTheme,

  Layout() {
    return h(DefaultTheme.Layout, null, {
      'layout-bottom': () => h(Fragment, [
        h(Banner),
        h(ExternalLinkWarning)
      ]),
      'doc-before': () => h('div', { class: 'bsc-doc-toolbar' }, [
        h(Breadcrumbs),
        h(CopyLinkButton)
      ]),
      'doc-after': () => h(Footer),
      'nav-bar-content-after': () => h(SponsorButton)
    })
  },

  setup() {
    onMounted(() => {
      // Small delay to ensure VitePress has rendered the navbar button
      setTimeout(() => {
        // Target the search/ask AI button
        const searchBtn = document.querySelector('.DocSearch-Button');
        if (!searchBtn) return;

        // When clicked, add the loading spinner
        searchBtn.addEventListener('click', () => {
          // If the modal is already in the DOM, no need for the spinner
          if (!document.querySelector('.DocSearch-Container')) {
            searchBtn.classList.add('is-loading');
          }
        });

        // Watch the page to see when the modal finishes downloading and appears
        const observer = new MutationObserver((mutations) => {
          for (const mutation of mutations) {
            if (mutation.addedNodes.length) {
              // Check if the added node is the Algolia modal container
              const isModalAdded = Array.from(mutation.addedNodes).some(
                (node: any) => node.classList && node.classList.contains('DocSearch-Container')
              );
              
              // If the modal is added, remove the loading state
              if (isModalAdded) {
                searchBtn.classList.remove('is-loading');
              }
            }
          }
        });

        // Start observing the body for injected elements
        observer.observe(document.body, { childList: true, subtree: true });
      }, 500);
    })
  }
} satisfies Theme