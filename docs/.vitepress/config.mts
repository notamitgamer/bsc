import { defineConfig } from 'vitepress'
import { withSidebar } from 'vitepress-sidebar'
import { withPwa } from '@vite-pwa/vitepress'

const vitePressConfig = {
  title: 'BSc Code Index',
  description: 'C programming assignments, indexed and documented.',
  lang: 'en-US',
  cleanUrls: true,
  lastUpdated: true,

  head: [
    // Logo & Fonts
    ['link', { rel: 'icon', type: 'image/svg+xml', href: '/logo.svg' }],
    ['link', { rel: 'preconnect', href: 'https://fonts.googleapis.com' }],
    ['link', { rel: 'preconnect', href: 'https://fonts.gstatic.com', crossorigin: '' }],
    ['link', { rel: 'stylesheet', href: 'https://fonts.googleapis.com/css2?family=Lexend:wght@400;500;600;700&display=swap' }],
    
    // SEO & Social Meta Tags
    ['meta', { name: 'algolia-site-verification', content: 'D732FF69A9237B42' }],
    ['meta', { property: 'og:type', content: 'website' }],
    ['meta', { property: 'og:site_name', content: 'BSc Code Index' }],
    ['meta', { property: 'og:title', content: 'BSc Code Index' }],
    ['meta', { property: 'og:description', content: 'C programming assignments, indexed and documented.' }],
    ['meta', { property: 'og:url', content: 'https://code.amit.is-a.dev' }],
    ['meta', { name: 'twitter:card', content: 'summary' }],
    ['meta', { name: 'twitter:title', content: 'BSc Code Index' }],
    ['meta', { name: 'twitter:description', content: 'C programming assignments, indexed and documented.' }],
    ['script', {}, `if (typeof window !== 'undefined') localStorage.setItem('vitepress:local-search-detailed-list', 'true');`]
  ] as [string, any][],

  sitemap: {
    hostname: 'https://code.amit.is-a.dev',
  },

  transformPageData(pageData) {
    if (pageData.title) {
      pageData.title = pageData.title
        .replace(/[\p{Emoji_Presentation}\p{Extended_Pictographic}]/gu, '') 
        .replace(/<[^>]*>?/gm, '') 
        .trim();
    }
  },

  vite: {
  server: {
    allowedHosts: true as true
  }
} as any,

  themeConfig: {
    logo: '/logo.svg',

    nav: [
      { text: 'Terms', link: '/terms'},
      { text: 'Quick Start', link: '/quickstart'},
      { 
        text: 'Semesters', 
        items: [
          { text: 'Semester 1 (Archived)', link: '/semester_1/' },
          { text: 'Semester 2 (Active)', link: '/semester_2/' },
          { text: 'Semester 3', link: '/semester_3/' },
          { text: 'Semester 4', link: '/semester_4/' },
          { text: 'Semester 5', link: '/semester_5/' },
          { text: 'Semester 6', link: '/semester_6/' },
          { text: 'Semester 7', link: '/semester_7/' },
          { text: 'Semester 8', link: '/semester_8/' },
        ]
      },
      { text: 'License', link: 'https://github.com/notamitgamer/bsc/blob/main/LICENSE'},
      { text: 'Changelog', link: '/changelog' },
    ],

    socialLinks: [
      { icon: 'github', link: 'https://github.com/notamitgamer/bsc' },
    ],

    footer: {
      message: 'Released under the MIT License.',
      copyright: '2026 &copy;  <a href="https://amit.is-a.dev" target="_blank" rel="noopener noreferrer" class="footer-link">Amit Dutta</a>',
    },

    search: {
      provider: 'algolia',
      options: {
        appId: '5PYB0FB4RG',       // paste your Application ID here
        apiKey: '51d9424f9480f1a3efd0d07f023c4a12',      // paste your Search API Key here
        indexName: 'bsc code index',       // find this in your Crawler config / DocSearch dashboard
      }
    },

    editLink: {
      pattern: (ctx) => {
        if (ctx.frontmatter.source) {
          return `https://github.com/notamitgamer/bsc/edit/main/${ctx.frontmatter.source}`
        }
        return `https://github.com/notamitgamer/bsc/edit/main/docs/${ctx.filePath}`
      },
      text: 'Edit this page on GitHub',
    },

    lastUpdated: {
      text: 'Last updated',
      formatOptions: {
        dateStyle: 'medium',
        timeStyle: 'short',
      }
    },

    outline: {
      level: [2, 3],
      label: 'On this page',
    },

    externalLinkIcon: true,

    docFooter: {
      prev: 'Previous',
      next: 'Next',
    },

    notFound: {
      title: 'Looks like you\'re lost.',
      quote: 'The page you are looking for might have moved, changed its name, or vanished into thin air.',
      linkLabel: 'No worries, let\'s get you back.',
      linkText: 'Take me home',
      code: '404'
    },

    returnToTopLabel: 'Back to top',
    darkModeSwitchLabel: 'Theme',
    sidebarMenuLabel: 'Menu',
  },

  markdown: {
    lineNumbers: true,
    math: true, 
    image: {
      lazyLoading: true 
    },
    theme: {
      light: 'github-light',
      dark: 'github-dark' 
    } as any
  },

  pwa: {
    outDir: '.vitepress/dist',
    registerType: 'autoUpdate' as 'autoUpdate',
    includeAssets: ['logo.svg', 'logo_192.png', 'logo_512.png'],
    manifest: {
      name: 'BSc Code Index',
      short_name: 'BSc Code',
      description: 'C programming assignments, indexed and documented.',
      theme_color: '#ffffff',
      icons: [
        {
          src: '/logo_192.png',
          sizes: '192x192',
          type: 'image/png'
        },
        {
          src: '/logo_512.png',
          sizes: '512x512',
          type: 'image/png'
        }
      ]
    },
    workbox: {
      globPatterns: ['**/*.{css,js,html,svg,png,ico,txt,woff2}'],
    }
  }
}

const sidebarConfig = {
  documentRootPath: 'docs',
  collapsed: true,
  collapseDepth: 1,
  useTitleFromFrontmatter: true,
  useTitleFromFileHeading: true,
  useFolderTitleFromIndexFile: true,
  useFolderLinkFromIndexFile: true,
  excludeFiles: ['tags.md'],
  excludeFolders: ['stylesheets', 'overrides', 'assets', '.vitepress'],
  sortMenusByName: true,
  sortMenusOrderNumerically: true,
  underscoreToSpace: true,
  capitalizeFirst: true,
}

export default withPwa(defineConfig(withSidebar(vitePressConfig, sidebarConfig)))