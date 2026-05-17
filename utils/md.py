import os
import re
from pycparser import c_parser, c_ast

# ---------------------------------------------------------------------------
# Configuration
# ---------------------------------------------------------------------------

FILES_LIST   = r"G:\bsc\c_files_list.txt"   # update name if list now includes R files
BSC_ROOT     = r"G:\bsc"
DOCS_OUTPUT  = r"G:\bsc\docs-new"
RAW_BASE_URL = "https://raw.usercontent.amit.is-a.dev"


# ---------------------------------------------------------------------------
# Difficulty configuration
# ---------------------------------------------------------------------------
# Scoring:
#   keyword groups  : 0-7 pts  (each matched group = 1 pt, max 7)
#   line-count bonus: 0-3 pts
#   total           : 0-10
#
# Difficulty label:
#   1-3  -> Beginner
#   4-5  -> Intermediate
#   6-8  -> Advanced
#   9-10 -> Expert

C_GROUPS = [
    # (group_name, [regex_patterns]) - group scores 1 pt if ANY pattern matches
    ("dynamic_memory", [r"\bmalloc\b", r"\bcalloc\b", r"\brealloc\b", r"\bfree\b"]),
    ("structs",        [r"\bstruct\b", r"\bunion\b", r"\btypedef\b"]),
    ("file_io",        [r"\bfopen\b", r"\bfclose\b", r"\bfprintf\b", r"\bfscanf\b",
                        r"\bfread\b", r"\bfwrite\b", r"\bfgets\b", r"\bfputs\b"]),
    ("advanced",       [r"\bpthread_create\b", r"\bfork\b", r"\bsignal\b",
                        r"\bsetjmp\b", r"\blongjmp\b", r"\bva_list\b", r"\bva_arg\b"]),
    ("pointers",       [r"->", r"\*\s*\*", r"\(\s*\*\s*\w+\s*\)"]),
    ("bitwise",        [r"(?<![=<>!&|])[&|^~](?![=&|])", r"<<=|>>=|<<|>>"]),
    # "recursion" is detected separately (adds 1 pt, still capped at 7 total)
]

R_GROUPS = [
    ("functional",     [r"\blapply\b", r"\bsapply\b", r"\bvapply\b",
                        r"\btapply\b", r"\bmapply\b", r"\bapply\b"]),
    ("regex_ops",      [r"\bgrepl\b", r"\bgsub\b", r"\bregmatches\b",
                        r"\bregexpr\b", r"\bgregexpr\b", r"\bsub\s*\("]),
    ("visualization",  [r"\bggplot\b", r"\bgeom_\w+", r"\baes\s*\("]),
    ("higher_order",   [r"\bReduce\b", r"\bFilter\b", r"\bMap\b", r"\bdo\.call\b"]),
    ("error_handling", [r"\btryCatch\b", r"\bwithCallingHandlers\b"]),
    ("oop",            [r"\bsetClass\b", r"\bsetRefClass\b",
                        r"\bsetGeneric\b", r"\bsetMethod\b"]),
    ("environment",    [r"<<-", r"\benvironment\s*\(", r"\bnew\.env\b"]),
]


def difficulty_label(index: int) -> str:
    if index <= 3:  return "Beginner"
    if index <= 5:  return "Intermediate"
    if index <= 8:  return "Advanced"
    return "Expert"


# ---------------------------------------------------------------------------
# Code stripping — remove strings and comments before keyword scanning
# so keywords inside print/message calls are not counted.
# ---------------------------------------------------------------------------

def strip_c(code: str) -> str:
    """Remove block comments, line comments, and string/char literals from C code."""
    code = re.sub(r'/\*.*?\*/', ' ', code, flags=re.DOTALL)
    code = re.sub(r'//[^\n]*', ' ', code)
    code = re.sub(r'"(?:[^"\\]|\\.)*"', '""', code)
    code = re.sub(r"'(?:[^'\\]|\\.)*'", "''", code)
    return code


def strip_r(code: str) -> str:
    """Remove # comments and string literals from R code."""
    code = re.sub(r'#[^\n]*', ' ', code)
    code = re.sub(r'"(?:[^"\\]|\\.)*"', '""', code)
    code = re.sub(r"'(?:[^'\\]|\\.)*'", "''", code)
    return code


# ---------------------------------------------------------------------------
# Difficulty scoring helpers
# ---------------------------------------------------------------------------
def parse_c_ast(code: str):
    parser = c_parser.CParser()
    try:
        return parser.parse(code)
    except:
        return None

