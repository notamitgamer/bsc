"""Unified CLI for the repo's build-time scripts.

Merges the old standalone list.py / main.py / changelog.py into one
entry point with subcommands, since they were always run back-to-back
in CI anyway.

Usage:
    python build_tools.py list         # was: python list.py
    python build_tools.py generate     # was: python main.py
    python build_tools.py changelog    # was: python changelog.py
"""
import argparse
import os
from datetime import datetime, timezone


# ---------------------------------------------------------------------------
# list: scan the repo for source files and write list.txt
# ---------------------------------------------------------------------------

LIST_EXTENSIONS = ('.c', '.r', '.cpp', '.py')
LIST_EXCLUDE = ('list.py', 'main.py', 'build_tools.py', 'utils', 'docs')
LIST_ALGO_FOLDER_NAME = 'algorithms'


def cmd_list(args):
    start_path = os.getcwd()
    output_file = args.output
    print(f"Scanning for {', '.join(LIST_EXTENSIONS)} files and algorithm .md files in: {start_path}\n")
    print("-" * 30)

    try:
        count = 0
        with open(output_file, 'w', encoding='utf-8') as f:
            for root, dirs, files in os.walk(start_path):
                dirs[:] = [d for d in dirs if d not in LIST_EXCLUDE]
                in_algo_folder = os.path.basename(root).lower() == LIST_ALGO_FOLDER_NAME

                for file in files:
                    if file in LIST_EXCLUDE:
                        continue
                    if file.lower().endswith(LIST_EXTENSIONS):
                        f.write(os.path.abspath(os.path.join(root, file)) + '\n')
                        count += 1
                    elif in_algo_folder and file.lower().endswith('.md'):
                        f.write(os.path.abspath(os.path.join(root, file)) + '\n')
                        count += 1

        print(f"\nSuccessfully found {count} file(s).")
        print(f"Results have been saved to: {os.path.abspath(output_file)}")
    except PermissionError:
        print("Error: Permission denied in some directories.")
    except Exception as e:
        print(f"An unexpected error occurred: {e}")

    print("-" * 30)
    print("Scan complete.")


# ---------------------------------------------------------------------------
# generate: build VitePress docs from list.txt
# ---------------------------------------------------------------------------

def cmd_generate(args):
    from utils.bsc_md.pipeline import run
    run()


# ---------------------------------------------------------------------------
# changelog: regenerate docs/changelog.md and CHANGELOG.md from CI git logs
# ---------------------------------------------------------------------------

STATUS_LABELS = {
    'A': 'Added',
    'M': 'Modified',
    'D': 'Removed',
    'T': 'Type changed',
    'U': 'Unmerged',
}


def status_label(code):
    letter = code[0]
    if letter == 'R':
        return f'Renamed ({code[1:]}%)' if len(code) > 1 else 'Renamed'
    if letter == 'C':
        return f'Copied ({code[1:]}%)' if len(code) > 1 else 'Copied'
    return STATUS_LABELS.get(letter, letter)


