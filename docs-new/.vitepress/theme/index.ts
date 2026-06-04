import DefaultTheme from 'vitepress/theme'
import CodePage from './CodePage.vue'
import './style.css'

export default {
  extends: DefaultTheme,
  enhanceApp({ app }: { app: any }) {
    app.component('CodePage', CodePage)
  }
}