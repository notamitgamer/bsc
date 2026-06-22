import { h, Fragment } from 'vue'
import DefaultTheme from 'vitepress/theme'
import type { Theme } from 'vitepress'
import CodePage from './CodePage.vue'
import TermsBanner from './components/TermsBanner.vue' 
import FloatingAd from './components/FloatingAd.vue' 
import './style.css'

export default {
  extends: DefaultTheme,

  Layout() {
    return h(DefaultTheme.Layout, null, {
      'layout-bottom': () => h(Fragment, [
        h(TermsBanner),
        h(FloatingAd)
      ])
    })
  }
} satisfies Theme