def cmd_changelog(args):
    sha = os.environ.get('BUILD_SHA', 'unknown')
    actor = os.environ.get('BUILD_ACTOR', 'unknown')
    ref = os.environ.get('BUILD_REF', 'unknown')
    timestamp = os.environ.get('BUILD_TIMESTAMP', '')

    try:
        dt = datetime.fromisoformat(timestamp).astimezone(timezone.utc)
        build_time = dt.strftime('%B %d, %Y at %H:%M UTC')
    except Exception:
        build_time = timestamp

    # ---- Pass 1: commit metadata + numstat (line/diff counts) ----
    commits = []
    commit_index = {}

    try:
        with open('git_log_numstat.txt', 'r', encoding='utf-8') as f:
            current = None
            for raw_line in f:
                line = raw_line.rstrip('\n')
                if line.startswith('COMMIT|'):
                    parts = line.split('|')
                    if len(parts) == 5:
                        _, c_sha, c_msg, c_author, c_time = parts
                        try:
                            c_dt = datetime.fromisoformat(c_time).astimezone(timezone.utc)
                            c_time_fmt = c_dt.strftime('%b %d, %Y %H:%M UTC')
                        except Exception:
                            c_time_fmt = c_time
                        current = {
                            'sha': c_sha[:7],
                            'full_sha': c_sha,
                            'msg': c_msg,
                            'author': c_author,
                            'time': c_time_fmt,
                            'files': {},
                            'order': [],
                        }
                        commit_index[c_sha] = len(commits)
                        commits.append(current)
                    continue
                if not line.strip() or current is None:
                    continue
                cols = line.split('\t')
                if len(cols) == 3:
                    add, dele, path = cols
                    add_n = int(add) if add.isdigit() else 0
                    del_n = int(dele) if dele.isdigit() else 0
                    current['files'][path] = {'add': add_n, 'del': del_n, 'status': 'M'}
                    current['order'].append(path)
    except FileNotFoundError:
        pass

    # ---- Pass 2: name-status (A/M/D/R/C) merged into the same commits ----
    try:
        with open('git_log_namestatus.txt', 'r', encoding='utf-8') as f:
            current = None
            for raw_line in f:
                line = raw_line.rstrip('\n')
                if line.startswith('COMMIT|'):
                    parts = line.split('|')
                    if len(parts) == 2:
                        c_sha = parts[1]
                        idx = commit_index.get(c_sha)
                        current = commits[idx] if idx is not None else None
                    continue
                if not line.strip() or current is None:
                    continue
                cols = line.split('\t')
                if len(cols) == 2:
                    code, path = cols
                    if path in current['files']:
                        current['files'][path]['status'] = code
                    else:
                        current['files'][path] = {'add': 0, 'del': 0, 'status': code}
                        current['order'].append(path)
                elif len(cols) == 3:
                    code, old_path, new_path = cols
                    target = new_path
                    stats = current['files'].pop(old_path, {'add': 0, 'del': 0, 'status': code})
                    stats['status'] = code
                    current['files'][target] = stats
                    if old_path in current['order']:
                        current['order'][current['order'].index(old_path)] = target
                    else:
                        current['order'].append(target)
    except FileNotFoundError:
        pass

    icon = '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;" class="lucide lucide-history"><path d="M3 12a9 9 0 1 0 9-9 9.75 9.75 0 0 0-6.74 2.74L3 8"/><path d="M3 3v5h5"/><path d="M12 7v5l4 2"/></svg>'

    def build_commit_block(c):
        commit_url = f"https://github.com/notamitgamer/bsc/commit/{c['full_sha']}"
        total_add = sum(v['add'] for v in c['files'].values())
        total_del = sum(v['del'] for v in c['files'].values())
        file_count = len(c['files'])

        header = (
            f"### [`{c['sha']}`]({commit_url}) {c['msg']}\n\n"
            f"**{c['author']}** committed on {c['time']}"
        )

        if file_count:
            stat_bits = []
            if total_add or total_del:
                stat_bits.append(f"+{total_add} / -{total_del} lines")
            stat_bits.append(f"{file_count} file{'s' if file_count != 1 else ''} changed")
            header += f" · {' · '.join(stat_bits)}"

        if not file_count:
            return header + "\n"

        file_lines = []
        for path in c['order']:
            info = c['files'][path]
            label = status_label(info['status'])
            diff_bits = []
            if info['add']:
                diff_bits.append(f"+{info['add']}")
            if info['del']:
                diff_bits.append(f"-{info['del']}")
            diff_str = ' '.join(diff_bits) if diff_bits else 'binary/no diff'
            file_lines.append(f"| `{path}` | {label} | {diff_str} |")

        files_table = (
            "| File | Change | Lines |\n"
            "| --- | --- | --- |\n"
            + '\n'.join(file_lines)
        )

        details = (
            "<details>\n"
            f"<summary>Show {file_count} changed file{'s' if file_count != 1 else ''}</summary>\n\n"
            f"{files_table}\n"
            "</details>\n"
        )

        return f"{header}\n\n{details}"

    commit_blocks = [build_commit_block(c) for c in commits]
    commit_section = '\n\n---\n\n'.join(commit_blocks) if commit_blocks else 'No commit history available.'

    docs_content = f"""---
title: '{icon} Changelog'
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


def main():
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = parser.add_subparsers(dest='command', required=True)

    p_list = sub.add_parser('list', help='Scan repo for source files -> list.txt (was list.py)')
    p_list.add_argument('-o', '--output', default='list.txt')
    p_list.set_defaults(func=cmd_list)

    p_gen = sub.add_parser('generate', help='Generate VitePress docs from list.txt (was main.py)')
    p_gen.set_defaults(func=cmd_generate)

    p_chg = sub.add_parser('changelog', help='Regenerate changelog files from CI git logs (was changelog.py)')
    p_chg.set_defaults(func=cmd_changelog)

    args = parser.parse_args()
    args.func(args)


if __name__ == '__main__':
    main()
