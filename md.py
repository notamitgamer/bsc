import os
import re

FILES_LIST   = "list.txt"
BSC_ROOT     = "."
DOCS_OUTPUT  = "docs-new"
RAW_BASE_URL = "https://raw.usercontent.amit.is-a.dev"

# Protected paths that should never be overwritten
PROTECTED_INDEX_FILES = {
    os.path.normpath(os.path.join(DOCS_OUTPUT, f"semester_{i}", "index.md"))
    for i in range(1, 9)
}
PROTECTED_INDEX_FILES.add(os.path.normpath(os.path.join(DOCS_OUTPUT, "index.md")))

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

def read_block_comment(lines, start):
    result = []
    i = start
    n = len(lines)
    first = lines[i].strip()

    if first.startswith('/*') and '*/' in first:
        inner = first[2: first.index('*/')].strip().strip('*').strip()
        if inner:
            result.append(inner)
        return result, i + 1

    inner = first[2:].strip().strip('*').strip()
    if inner:
        result.append(inner)
    i += 1

    while i < n:
        line = lines[i].strip()
        if '*/' in line:
            text = line[: line.index('*/')].strip().strip('*').strip()
            if text:
                result.append(text)
            return result, i + 1
        text = line.strip('*').strip()
        if text:
            result.append(text)
        i += 1

    return result, i

def esc_yaml(s: str) -> str:
    return s.replace("'", "''")
 
 
def esc_html(s: str) -> str:
    """Escape characters that break Vue template compilation in VitePress."""
    return s.replace('&', '&amp;').replace('<', '&lt;').replace('>', '&gt;')

def format_author(author: str) -> str:
    """Return a mailto markdown link if the author string contains an email."""
    m = re.search(r'(.*?)\s*<(.*?)>', author)
    if m:
        name  = esc_html(m.group(1).strip())
        email = esc_html(m.group(2).strip())
        return f"[{name}](mailto:{email})"
    return esc_html(author)

def parse_c_style(content):
    lines = content.splitlines()
    n = len(lines)
    i = 0
    author = date = repo = license_str = problem_statement = ""

    while i < n and not lines[i].strip():
        i += 1

    # Extract metadata block
    if i < n and lines[i].strip().startswith('/*'):
        block, i = read_block_comment(lines, i)
        for line in block:
            # Handles both newline-per-field and pipe-separated formats
            parts = [p.strip() for p in line.split('|')]
            for part in parts:
                if ':' in part:
                    key, _, val = part.partition(':')
                    key = key.strip().lower()
                    val = val.strip()
                    if 'author'    in key: author       = val
                    elif 'date'    in key: date         = val
                    elif 'repo'    in key: repo         = val
                    elif 'license' in key: license_str  = val

    while i < n and not lines[i].strip():
        i += 1

    # Extract problem statement block (ensures it's not the actual code starting)
    if i < n and lines[i].strip().startswith('/*'):
        peek_block, peek_i = read_block_comment(lines, i)
        block_text = ' '.join(peek_block)
        if '#include' not in block_text and 'import ' not in block_text:
            problem_statement = ' '.join(p for p in peek_block if p).strip()
            i = peek_i

    # Locate the beginning of actual source code
    code_start = None
    for j in list(range(i, n)) + list(range(0, i)):
        line_strip = lines[j].strip()
        if line_strip.startswith('#include') or line_strip.startswith('import '):
            code_start = j
            break

    code = '\n'.join(lines[code_start:]).strip() if code_start is not None else content.strip()
    return author, date, repo, license_str, problem_statement, code

def parse_hash_style(content):
    lines = content.splitlines()
    n = len(lines)
    i = 0
    author = date = repo = license_str = problem_statement = ""

    while i < n and not lines[i].strip():
        i += 1

    # Extract metadata block
    meta_lines = []
    while i < n and lines[i].strip().startswith('#'):
        meta_lines.append(lines[i].strip()[1:].strip())
        i += 1

    for raw_line in meta_lines:
        for part in raw_line.split('|'):
            if ':' in part:
                key, _, val = part.partition(':')
                key = key.strip().lower()
                val = val.strip()
                if 'author'    in key: author       = val
                elif 'date'    in key: date         = val
                elif 'repo'    in key: repo         = val
                elif 'license' in key: license_str  = val

    while i < n and not lines[i].strip():
        i += 1

    # Extract problem statement block
    ps_lines = []
    while i < n and lines[i].strip().startswith('#'):
        text = lines[i].strip()[1:].strip()
        if text:
            ps_lines.append(text)
        i += 1

    if ps_lines:
        problem_statement = ' '.join(ps_lines).strip()

    code = content.strip()
    return author, date, repo, license_str, problem_statement, code

