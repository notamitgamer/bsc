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


def parse_algo_md(content):
    """Parse a GitHub-style algorithm .md file and convert to VitePress format."""
    lines = content.splitlines()
    title = ""
    problem_statement = ""
    body_lines = []
    i = 0
    n = len(lines)

    # Extract title from first # heading
    while i < n:
        line = lines[i]
        if line.startswith("# "):
            title = line[2:].strip()
            i += 1
            break
        i += 1

    # Parse rest: find problem statement in > blockquote under ### Problem Statement
    in_problem_section = False
    ps_lines = []

    while i < n:
        line = lines[i]
        stripped = line.strip()

        if stripped.lower().startswith("### problem statement"):
            in_problem_section = True
            i += 1
            continue

        if in_problem_section:
            # Allow blank lines between heading and blockquote
            if stripped == "":
                i += 1
                continue
            if stripped.startswith("> "):
                ps_lines.append(stripped[2:].strip())
                i += 1
                continue
            elif stripped == ">":
                i += 1
                continue
            else:
                # Non-blockquote, non-blank line ends problem section
                in_problem_section = False
                problem_statement = " ".join(ps_lines).strip()
                body_lines.append(line)
        else:
            body_lines.append(line)

        i += 1

    if in_problem_section and ps_lines:
        problem_statement = " ".join(ps_lines).strip()

    return title, problem_statement, body_lines
