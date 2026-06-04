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
IGNORED_FOLDERS = {"stylesheets", "overrides", "assets", ".vitepress", "node_modules"}

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

    def esc_yaml(s):
        return s.replace("'", "''")
    
    def esc_html(s):
        """Escape angle brackets to prevent Vue compilation errors in VitePress."""
        s = s.replace('&', '&amp;')
        s = s.replace('<', '&lt;')
        s = s.replace('>', '&gt;')
        return s

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
        "",
    ]

    has_meta = any([author, date, license_str])
    if has_meta:
        body.extend([
            "| Property | Details |",
            "| :--- | :--- |"
        ])
        
        if author:
            # Parse 'Name <email>' format into a markdown mailto link
            email_match = re.search(r'(.*?)\s*<(.*?)>', author)
            if email_match:
                name = email_match.group(1).strip()
                email = email_match.group(2).strip()
                author_formatted = f"[{esc_html(name)}](mailto:{esc_html(email)})"
            else:
                author_formatted = esc_html(author)
            body.append(f"| **Author** | {author_formatted} |")
            
        if date:        
            body.append(f"| **Date** | {esc_html(date)} |")
            
        if license_str: 
            body.append(f"| **License** | [{esc_html(license_str)}](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |")
        
        body.append("")

    if problem_statement:
        body += [
            "## Problem Statement",
            "",
            "::: info Problem Statement",
            "<b><i>",
            esc_html(problem_statement),
            "</i></b>",
            ":::",
            "",
        ]

    body += [
        "## Source Code",
        "",
        f"[View on GitHub]({github_url}) &nbsp; | &nbsp; [Download Raw]({raw_url})",
        "",
        f"```{fence_lang} [{filename}]",
        code,
        "```",
        ""
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