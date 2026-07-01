import { h, Fragment } from 'vue'
import DefaultTheme from 'vitepress/theme'
import type { Theme } from 'vitepress'
import CodePage from './CodePage.vue'
import Banner from './components/Banner.vue' 
import Footer from './components/Footer.vue' 
import SponsorButton from './components/SponsorButton.vue' 
import ExternalLinkWarning from './components/ExternalLinkWarning.vue'
import ReloadPrompt from './components/ReloadPrompt.vue' 
import CopyLinkButton from './components/CopyLinkButton.vue'
import RefreshCacheButton from './components/RefreshCacheButton.vue'
import './style.css'

export default {
  extends: DefaultTheme,

  Layout() {
    return h(DefaultTheme.Layout, null, {
      'layout-bottom': () => h(Fragment, [
        h(Banner),
        h(ExternalLinkWarning),
        h(ReloadPrompt) 
      ]),
      'doc-before': () => h(CopyLinkButton),
      'doc-after': () => h(Footer),
      'nav-bar-content-after': () => h(Fragment, [
        h(RefreshCacheButton),
        h(SponsorButton)
      ])
    })
  }
} satisfies Theme