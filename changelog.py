import os
from datetime import datetime, timezone

sha = os.environ.get('GITHUB_SHA', 'unknown')
actor = os.environ.get('GITHUB_ACTOR', 'unknown')
ref = os.environ.get('GITHUB_REF_NAME', 'unknown')
timestamp = os.environ.get('BUILD_TIMESTAMP', '')

try:
    dt = datetime.fromisoformat(timestamp).astimezone(timezone.utc)
    build_time = dt.strftime('%B %d, %Y at %H:%M UTC')
except:
    build_time = timestamp

content = f"""---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;" class="lucide lucide-history"><path d="M3 12a9 9 0 1 0 9-9 9.75 9.75 0 0 0-6.74 2.74L3 8"/><path d="M3 3v5h5"/><path d="M12 7v5l4 2"/></svg> Changelog'
description: 'Current build information.'
---

# Build Info

- **Build ID** — `{sha}`
- **Triggered by** — [@{actor}](https://github.com/{actor})
- **Branch** — `{ref}`
- **Build time** — {build_time}
"""

with open('docs/changelog.md', 'w') as f:
    f.write(content)