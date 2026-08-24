import re


def esc_yaml(s: str) -> str:
    return s.replace("'", "''")


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
