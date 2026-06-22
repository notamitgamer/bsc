import { h } from 'vue'
import DefaultTheme from 'vitepress/theme'
import type { Theme } from 'vitepress'
import TermsBanner from './components/TermsBanner.vue' 
import Footer from './components/Footer.vue' 
import SponsorButton from './components/SponsorButton.vue' 
import './style.css'

export default {
  extends: DefaultTheme,

  Layout() {
    return h(DefaultTheme.Layout, null, {
      'layout-bottom': () => h(TermsBanner),
      'doc-after': () => h(Footer),
      'nav-bar-content-after': () => h(SponsorButton)
    })
  }
} satisfies Theme