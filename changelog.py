import os
from datetime import datetime, timezone

sha = os.environ.get('BUILD_SHA', 'unknown')
actor = os.environ.get('BUILD_ACTOR', 'unknown')
ref = os.environ.get('BUILD_REF', 'unknown')
timestamp = os.environ.get('BUILD_TIMESTAMP', '')

try:
    dt = datetime.fromisoformat(timestamp).astimezone(timezone.utc)
    build_time = dt.strftime('%B %d, %Y at %H:%M UTC')
except:
    build_time = timestamp

# Parse git log
commits = []
try:
    with open('git_log.txt', 'r', encoding='utf-8') as f:
        for line in f:
            parts = line.strip().split('|')
            if len(parts) == 4:
                c_sha, c_msg, c_author, c_time = parts
                try:
                    c_dt = datetime.fromisoformat(c_time).astimezone(timezone.utc)
                    c_time_fmt = c_dt.strftime('%b %d, %Y %H:%M UTC')
                except:
                    c_time_fmt = c_time
                commits.append({
                    'sha': c_sha[:7],
                    'full_sha': c_sha,
                    'msg': c_msg,
                    'author': c_author,
                    'time': c_time_fmt,
                })
except FileNotFoundError:
    pass

ICON = '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;" class="lucide lucide-history"><path d="M3 12a9 9 0 1 0 9-9 9.75 9.75 0 0 0-6.74 2.74L3 8"/><path d="M3 3v5h5"/><path d="M12 7v5l4 2"/></svg>'

# Build commit history markdown
commit_lines = []
for c in commits:
    commit_url = f"https://github.com/notamitgamer/bsc/commit/{c['full_sha']}"
    commit_lines.append(f"- [`{c['sha']}`]({commit_url}) {c['msg']} — {c['author']}, {c['time']}")

commit_section = '\n'.join(commit_lines) if commit_lines else '- No commit history available.'

# VitePress docs/changelog.md
docs_content = f"""---
title: '{ICON} Changelog'
description: 'Current build information and recent commit history.'
---

# Build Info

::: tip Important
Compare the Build ID (listed below) against the one in the [GitHub Changelog](https://github.com/notamitgamer/bsc/blob/main/CHANGELOG.md#latest-build) to verify that your browser is displaying the latest version.
::: 

- **Build ID** — <span style="word-break: break-all;">`{sha}`</span>
- **Triggered by** — [@{actor}](https://github.com/{actor})
- **Branch** — `{ref}`
- **Build time** — {build_time}

## Recent Commits

{commit_section}
"""

with open('docs/changelog.md', 'w', encoding='utf-8') as f:
    f.write(docs_content)

# Root CHANGELOG.md for GitHub
root_content = f"""# Changelog

> Last build: {build_time}

## Latest Build

- **Build ID** — `{sha}`
- **Triggered by** — [@{actor}](https://github.com/{actor})
- **Branch** — `{ref}`
- **Build time** — {build_time}

## Recent Commits

{commit_section}

---

*This file is auto-generated on every deployment. For the live site, visit [code.amit.is-a.dev](https://code.amit.is-a.dev).*
*Check [/changelog](https://code.amit.is-a.dev/changelog) on the site to verify your browser is showing the latest build.*
"""

with open('CHANGELOG.md', 'w', encoding='utf-8') as f:
    f.write(root_content)

print(f"Generated changelog with {len(commits)} commits.")