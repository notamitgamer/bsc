import os
import re

# --- Configuration ---
FILES_LIST   = "c_files_list.txt"   # path to your list file (same dir as this script)
BSC_ROOT     = r"G:\bsc"            # root of your repo
DOCS_OUTPUT  = r"G:\bsc\docs-retype"       # where MD files will be written (Retype input dir)
RAW_BASE_URL = "https://raw.usercontent.amit.is-a.dev"
# --- End Configuration ---


def read_block_comment(lines, start):
    """
    Read a /* ... */ block starting at `start`.
    Returns (list_of_text_lines, next_line_index).
    """
    result = []
    i = start
    n = len(lines)

    first = lines[i].strip()

    # Single-line: /* ... */
    if first.startswith('/*') and '*/' in first:
        inner = first[2 : first.index('*/')].strip().strip('*').strip()
        if inner:
            result.append(inner)
        return result, i + 1

    # Multi-line opening
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
        else:
            text = line.strip('*').strip()
            if text:
                result.append(text)
        i += 1

    return result, i


def parse_c_file(content):
    """
    Parse a .c file and return:
      author, date, repo, license_str, problem_statement, code_from_include
    """
    lines = content.splitlines()
    n = len(lines)
    i = 0

    author = date = repo = license_str = problem_statement = ""

    # Skip leading blank lines
    while i < n and not lines[i].strip():
        i += 1

    # --- First block comment → metadata ---
    if i < n and lines[i].strip().startswith('/*'):
        block, i = read_block_comment(lines, i)
        for line in block:
            if ':' in line:
                key, _, val = line.partition(':')
                key = key.strip().lower()
                val = val.strip()
                if 'author' in key:
                    author = val
                elif 'date' in key:
                    date = val
                elif 'repo' in key:
                    repo = val
                elif 'license' in key:
                    license_str = val

    # Skip blank lines
    while i < n and not lines[i].strip():
        i += 1

    # --- Second block comment → problem statement (only if before #include) ---
    if i < n and lines[i].strip().startswith('/*'):
        # Peek to confirm it's before any #include
        peek_block, peek_i = read_block_comment(lines, i)
        # Check if there's an #include before this block ends
        block_text = ' '.join(peek_block)
        if '#include' not in block_text:
            ps_parts = [p for p in peek_block if p]
            problem_statement = ' '.join(ps_parts).strip()
            i = peek_i

    # --- Find code starting from first #include ---
    code_start = None
    # Search from current position first, then from top as fallback
    for j in list(range(i, n)) + list(range(0, i)):
        if lines[j].strip().startswith('#include'):
            code_start = j
            break

    if code_start is not None:
        code = '\n'.join(lines[code_start:]).strip()
    else:
        code = content.strip()

    return author, date, repo, license_str, problem_statement, code


def build_md(filename, author, date, repo, license_str, problem_statement, code, raw_url, github_url):
    """Assemble the Markdown content for one file."""
    description_meta = f"C program source code for {filename}"

    lines = [
        "---",
        f"label: {filename}",
        f"description: \"{description_meta}\"",
        "---",
        "",
        f"# `{filename}`",
        "",
    ]

    # Problem statement (Added Header for ToC)
    if problem_statement:
        lines += [
            "## Problem Statement",
            "!!!",
            problem_statement,
            "!!!",
            "",
        ]

    # Metadata table (Added Header for ToC)
    lines += [
        "## Metadata",
        "| Property | Detail |",
        "|---|---|",
    ]
    if author:
        lines.append(f"| **Author** | {author} |")
    if date:
        lines.append(f"| **Date** | {date} |")
    if license_str:
        lines.append(f"| **License** | {license_str} |")

    # Retype button components with the pencil/edit icon
    button_row = (
        f'[!button variant="primary" icon="code" target="blank" text="Raw"]({raw_url}) '
        f'[!button variant="secondary" target="blank" text="View on GitHub"]({github_url})'
    )

    # Actions and Note (Added Header for ToC)
    lines += [
        "",
        "## Actions",
        button_row,
        "",
        "💡 *Note: You can print or download this file by going to the **Raw** file.*",
        "",
        "## Source Code",
        "```c",
        code,
        "```",
        "",
    ]

    return '\n'.join(lines)


