from .config import ALGO_ICON_SVG, FILE_ICON_SVG
from .formatting import esc_yaml, esc_html, format_author_html, format_tags_yaml


def build_algo_md(filename_base, title, problem_statement, body_lines, source_path="", tags=None):
    """Build VitePress .md from parsed algo content."""
    desc = problem_statement if problem_statement else f"Algorithm — {title}"

    fm = [
        "---",
        f"title: '{ALGO_ICON_SVG} {esc_yaml(title)}'",
        f"description: '{esc_yaml(desc)}'",
        f"source: '{source_path}'",
        format_tags_yaml(tags or []),
        "---",
        "",
    ]

    body = [f"# {title}", ""]

    if problem_statement:
        body += [
            "### Problem Statement",
            "",
            "::: tip Problem Statement",
            esc_html(problem_statement),
            ":::",
            "",
        ]

    # Replace > blockquote problem section in body with nothing (already handled above)
    # Just append the remaining body lines (Algorithm, Pseudocode, Complexity etc.)
    cleaned = []
    blines = body_lines[:]
    j = 0
    while j < len(blines):
        l = blines[j]
        s = l.strip()
        if s.lower().startswith("### problem statement"):
            # skip until blockquote ends
            j += 1
            while j < len(blines) and (blines[j].strip().startswith(">") or blines[j].strip() == ""):
                j += 1
            continue
        cleaned.append(l)
        j += 1

    # Remove leading blank lines from cleaned
    while cleaned and not cleaned[0].strip():
        cleaned.pop(0)

    body += cleaned

    return "\n".join(fm + body)


def build_md(filename, lang_label, fence_lang, author, date, repo, license_str,
             problem_statement, code, rel_url, tags=None):

    desc = problem_statement if problem_statement else f"{lang_label} program — {filename}"

    fm_lines = [
        "---",
        f"title: '{FILE_ICON_SVG} {esc_yaml(filename)}'",
        f"description: '{esc_yaml(desc)}'",
        f"source: '{rel_url}'",
        format_tags_yaml(tags or []),
        "---",
    ]

    body = [
        "",
        f"# {filename}",
        ""
    ]

    if problem_statement:
        body += [
            "",
            "### Problem Statement",
            "",
            f"::: tip {filename}",
            esc_html(problem_statement),
            ":::",
            "",
        ]

    body += [
        "## Source Code",
        "",
        f"```{fence_lang} [{filename}]",
        code,
        "```",
        "---",
        "",
    ]

    meta_parts = []
    if author:
        meta_parts.append(f"● Author - {format_author_html(author)}")
    if date:
        meta_parts.append(f"Updated - {esc_html(date)}")

    if meta_parts:
        body += [
            f'<div style="font-size:0.8rem;color:var(--vp-c-text-3);margin-bottom:16px;">'
            f'{" · ".join(meta_parts)}</div>',
            "",
        ]

    return '\n'.join(fm_lines + body)
