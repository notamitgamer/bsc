import { createContentLoader } from 'vitepress'

export interface TaggedPage {
  title: string
  url: string
}

export interface TagsData {
  [tag: string]: TaggedPage[]
}

declare const data: TagsData
export { data }

function stripTitleIcon(title: string): string {
  if (!title) return title
  return title.replace(/<svg[\s\S]*?<\/svg>\s*/i, '').trim()
}

export default createContentLoader('**/*.md', {
  includeSrc: false,
  render: false,
  excerpt: false,
  transform(raw) {
    const byTag: TagsData = {}

    for (const page of raw) {
      const tags = page.frontmatter?.tags
      if (!Array.isArray(tags) || tags.length === 0) continue

      const title = stripTitleIcon(page.frontmatter?.title || page.url)

      for (const tag of tags) {
        if (!tag) continue
        if (!byTag[tag]) byTag[tag] = []
        byTag[tag].push({ title, url: page.url })
      }
    }

    for (const tag in byTag) {
      byTag[tag].sort((a, b) => a.title.localeCompare(b.title))
    }

    return byTag
  }
})