def build_md(filename, lang_label, fence_lang, author, date, repo, license_str,
             problem_statement, code, raw_url, github_url):

    desc = problem_statement if problem_statement else f"{lang_label} program — {filename}"
    icon_svg = '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg>'

    fm_lines = [
        "---",
        f"title: '{icon_svg} {esc_yaml(filename)}'",
        f"description: '{esc_yaml(desc)}'",
        "---",
    ]

    body = [
        "",
        f"# {filename}",
        ""
    ]

    has_meta = any([author, date, license_str])
    if has_meta:
        body.extend([
            "### Metadata",
            ""
        ])
        
    if author:
        body.append(f"- **Author** — {format_author(author)}")
    if date:
        body.append(f"- **Last updated** — {esc_html(date)}")
    if license_str:
        body.append(
            f"- **License** — [{esc_html(license_str)}]"
            f"(https://github.com/notamitgamer/bsc/blob/main/LICENSE)"
        )
        
        body.append("")

    if problem_statement:
        body += [ 
            "",
            "### Problem Statement",
            "",
            "::: tip Problem Statement",
            esc_html(problem_statement),
            ":::",
            "",
        ]

    body += [
    "## Source Code",
        "",
        # Action links — minimal, right-aligned feel via HTML
        '<div style="display:flex;gap:12px;margin-bottom:12px;">',
        f'  <a href="{github_url}" target="_blank" rel="noopener noreferrer"'
        '   style="display:inline-flex;align-items:center;gap:6px;font-size:0.85rem;'
        '          text-decoration:none;color:var(--vp-c-brand);">',
        '    <svg xmlns="http://www.w3.org/2000/svg" width="15" height="15" viewBox="0 0 24 24"'
        '         fill="currentColor" style="vertical-align:middle;">',
        '      <path d="M12 0C5.37 0 0 5.373 0 12c0 5.303 3.438 9.8 8.205 11.387.6.113.82-.258'
        '             .82-.577v-2.234c-3.338.726-4.033-1.416-4.033-1.416-.546-1.387-1.333-1.757'
        '             -1.333-1.757-1.089-.745.083-.729.083-.729 1.205.084 1.84 1.236 1.84 1.236'
        '             1.07 1.835 2.809 1.305 3.495.998.108-.776.417-1.305.76-1.605-2.665-.3'
        '             -5.466-1.332-5.466-5.93 0-1.31.465-2.38 1.235-3.22-.135-.303-.54-1.523'
        '             .105-3.176 0 0 1.005-.322 3.3 1.23.96-.267 1.98-.399 3-.405 1.02.006'
        '             2.04.138 3 .405 2.28-1.552 3.285-1.23 3.285-1.23.645 1.653.24 2.873'
        '             .12 3.176.765.84 1.23 1.91 1.23 3.22 0 4.61-2.805 5.625-5.475 5.92'
        '             .42.36.81 1.096.81 2.22v3.293c0 .319.21.694.825.576C20.565 21.795'
        '             24 17.298 24 12c0-6.627-5.373-12-12-12z"/>',
        '    </svg>',
        '    View on GitHub',
        '  </a>',
        f'  <a href="{raw_url}" target="_blank" rel="noopener noreferrer"'
        '   style="display:inline-flex;align-items:center;gap:6px;font-size:0.85rem;'
        '          text-decoration:none;color:var(--vp-c-text-2);">',
        '    <svg xmlns="http://www.w3.org/2000/svg" width="14" height="14" viewBox="0 0 24 24"'
        '         fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round"'
        '         stroke-linejoin="round" style="vertical-align:middle;">',
        '      <path d="M21 15v4a2 2 0 0 1-2 2H5a2 2 0 0 1-2-2v-4"/>',
        '      <polyline points="7 10 12 15 17 10"/>',
        '      <line x1="12" y1="15" x2="12" y2="3"/>',
        '    </svg>',
        '    Download Raw',
        '  </a>',
        '</div>',
        "",
        "::: info Printing the code",
        "To print this file, open it on GitHub and click **Raw** before printing, or use the **Download Raw** button above and print directly from that page.",
        ":::",
        f"```{fence_lang} [{filename}]",
        code,
        "```",
        "",
    ]

    return '\n'.join(fm_lines + body)

