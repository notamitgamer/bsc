"""bsc_md — markdown generation package for the BSc Code Index docs site.

Modules:
    config      constants (paths, supported languages, icons, protected files)
    formatting  YAML/HTML escaping and author-string helpers
    parsers     source-comment metadata/problem-statement parsers
    builders    turns parsed data into VitePress-ready markdown
    indexing    generates folder index.md pages
    pipeline    orchestrates the full generation run (called from main.py)
"""
