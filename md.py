import os
import re

# ---------------------------------------------------------------------------
# Configuration
# ---------------------------------------------------------------------------

FILES_LIST   = r"G:\bsc\list.txt"
BSC_ROOT     = r"G:\bsc"
DOCS_OUTPUT  = r"G:\bsc\docs-new"
RAW_BASE_URL = "https://raw.usercontent.amit.is-a.dev"

# Exact paths to the index.md files that should never be updated/overwritten.
# os.path.normpath ensures the paths perfectly match standard Windows path formatting.
PROTECTED_INDEX_FILES = {
    os.path.normpath(os.path.join(DOCS_OUTPUT, f"semester_{i}", "index.md")) 
    for i in range(1, 9)
}
# Also protect the main root index.md
PROTECTED_INDEX_FILES.add(os.path.normpath(os.path.join(DOCS_OUTPUT, "index.md")))

# Folders to completely ignore during index generation
IGNORED_FOLDERS = {"stylesheets", "overrides", "assets"}


# ---------------------------------------------------------------------------
# Code stripping — remove strings and comments before keyword scanning
# ---------------------------------------------------------------------------

def strip_c(code: str) -> str:
    """Remove block comments, line comments, and string/char literals from C code."""
    code = re.sub(r'/\*.*?\*/', ' ', code, flags=re.DOTALL)
    code = re.sub(r'//[^\n]*', ' ', code)
    code = re.sub(r'"(?:[^"\\]|\\.)*"', '""', code)
    code = re.sub(r"'(?:[^'\\]|\\.)*'", "''", code)
    return code


# ---------------------------------------------------------------------------
# Block comment reader (C)
# ---------------------------------------------------------------------------

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


# ---------------------------------------------------------------------------
# C file parser
# ---------------------------------------------------------------------------

def parse_c_file(content):
    lines = content.splitlines()
    n = len(lines)
    i = 0
    author = date = repo = license_str = problem_statement = ""

    while i < n and not lines[i].strip():
        i += 1

    # First block comment: metadata
    if i < n and lines[i].strip().startswith('/*'):
        block, i = read_block_comment(lines, i)
        for line in block:
            if ':' in line:
                key, _, val = line.partition(':')
                key = key.strip().lower()
                val = val.strip()
                if 'author'    in key: author       = val
                elif 'date'    in key: date          = val
                elif 'repo'    in key: repo          = val
                elif 'license' in key: license_str   = val

    while i < n and not lines[i].strip():
        i += 1

    # Second block comment: problem statement (if no #include inside)
    if i < n and lines[i].strip().startswith('/*'):
        peek_block, peek_i = read_block_comment(lines, i)
        block_text = ' '.join(peek_block)
        if '#include' not in block_text:
            problem_statement = ' '.join(p for p in peek_block if p).strip()
            i = peek_i

    # Code starts at first #include
    code_start = None
    for j in list(range(i, n)) + list(range(0, i)):
        if lines[j].strip().startswith('#include'):
            code_start = j
            break

    code = '\n'.join(lines[code_start:]).strip() if code_start is not None else content.strip()
    return author, date, repo, license_str, problem_statement, code


# ---------------------------------------------------------------------------
# R file parser
# ---------------------------------------------------------------------------

def parse_r_file(content):
    lines = content.splitlines()
    n = len(lines)
    i = 0
    author = date = repo = license_str = problem_statement = ""

    while i < n and not lines[i].strip():
        i += 1

    # First # comment block: metadata
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
                elif 'date'    in key: date          = val
                elif 'repo'    in key: repo          = val
                elif 'license' in key: license_str   = val

    while i < n and not lines[i].strip():
        i += 1

    # Second # comment block: problem statement
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


# ---------------------------------------------------------------------------
# Markdown builder
# ---------------------------------------------------------------------------

