import os

FILES_LIST  = "list.txt"
BSC_ROOT    = "."
DOCS_OUTPUT = "docs"

ALGO_FOLDER_NAME = "algorithms"  # folder name that contains algorithm .md files

# Directories excluded from index generation
IGNORED_FOLDERS = {"stylesheets", "overrides", "assets", ".vitepress", "node_modules", "public"}

# Language config mapped by file extension
SUPPORTED_LANGS = {
    '.c':    {'label': 'C',          'fence': 'c',          'style': 'c'},
    '.cpp':  {'label': 'C++',        'fence': 'cpp',        'style': 'c'},
    '.h':    {'label': 'C Header',   'fence': 'c',          'style': 'c'},
    '.hpp':  {'label': 'C++ Header', 'fence': 'cpp',        'style': 'c'},
    '.r':    {'label': 'R',          'fence': 'r',          'style': 'hash'},
    '.py':   {'label': 'Python',     'fence': 'python',     'style': 'hash'},
    '.java': {'label': 'Java',       'fence': 'java',       'style': 'c'},
    '.js':   {'label': 'JavaScript', 'fence': 'javascript', 'style': 'c'},
    '.ts':   {'label': 'TypeScript', 'fence': 'typescript', 'style': 'c'},
    '.sh':   {'label': 'Bash',       'fence': 'bash',       'style': 'hash'},
}

ALGO_ICON_SVG = '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;" class="lucide lucide-binary"><rect x="14" y="14" width="4" height="6" rx="2"/><rect x="6" y="4" width="4" height="6" rx="2"/><path d="M6 20h4"/><path d="M14 10h4"/><path d="M6 14h2v6"/><path d="M14 4h2v6"/></svg>'

FILE_ICON_SVG = '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg>'

# Protected paths that should never be overwritten
PROTECTED_INDEX_FILES = {
    os.path.normpath(os.path.join(DOCS_OUTPUT, f"semester_{i}", "index.md"))
    for i in range(1, 9)
}
PROTECTED_INDEX_FILES.add(os.path.normpath(os.path.join(DOCS_OUTPUT, "index.md")))
