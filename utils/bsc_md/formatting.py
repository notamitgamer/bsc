import os
import re


def esc_yaml(s: str) -> str:
    return s.replace("'", "''")


def slugify_tag(s: str) -> str:
    """Turn a folder/lang name into a clean tag slug."""
    s = s.strip().lower()
    s = re.sub(r'[_\s]+', '-', s)
    s = re.sub(r'[^a-z0-9\-]', '', s)
    return re.sub(r'-+', '-', s).strip('-')


def derive_tags(rel_path: str, lang_label: str = "") -> list:
    """Derive tag slugs from a file path relative to BSC_ROOT."""
    parts = [p for p in os.path.normpath(rel_path).split(os.sep) if p]
    tags = []

    for part in parts[:-1]:
        m = re.match(r'^semester[_-]?(\d+)$', part, re.IGNORECASE)
        tag = f"sem{m.group(1)}" if m else slugify_tag(part)
        if tag and tag not in tags:
            tags.append(tag)

    if lang_label:
        lang_tag = slugify_tag(lang_label)
        if lang_tag and lang_tag not in tags:
            tags.append(lang_tag)

    return tags


def format_tags_yaml(tags: list) -> str:
    if not tags:
        return "tags: []"
    items = ", ".join(f"'{esc_yaml(t)}'" for t in tags)
    return f"tags: [{items}]"


def esc_html(s: str) -> str:
    """Escape characters that break Vue template compilation in VitePress."""
    return s.replace('&', '&amp;').replace('<', '&lt;').replace('>', '&gt;')


def format_author(author: str) -> str:
    """Return a mailto markdown link if the author string contains an email.
    Handles both 'Name <email>' and 'Name (email)' formats."""
    m = re.search(r'(.*?)\s*[<(]([^<>()]+@[^<>()]+)[>)]', author)
    if m:
        name  = esc_html(m.group(1).strip())
        email = esc_html(m.group(2).strip())
        return f"[{name}](mailto:{email})"
    return esc_html(author)


def format_author_html(author: str) -> str:
    """Return an HTML <a> mailto link if the author string contains an email.
    Handles both 'Name <email>' and 'Name (email)' formats."""
    m = re.search(r'(.*?)\s*[<(]([^<>()]+@[^<>()]+)[>)]', author)
    if m:
        name  = esc_html(m.group(1).strip())
        email = esc_html(m.group(2).strip())
        return f'<a href="mailto:{email}" style="color:var(--vp-c-text-3);">{name}</a>'
    return esc_html(author)