def build_md(filename, lang, author, date, repo, license_str,
             problem_statement, code, raw_url, github_url):

    out = [
        "---",
        f"title: {filename}",
        f'description: "{lang.upper()} program source code for {filename}"',
        "icon: lucide/file-code",
        "---",
        "",
        f"# `{filename}`",
        "",
    ]

    if problem_statement:
        indented = "\n".join(f"    {l}" for l in problem_statement.splitlines())
        out += [
            "",
            '!!! abstract "Problem Statement"',
            indented,
            "",
        ]

    # Metadata table
    meta_rows = []
    if author:      meta_rows.append(f"| **Author** | {author} |")
    if date:        meta_rows.append(f"| **Date** | {date} |")
    if license_str: meta_rows.append(f"| **License** | {license_str} |")

    if meta_rows:
        out += [
            "## Metadata",
            "| Property | Detail |",
            "|---|---|",
            *meta_rows,
            "",
        ]

    # Action buttons
    # Action buttons
    out += [
        "## Actions",
        "",
        '<div class="action-buttons-desktop">',
        f'<a href="{raw_url}" class="md-button" target="_blank" rel="noopener">Raw</a>',
        f'<a href="{github_url}" class="md-button" target="_blank" rel="noopener">View on GitHub</a>',
        '<button class="md-button" type="button" onclick="copyPageUrl()">Copy URL</button>',
        '</div>',
        "",
        "> You can print or save this file by opening Raw and using your browser.",
        "",
        '<div class="action-buttons-mobile">',
        '<button class="md-button" onclick="openActionSheet()">Actions</button>',
        '</div>',
        "",
        '<div class="dd-backdrop" id="actionBackdrop" onclick="closeActionSheet()"></div>',
        '<div class="dd-sheet" id="actionSheet" role="dialog" aria-modal="true" aria-label="Actions">',
        '  <div class="dd-sheet-handle"></div>',
        '  <div class="dd-sheet-title"><span class="ti ti-bolt" aria-hidden="true"></span> Actions</div>',
        f'  <a href="{raw_url}" target="_blank" rel="noopener" onclick="closeActionSheet()">',
        '    <span class="ti ti-file-code item-icon" aria-hidden="true"></span>',
        '    <span class="item-label">Raw</span>',
        '  </a>',
        f'  <a href="{github_url}" target="_blank" rel="noopener" onclick="closeActionSheet()">',
        '    <span class="ti ti-brand-github item-icon" aria-hidden="true"></span>',
        '    <span class="item-label">View on GitHub</span>',
        '  </a>',
        '  <a href="javascript:void(0)" onclick="copyAndClose()">',
        '    <span class="ti ti-copy item-icon" aria-hidden="true"></span>',
        '    <span class="item-label">Copy URL</span>',
        '  </a>',
        '</div>',
        "",
        '<script>',
        'function openActionSheet(){var b=document.getElementById("actionBackdrop"),s=document.getElementById("actionSheet");b.style.display="block";s.style.display="block";document.body.style.overflow="hidden";requestAnimationFrame(function(){b.classList.add("visible");s.classList.add("visible");});}',
        'function closeActionSheet(){var b=document.getElementById("actionBackdrop"),s=document.getElementById("actionSheet");b.classList.remove("visible");s.classList.remove("visible");document.body.style.overflow="";setTimeout(function(){b.style.display="none";s.style.display="none";},300);}',
        'function copyPageUrl(){var btn=document.querySelector(".action-buttons-desktop .md-button:last-child");try{navigator.clipboard.writeText(window.location.href).then(function(){if(btn){var o=btn.textContent;btn.textContent="Copied!";setTimeout(function(){btn.textContent=o;},1800);}}).catch(function(){fallbackCopy();});}catch(e){fallbackCopy();}}',
        'function fallbackCopy(){var ta=document.createElement("textarea");ta.value=window.location.href;ta.style.position="fixed";ta.style.opacity="0";document.body.appendChild(ta);ta.focus();ta.select();try{document.execCommand("copy");}catch(e){}document.body.removeChild(ta);}',
        'function copyAndClose(){closeActionSheet();setTimeout(function(){copyPageUrl();},320);}',
        '</script>',
        "",
    ]

    # Source code
    fence_lang = "c" if lang == "c" else "r"
    out += [
        "## Source Code",
        '<div data-search-exclude="true">',
        f"```{fence_lang}",
        code,
        "```",
        "</div>",
        "",
    ]

    return '\n'.join(out)


# ---------------------------------------------------------------------------
# Folder index generator
# ---------------------------------------------------------------------------

def _get_md_title(md_path: str) -> str:
    """Read the title from a generated markdown file's front matter."""
    try:
        with open(md_path, encoding='utf-8') as f:
            content = f.read()
        m = re.search(r'^title:\s*(.+)$', content, re.MULTILINE)
        if m:
            return m.group(1).strip()
    except OSError:
        pass
    return os.path.splitext(os.path.basename(md_path))[0]


def create_folder_indexes(docs_root):
    for root, dirs, files in os.walk(docs_root):
        # Do not traverse into ignored folders, and don't list them in parent indexes
        dirs[:] = [d for d in dirs if d not in IGNORED_FOLDERS]

        folder_name = os.path.basename(root)
        
        # Skip generating index for these folders if they are somehow reached
        if folder_name in IGNORED_FOLDERS:
            continue

        index_path = os.path.normpath(os.path.join(root, 'index.md'))

        # Only skip if this exact index.md file is in our protected list AND already exists
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


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

def main():
    with open(FILES_LIST, 'r', encoding='utf-8') as f:
        file_paths = [line.strip() for line in f if line.strip()]

    generated = skipped = 0

    for full_path in file_paths:
        full_path = os.path.normpath(full_path)
        ext = os.path.splitext(full_path)[1].lower()

        if ext not in {'.c', '.r'}:
            print(f"SKIP (unsupported extension): {full_path}")
            skipped += 1
            continue

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
        lang = "r" if ext == ".r" else "c"

        if lang == "c":
            author, date, repo, license_str, problem_statement, code = parse_c_file(content)
        else:
            author, date, repo, license_str, problem_statement, code = parse_r_file(content)

        md_content = build_md(
            filename, lang, author, date, repo, license_str,
            problem_statement, code, raw_url, github_url,
        )

        md_rel = os.path.splitext(rel_path)[0] + '.md'
        md_out = os.path.normpath(os.path.join(DOCS_OUTPUT, md_rel))

        # Prevent source files (e.g., an index.c file) from inadvertently generating 
        # an output that overwrites your protected semester index.md files.
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