def create_folder_indexes(docs_root):
    """Traverse the docs directory and create a README.md in any folder to show an index table."""
    for root, dirs, files in os.walk(docs_root):
        # Find all generated .md files (excluding the index files themselves)
        md_files = [f for f in files if f.endswith('.md') and f.lower() not in ['readme.md', 'index.md', 'default.md', 'home.md']]
        md_files.sort()
        
        folder_name = os.path.basename(root)
        
        # If it's the main docs root folder, give it a special title
        if root == docs_root:
            title = "Welcome to BSc Code Index"
            intro = "Please select a category below or from the navigation menu on the left."
        else:
            # Make folder names look nicer as titles (e.g., "Semester_1" -> "Semester 1")
            title = folder_name.replace('_', ' ').replace('-', ' ').title()
            intro = f"List of elements in **{title}**"
        
        readme_path = os.path.join(root, 'README.md')
        
        # Always overwrite to ensure tables are up-to-date with newly generated files
        with open(readme_path, 'w', encoding='utf-8') as f:
            f.write(f"---\nicon: file-directory\n---\n\n")
            f.write(f"# {title}\n\n")
            f.write(f"{intro}\n\n")
            
            # If there are markdown files in this folder, create the program table
            if md_files:
                f.write("| No. | File Name | Link |\n")
                f.write("|---|---|---|\n")
                for idx, md_file in enumerate(md_files, start=1):
                    # Reconstruct the original .c filename for the display table
                    c_filename = md_file[:-3] + '.c'
                    f.write(f"| {idx} | `{c_filename}` | [View Code]({md_file}) |\n")
            
            # If there are subdirectories (like the main folder), list them instead
            elif dirs:
                f.write("| No. | Folder Name | Link |\n")
                f.write("|---|---|---|\n")
                for idx, d in enumerate(sorted(dirs), start=1):
                    dir_title = d.replace('_', ' ').replace('-', ' ').title()
                    f.write(f"| {idx} | 📁 {dir_title} | [Open Folder]({d}/README.md) |\n")


def main():
    script_dir = os.path.dirname(os.path.abspath(__file__))
    list_path  = os.path.join(script_dir, FILES_LIST)

    with open(list_path, 'r', encoding='utf-8') as f:
        file_paths = [line.strip() for line in f if line.strip()]

    generated = 0
    skipped   = 0

    for full_path in file_paths:
        # Normalise separators
        full_path = os.path.normpath(full_path)

        # Relative path from BSC_ROOT  →  Semester_1\assignment-primary\file.c
        try:
            rel_path = os.path.relpath(full_path, BSC_ROOT)
        except ValueError:
            # Different drive edge-case
            print(f"SKIP (relpath failed): {full_path}")
            skipped += 1
            continue

        # Convert path separators for URLs
        rel_url = rel_path.replace('\\', '/')
        
        # Raw URL
        raw_url = f"{RAW_BASE_URL}/{rel_url}"
        
        # GitHub Repo URL (Constructed directly to the C file)
        github_url = f"https://github.com/notamitgamer/bsc/blob/main/{rel_url}"

        # Read the .c file
        try:
            with open(full_path, 'r', encoding='utf-8', errors='ignore') as f:
                content = f.read()
        except FileNotFoundError:
            print(f"NOT FOUND: {full_path}")
            skipped += 1
            continue

        filename = os.path.basename(full_path)
        author, date, repo, license_str, problem_statement, code = parse_c_file(content)

        md_content = build_md(filename, author, date, repo, license_str,
                              problem_statement, code, raw_url, github_url)

        # Output path: docs\Semester_1\assignment-primary\file.md
        md_rel  = os.path.splitext(rel_path)[0] + '.md'
        md_out  = os.path.join(DOCS_OUTPUT, md_rel)

        os.makedirs(os.path.dirname(md_out), exist_ok=True)
        with open(md_out, 'w', encoding='utf-8') as f:
            f.write(md_content)

        print(f"OK  {md_rel}")
        generated += 1

    print(f"\nDone — {generated} generated, {skipped} skipped.")
    
    # Auto-generate index pages for all directories to prevent 404 errors
    print("Generating folder index pages...")
    create_folder_indexes(DOCS_OUTPUT)
    print("Folder indexes created.")


if __name__ == "__main__":
    main()