def _group_score(clean: str, groups: list) -> int:
    score = 0
    for _name, patterns in groups:
        for pat in patterns:
            if re.search(pat, clean):
                score += 1
                break
    return score


def _line_bonus(line_count: int) -> int:
    if line_count >= 350:  return 3
    if line_count >= 200:  return 2
    if line_count >= 100:  return 1
    return 0

def _nesting_depth(code: str) -> int:
    depth = 0
    max_depth = 0
    for ch in code:
        if ch == '{':
            depth += 1
            max_depth = max(max_depth, depth)
        elif ch == '}':
            depth -= 1
    return max_depth

class AlgoVisitor(c_ast.NodeVisitor):
    def __init__(self):
        self.loops = 0
        self.nested_loops = 0
        self.func_calls = {}

    def visit_For(self, node):
        self.loops += 1
        if isinstance(node.stmt, c_ast.For):
            self.nested_loops += 1
        self.generic_visit(node)

    def visit_While(self, node):
        self.loops += 1
        self.generic_visit(node)

    def visit_FuncCall(self, node):
        name = node.name.name if hasattr(node.name, "name") else None
        if name:
            self.func_calls[name] = self.func_calls.get(name, 0) + 1
        self.generic_visit(node)

def detect_algorithms(code: str) -> list:
    tags = []

    # Sorting
    if re.search(r'\bqsort\b', code):
        tags.append("Sorting")
    elif re.search(r'\bfor\b.*\bfor\b', code, re.DOTALL):
        tags.append("Sorting (possible)")

    # Searching
    if re.search(r'\bbinary\s*search\b', code, re.I):
        tags.append("Binary Search")
    elif re.search(r'\bsearch\b', code):
        tags.append("Searching")

    # Recursion
    clean = strip_c(code)

    if _has_c_recursion(clean):
        tags.append("Recursion")

    # Loop-heavy
    if len(re.findall(r'\bfor\b|\bwhile\b', code)) >= 2:
        tags.append("Iteration")

    # Array usage
    if re.search(r'\[\s*\d*\s*\]', code):
        tags.append("Array")

    # Pointer-heavy
    if re.search(r'\b\w+\s*\*+\s*\w+', code):
        tags.append("Pointers")

    return tags

def detect_algorithms_ast(code: str) -> list:
    ast = parse_c_ast(code)
    if not ast:
        return []

    visitor = AlgoVisitor()
    visitor.visit(ast)

    tags = []

    if visitor.nested_loops >= 1:
        tags.append("Sorting (likely)")

    if visitor.loops >= 1:
        tags.append("Iteration")

    for fn, count in visitor.func_calls.items():
        if re.search(rf'\b{fn}\s*\(', code) and count > 1:
            tags.append("Recursion")
            break

    return tags

def _has_c_recursion(clean: str) -> bool:
    """
    Detect self-recursive calls in C.
    Finds functions declared with a basic return type and checks
    if the function name appears more than once (definition + call).
    """
    fn_names = re.findall(
        r'\b(?:static\s+)?(?:int|void|char|float|double|long|short|unsigned)\s+(\w+)\s*\(',
        clean
    )
    skip = {'main', 'if', 'for', 'while', 'switch', 'return'}
    for fn in set(fn_names):
        if fn in skip:
            continue
        if len(re.findall(r'\b' + re.escape(fn) + r'\s*\(', clean)) > 1:
            return True
    return False


def score_c(code: str) -> int:
    line_count = code.count('\n') + 1
    clean = strip_c(code)
    kw = _group_score(clean, C_GROUPS)
    if _has_c_recursion(clean):
        kw = min(kw + 1, 7)
    if _nesting_depth(code) >= 3:
        kw = min(kw + 1, 7)
    return min(kw + _line_bonus(line_count), 10)


def score_r(code: str) -> int:
    line_count = code.count('\n') + 1
    clean = strip_r(code)
    kw = _group_score(clean, R_GROUPS)
    return min(kw + _line_bonus(line_count), 10)


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
# Explanation prompt builder
# ---------------------------------------------------------------------------

