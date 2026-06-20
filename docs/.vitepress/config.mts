import { defineConfig } from 'vitepress'
import { withSidebar } from 'vitepress-sidebar'

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
    ['meta', { property: 'og:type', content: 'website' }],
    ['meta', { property: 'og:site_name', content: 'BSc Code Index' }],
    ['meta', { property: 'og:title', content: 'BSc Code Index' }],
    ['meta', { property: 'og:description', content: 'C programming assignments, indexed and documented.' }],
    ['meta', { property: 'og:url', content: 'https://code.amit.is-a.dev' }],
    ['meta', { name: 'twitter:card', content: 'summary' }],
    ['meta', { name: 'twitter:title', content: 'BSc Code Index' }],
    ['meta', { name: 'twitter:description', content: 'C programming assignments, indexed and documented.' }],
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

  themeConfig: {
    logo: '/logo.svg',

    nav: [
      { text: 'Home', link: '/' },
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
      { text: 'Version', link: '/version' },
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
        locales: {
          root: {
            translations: {
              button: {
                buttonText: 'Search programs...',
                buttonAriaLabel: 'Search programs'
              },
              modal: {
                searchBox: {
                  resetButtonTitle: 'Clear search query',
                  cancelButtonText: 'Cancel',
                },
                noResultsScreen: {
                  noResultsText: 'No programs found for',
                  suggestedQueryText: 'Try searching for a different problem statement',
                }
              }
            }
          }
        },
        miniSearch: {
          searchOptions: {
            boostDocument(documentId, term, storedFields) {
              // Boost pages where term appears in description (problem statement)
              const desc = (storedFields?.titles?.[0] ?? '').toLowerCase()
              return desc.includes(term.toLowerCase()) ? 2 : 1
            },
          },
        },
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
    math: true, // Enables LaTeX math equations! e.g., $\frac{1}{2}$
    image: {
      lazyLoading: true // Significantly speeds up page loads if you add screenshots
    },
    theme: {
      light: 'github-light',
      dark: 'github-dark' // Code blocks now seamlessly match the site's theme!
    } as any
  },
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

export default defineConfig(withSidebar(vitePressConfig, sidebarConfig))