import { h } from 'vue'
import DefaultTheme from 'vitepress/theme'
import type { Theme } from 'vitepress'
import CodePage from './CodePage.vue'
import TermsBanner from './components/TermsBanner.vue' // 1. Import the banner
import './style.css'

export default {
  extends: DefaultTheme,

  Layout() {
    return h(DefaultTheme.Layout, null, {
      'layout-bottom': () => h(TermsBanner)
    })
  }
} satisfies Theme