def build_explanation_prompt(filename: str, lang: str, code: str) -> str:
    """
    Builds a strict, beginner-friendly explanation prompt with language context.
    Embeds the strict rules, formatting blocks, and source code line-by-line.
    """
    MAX_PROMPT_CHARS = 1800

    if len(code) > MAX_PROMPT_CHARS:
        prompt_code = code[:MAX_PROMPT_CHARS] + "\n... (truncated for brevity)"
    else:
        prompt_code = code
    
    lang_name = "C" if lang == "c" else "R"
    
    lines = [
        f"You are explaining a {lang_name} programming code to a beginner.",
        "",
        "STRICT RULES:",
        "",
        "- Only use the given code. Do NOT assume anything not present.",
        "",
        "- Do NOT add extra examples.",
        "",
        "- Keep explanation clear and short.",
        "",
        '- If something is unclear, say "Not clear from code".',
        "",
        "- Follow the exact format below. Do NOT change headings.",
        "",
        "FORMAT:",
        "",
        "[START]",
        "",
        "## What it does",
        "",
        "(Explain the overall purpose in 1-2 sentences)",
        "",
        "## Step-by-step",
        "",
        "(Explain how the code works in steps, simple language)",
        "",
        "## Key Concepts",
        "",
        "(List concepts like loop, condition, function, etc.)",
        "",
        "## Notes",
        "",
        "(Mention any limitations, errors, or assumptions)",
        "",
        "[END]",
        "",
        f"CODE ({filename}):",
        "",
        prompt_code
    ]
    
    return '\n'.join(lines)


# ---------------------------------------------------------------------------
# Markdown builder
# ---------------------------------------------------------------------------

def build_md(filename, lang, author, date, repo, license_str,
             problem_statement, code, raw_url, github_url,
             diff_index, diff_lbl, algorithms):

    out = [
        "---",
        f"title: {filename}",
        f'description: "{lang.upper()} program source code for {filename}"',
        "tags:",
        *([
            f"  - {diff_lbl}"
        ] if lang == "c" else []),
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
    if author:      meta_rows.append(f"| **Author**     | {author} |")
    if date:        meta_rows.append(f"| **Date**       | {date} |")
    if license_str: meta_rows.append(f"| **License**    | {license_str} |")
    if lang == "c":
        meta_rows.append(f"| **Difficulty** | {diff_lbl} (index: {diff_index} / 10) |")

    out += [
        "## Metadata",
        "| Property | Detail |",
        "|---|---|",
        *meta_rows,
        "",
    ]

    if algorithms:
        out += [
            "## Concepts",
            "",
            '!!! warning "Beta Feature"',
            "    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.",
            "",
            *[f"- {a}" for a in algorithms],
            "",
        ]

    # Action buttons
    out += [
        "## Actions",
        "",
        f'[Raw]({raw_url}){{.md-button}}  '
        f'[View on GitHub]({github_url}){{.md-button}}',
        "",
        "> You can print or save this file by opening Raw and using your browser.",
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

    # Collapsible explanation prompt
    prompt_text = build_explanation_prompt(filename, lang, code)
    prompt_indented = "\n".join(f"        {l}" for l in prompt_text.splitlines())

    out += [
        "## Explanation",
        "",
        '??? info "Explain with AI"',
        "",
        "    Copy the prompt below and paste it into any AI assistant.",
        "",
        '    <div data-search-exclude="true">',
        "",
        "    ```text",
        prompt_indented,
        "    ```",
        "",
        "    </div>",
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
        md_files = sorted(
            f for f in files
            if f.endswith('.md') and f.lower() not in {'index.md', 'readme.md', 'default.md', 'home.md', 'tags.md'}
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
            diff_index = score_c(code)
            diff_lbl = difficulty_label(diff_index)
        else:
            author, date, repo, license_str, problem_statement, code = parse_r_file(content)
            diff_index = None
            diff_lbl = None

        clean_code = re.sub(r'^\s*#include.*$', '', code, flags=re.MULTILINE)
        algorithms = list(set(
            detect_algorithms(clean_code) +
            detect_algorithms_ast(clean_code)
        ))

        md_content = build_md(
            filename, lang, author, date, repo, license_str,
            problem_statement, code, raw_url, github_url,
            diff_index, diff_lbl, algorithms
        )

        md_rel = os.path.splitext(rel_path)[0] + '.md'
        md_out = os.path.join(DOCS_OUTPUT, md_rel)

        os.makedirs(os.path.dirname(md_out), exist_ok=True)
        with open(md_out, 'w', encoding='utf-8') as f:
            f.write(md_content)

        print(f"OK  {md_rel}  [{diff_lbl} {diff_index}/10]")
        generated += 1

    print(f"\nDone - {generated} generated, {skipped} skipped.")
    print("Generating folder index pages...")
    create_folder_indexes(DOCS_OUTPUT)
    print("Folder indexes created.")


if __name__ == "__main__":
    main()