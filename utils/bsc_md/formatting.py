import os
import re

def esc_yaml(s: str) -> str:
    return s.replace("'", "''")

def slugify_tag(s: str) -> str:
    """Turn a folder name into a clean tag slug."""
    s = s.strip().lower()
    s = re.sub(r'[_\s]+', '-', s)
    s = re.sub(r'[^a-z0-9\-]', '', s)
    return re.sub(r'-+', '-', s).strip('-')

def derive_tags(rel_path: str, lang_label: str = "") -> list:
    """Derive tag slugs from a file path relative to BSC_ROOT."""
    parts = [p for p in os.path.normpath(rel_path).split(os.sep) if p]
    tags = []

    # 1. Generate tags from folder names
    for part in parts[:-1]:
        m = re.match(r'^semester[_-]?(\d+)$', part, re.IGNORECASE)
        tag = f"sem{m.group(1)}" if m else slugify_tag(part)
        if tag and tag not in tags:
            tags.append(tag)

    # 2. Dynamically generate the language tag from the exact file extension
    _, ext = os.path.splitext(rel_path)
    if ext:
        # Removes the '.' and converts to uppercase (e.g., '.cpp' -> 'CPP')
        ext_tag = ext.lstrip('.').upper()
        if ext_tag and ext_tag not in tags:
            tags.append(ext_tag)

    return tags

def format_tags_yaml(tags: list) -> str:
    if not tags:
        return "tags: []"
    items = ", ".join(f"'{esc_yaml(t)}'" for t in tags)
    return f"tags: [{items}]"

def esc_html(s: str) -> str:
    """Escape characters that break Vue template compilation in VitePress."""
    return s.replace('&', '&amp;').replace('<', '&lt;').replace('>', '&gt;')
