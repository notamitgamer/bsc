import os

FILES_LIST  = r"G:\bsc\c_files_list.txt"
BSC_ROOT    = r"G:\bsc"
DOCS_OUTPUT = r"G:\bsc\docs-temp"
RAW_BASE_URL = "https://raw.usercontent.amit.is-a.dev"


# ---------------------------------------------------------------------------
# Block comment reader
# ---------------------------------------------------------------------------

def read_block_comment(lines, start):
    result = []
    i = start
    n = len(lines)

    first = lines[i].strip()

    # Single-line block comment: /* ... */
    if first.startswith('/*') and '*/' in first:
        inner = first[2 : first.index('*/')].strip().strip('*').strip()
        if inner:
            result.append(inner)
        return result, i + 1

    # Multi-line: opening line
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

    # Skip leading blank lines
    while i < n and not lines[i].strip():
        i += 1

    # First block comment → metadata (Author, Date, Repo, License)
    if i < n and lines[i].strip().startswith('/*'):
        block, i = read_block_comment(lines, i)
        for line in block:
            if ':' in line:
                key, _, val = line.partition(':')
                key = key.strip().lower()
                val = val.strip()
                if 'author'  in key: author      = val
                elif 'date'  in key: date         = val
                elif 'repo'  in key: repo         = val
                elif 'license' in key: license_str = val

    # Skip blank lines between blocks
    while i < n and not lines[i].strip():
        i += 1

    # Second block comment → problem statement (only if it has no #include)
    if i < n and lines[i].strip().startswith('/*'):
        peek_block, peek_i = read_block_comment(lines, i)
        block_text = ' '.join(peek_block)
        if '#include' not in block_text:
            ps_parts = [p for p in peek_block if p]
            problem_statement = ' '.join(ps_parts).strip()
            i = peek_i

    # Find where the actual code starts (#include)
    code_start = None
    for j in list(range(i, n)) + list(range(0, i)):
        if lines[j].strip().startswith('#include'):
            code_start = j
            break

    code = '\n'.join(lines[code_start:]).strip() if code_start is not None else content.strip()

    return author, date, repo, license_str, problem_statement, code


# ---------------------------------------------------------------------------
# Markdown builder
# ---------------------------------------------------------------------------

def build_md(filename, author, date, repo, license_str, problem_statement, code, raw_url, github_url):

    lines = [
        "---",
        f"title: {filename}",
        f'description: "C program source code for {filename}"',
        "---",
        "",
        f"# `{filename}`",
        "",
    ]

    # Problem statement as a named admonition (no redundant heading above it)
    if problem_statement:
        # Each line of the body must be indented by 4 spaces
        indented = "\n".join(f"    {line}" for line in problem_statement.splitlines())
        lines += [
            '',                                   # blank line before admonition
            '!!! abstract "Problem Statement"',
            indented,
            "",
        ]

    # Metadata table
    meta_rows = []
    if author:      meta_rows.append(f"| **Author**  | {author} |")
    if date:        meta_rows.append(f"| **Date**    | {date} |")
    if license_str: meta_rows.append(f"| **License** | {license_str} |")

    if meta_rows:
        lines += [
            "## Metadata",
            "| Property | Detail |",
            "|---|---|",
            *meta_rows,
            "",
        ]

    # Action buttons using MkDocs Material md-button via attr_list
    lines += [
        "## Actions",
        "",
        f'[Raw]({raw_url}){{.md-button}}  '
        f'[View on GitHub]({github_url}){{.md-button}}',
        "",
        "> 💡 You can print or save this file by opening **Raw** and using your browser.",
        "",
        "## Source Code",
        "```c",
        code,
        "```",
        "",
    ]

    return '\n'.join(lines)


# ---------------------------------------------------------------------------
# Folder index generator
# ---------------------------------------------------------------------------

def create_folder_indexes(docs_root):
    for root, dirs, files in os.walk(docs_root):

        # Collect MD files that are not index files themselves
        md_files = sorted(
            f for f in files
            if f.endswith('.md') and f.lower() not in {'index.md', 'readme.md', 'default.md', 'home.md'}
        )
        subdirs = sorted(dirs)

        folder_name = os.path.basename(root)

        if root == docs_root:
            title = "BSc Code Index"
            intro  = "Select a category from the left sidebar or the table below."
        else:
            title = folder_name.replace('_', ' ').replace('-', ' ').title()
            intro  = f"Files and sub-folders in **{title}**."

        index_path = os.path.join(root, 'index.md')

        with open(index_path, 'w', encoding='utf-8') as f:
            f.write(f"# {title}\n\n{intro}\n\n")

            # --- Sub-folder table (always shown if subdirs exist) ---
            if subdirs:
                f.write("## Folders\n\n")
                f.write("| # | Folder | Link |\n")
                f.write("|---|---|---|\n")
                for idx, d in enumerate(subdirs, 1):
                    dir_title = d.replace('_', ' ').replace('-', ' ').title()
                    f.write(f"| {idx} | {dir_title} | [Open]({d}/index.md) |\n")
                f.write("\n")

            # --- File table (always shown if md files exist) ---
            if md_files:
                f.write("## Files\n\n")
                f.write("| # | File | Link |\n")
                f.write("|---|---|---|\n")
                for idx, md_file in enumerate(md_files, 1):
                    c_filename = md_file[:-3] + '.c'
                    f.write(f"| {idx} | `{c_filename}` | [View Code]({md_file}) |\n")
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
        author, date, repo, license_str, problem_statement, code = parse_c_file(content)

        md_content = build_md(
            filename, author, date, repo, license_str,
            problem_statement, code, raw_url, github_url
        )

        md_rel = os.path.splitext(rel_path)[0] + '.md'
        md_out = os.path.join(DOCS_OUTPUT, md_rel)

        os.makedirs(os.path.dirname(md_out), exist_ok=True)
        with open(md_out, 'w', encoding='utf-8') as f:
            f.write(md_content)

        print(f"OK  {md_rel}")
        generated += 1

    print(f"\nDone — {generated} generated, {skipped} skipped.")
    print("Generating folder index pages...")
    create_folder_indexes(DOCS_OUTPUT)
    print("Folder indexes created.")


if __name__ == "__main__":
    main()