def _get_md_title(md_path: str) -> str:
    try:
        with open(md_path, encoding='utf-8') as f:
            content = f.read()
        # Extracts actual title text, ignoring prepended SVGs or icons
        m = re.search(r'^title:\s*\'(?:.*?</svg>\s*)?(.+)\'$', content, re.MULTILINE)
        if m:
            return m.group(1).strip()
    except OSError:
        pass
    return os.path.splitext(os.path.basename(md_path))[0]

def create_folder_indexes(docs_root):
    for root, dirs, files in os.walk(docs_root):
        dirs[:] = [d for d in dirs if d not in IGNORED_FOLDERS]

        folder_name = os.path.basename(root)

        if folder_name in IGNORED_FOLDERS:
            continue

        index_path = os.path.normpath(os.path.join(root, 'index.md'))

        if index_path in PROTECTED_INDEX_FILES and os.path.exists(index_path):
            continue

        md_files = sorted(
            f for f in files
            if f.endswith('.md') and f.lower() not in {'index.md', 'readme.md', 'default.md', 'home.md', 'tags.md'}
        )
        subdirs = sorted(dirs)

        if root == docs_root:
            title = "BSc Code Index"
            intro  = "Select a category from the left sidebar or the table below."
        else:
            title = folder_name.replace('_', ' ').replace('-', ' ').title()
            intro  = f"Files and sub-folders in **{title}**."

        with open(index_path, 'w', encoding='utf-8') as f:
            f.write(f"# {title}\n\n{intro}\n\n")

            if subdirs:
                f.write("## Folders\n\n")
                f.write("| # | Folder | Link |\n")
                f.write("|---|---|---|\n")
                for idx, d in enumerate(subdirs, 1):
                    dir_title = d.replace('_', ' ').replace('-', ' ').title()
                    f.write(f"| {idx} | {dir_title} | [Open]({d}/index.md) |\n")
                f.write("\n")

            if md_files:
                f.write("## Files\n\n")
                f.write("| # | File | Link |\n")
                f.write("|---|---|---|\n")
                for idx, md_file in enumerate(md_files, 1):
                    src_name = _get_md_title(os.path.join(root, md_file))
                    f.write(f"| {idx} | `{src_name}` | [View Code]({md_file}) |\n")
                f.write("\n")

def main():
    with open(FILES_LIST, 'r', encoding='utf-8') as f:
        file_paths = [line.strip() for line in f if line.strip()]

    generated = skipped = 0

    for full_path in file_paths:
        full_path = os.path.normpath(full_path)
        ext = os.path.splitext(full_path)[1].lower()

        if ext not in SUPPORTED_LANGS:
            print(f"SKIP (unsupported extension): {full_path}")
            skipped += 1
            continue

        lang_info = SUPPORTED_LANGS[ext]

        try:
            rel_path = os.path.relpath(full_path, BSC_ROOT)
        except ValueError:
            print(f"SKIP (relpath failed): {full_path}")
            skipped += 1
            continue

        rel_url    = rel_path.replace('\\', '/')
        raw_url    = f"{RAW_BASE_URL}/{rel_url}"
        github_url = f"https://github.com/notamitgamer/bsc/blob/main/{rel_url}"

        try:
            with open(full_path, 'r', encoding='utf-8', errors='ignore') as f:
                content = f.read()
        except FileNotFoundError:
            print(f"NOT FOUND: {full_path}")
            skipped += 1
            continue

        filename = os.path.basename(full_path)

        if lang_info['style'] == 'c':
            author, date, repo, license_str, problem_statement, code = parse_c_style(content)
        else:
            author, date, repo, license_str, problem_statement, code = parse_hash_style(content)

        md_content = build_md(
            filename, lang_info['label'], lang_info['fence'], author, date, repo, license_str,
            problem_statement, code, raw_url, github_url,
        )

        md_rel = os.path.splitext(rel_path)[0] + '.md'
        md_out = os.path.normpath(os.path.join(DOCS_OUTPUT, md_rel))

        if md_out in PROTECTED_INDEX_FILES and os.path.exists(md_out):
            print(f"SKIP (Protected Index File): {md_out}")
            skipped += 1
            continue

        os.makedirs(os.path.dirname(md_out), exist_ok=True)
        with open(md_out, 'w', encoding='utf-8') as f:
            f.write(md_content)

        print(f"OK  {md_rel}")
        generated += 1

    print(f"\nDone - {generated} generated, {skipped} skipped.")
    print("Generating folder index pages...")
    create_folder_indexes(DOCS_OUTPUT)
    print("Folder indexes created.")

if __name__ == "__main__":
    main()