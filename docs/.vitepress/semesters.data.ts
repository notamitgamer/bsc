import { createContentLoader } from 'vitepress'

export interface SemesterStat {
  sem: number
  status: string
  files: number
  folders: number
}

export interface SemestersData {
  total: number
  semesters: SemesterStat[]
}

declare const data: SemestersData
export { data }

// Combines the roadmap in docs/index.md (status per semester) with a count of
// the generated pages under each semester_N/ folder.
export default createContentLoader(['index.md', 'semester_*/**/*.md'], {
  includeSrc: false,
  render: false,
  excerpt: false,
  transform(raw): SemestersData {
    const home = raw.find((p) => p.url === '/')
    const roadmap: { sem: number; status: string }[] = home?.frontmatter?.roadmap || []

    const semesters: SemesterStat[] = roadmap.map((r) => {
      const prefix = `/semester_${r.sem}/`
      const pages = raw.filter((p) => p.url.startsWith(prefix) && p.url !== prefix)
      const folders = new Set<string>()
      let files = 0
      for (const p of pages) {
        const rest = p.url.slice(prefix.length).replace(/\/$/, '')
        const parts = rest.split('/')
        if (parts[parts.length - 1] === 'index') continue
        files += 1
        for (let i = 1; i < parts.length; i++) folders.add(parts.slice(0, i).join('/'))
      }
      return { sem: r.sem, status: r.status, files, folders: folders.size }
    })

    return { total: roadmap.length, semesters }
  },
})
