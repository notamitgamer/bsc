import { h, Fragment } from 'vue'
import DefaultTheme from 'vitepress/theme'
import type { Theme } from 'vitepress'
import CodePage from './CodePage.vue'
import TermsBanner from './components/TermsBanner.vue' 
import Footer from './components/Footer.vue' 
import SponsorButton from './components/SponsorButton.vue' 
import ExternalLinkWarning from './components/ExternalLinkWarning.vue'
import ReloadPrompt from './components/ReloadPrompt.vue' 
import './style.css'

export default {
  extends: DefaultTheme,

  Layout() {
    return h(DefaultTheme.Layout, null, {
      'layout-bottom': () => h(Fragment, [
        h(TermsBanner),
        h(ExternalLinkWarning),
        h(ReloadPrompt) 
      ]),
      'doc-after': () => h(Footer),
      'nav-bar-content-after': () => h(SponsorButton)
    })
  }
} satisfies Theme