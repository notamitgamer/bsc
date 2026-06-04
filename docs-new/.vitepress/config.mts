import { defineConfig } from 'vitepress'
import { withSidebar } from 'vitepress-sidebar'

const vitePressConfig = {
  title: 'BSc Code Index',
  description: 'C programming assignments, indexed and documented.',

  head: [
    ['link', { rel: 'icon', type: 'image/svg+xml', href: '/logo.svg' }],
    // 👇 ADD THESE THREE LINES 👇
    ['link', { rel: 'preconnect', href: 'https://fonts.googleapis.com' }],
    ['link', { rel: 'preconnect', href: 'https://fonts.gstatic.com', crossorigin: '' }],
    ['link', { rel: 'stylesheet', href: 'https://fonts.googleapis.com/css2?family=Lexend:wght@400;500;600;700&display=swap' }]
  ] as [string, any][],

  lastUpdated: true,

  transformPageData(pageData) {
    if (pageData.title) {
      pageData.title = pageData.title
        .replace(/[\p{Emoji_Presentation}\p{Extended_Pictographic}]/gu, '') 
        .replace(/<[^>]*>?/gm, '') 
        .trim();
    }
  },

  themeConfig: {
    logo: '/logo.svg',

    nav: [
      { text: 'Home', link: '/' },
      { text: 'Terms', link: './terms'},
      { text: 'Quick Start', link: './quickstart'},
      { text: 'Repository', link: 'https://github.com/notamitgamer/bsc' },
      { text: 'License', link: 'https://github.com/notamitgamer/bsc/blob/main/LICENSE'},
    ],

    socialLinks: [
      { icon: 'github', link: 'https://github.com/notamitgamer/bsc' },
    ],

    footer: {
      message: 'Released under the MIT License.',
      copyright: 'Copyright © 2025 – Present <a href="https://amit.is-a.dev">Amit Dutta</a>',
    },

    search: {
      provider: 'local',
      options: {
        // Search through description (problem statement) and title
        _render(src: string, env: any, md: any) {
          const html = md.render(src, env)
          if (env.frontmatter?.description) {
            return env.frontmatter.description + ' ' + html
          }
          return html
        }
      }
    },

    editLink: {
      pattern: 'https://github.com/notamitgamer/bsc/edit/main/docs-new/:path',
      text: 'Edit this page on GitHub',
    },

    lastUpdated: {
      text: 'Last updated',
      formatOptions: {
        dateStyle: 'medium',
        timeStyle: 'short',
      }
    },
  },

  markdown: {
    lineNumbers: true,
  },
}

const sidebarConfig = {
  documentRootPath: 'docs-new',
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

export default defineConfig(withSidebar(vitePressConfig, sidebarConfig))
