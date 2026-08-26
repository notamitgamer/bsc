#!/usr/bin/env python3
"""
Remove the leading "Author / Date / Repo / License" header comment block
from source files in this repo.

Handles all header variants seen in the codebase:

  1. C-style, pipe-separated:
     /*
      * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
      * Repo: https://github.com/notamitgamer/bsc
      * License: MIT
      */

  2. C-style, aligned colon-per-line:
     /*
      * Author  : Amit Dutta <amitdutta4255@gmail.com>
      * Date    : 24 Dec 2025
      * Repo    : https://github.com/notamitgamer/bsc
      * License : MIT License (See the LICENSE file for details)
      */

  3. C-style, short form (no date/repo/license):
     /*
      * Author  : Amit Dutta
      * File    : interest.h
      */

  4. Hash-style, pipe-separated:
     # Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 18 Jun 2026
     # Repo: https://github.com/notamitgamer/bsc
     # License: MIT

  5. Hash-style, aligned colon-per-line:
     # Author  : Amit Dutta <amitdutta4255@gmail.com>
     # Date    : 06 Feb 2026
     # Repo    : https://github.com/notamitgamer/bsc
     # License : MIT License (See the LICENSE file for details)
     # Copyright (c) 2026 Amit Dutta

Only removes the block if it actually looks like an author header
(contains "Author"), so it won't touch unrelated leading comments.
Also collapses any resulting leading blank lines to a single blank
line before the real content.
"""
from __future__ import annotations

import argparse
import sys
from pathlib import Path

C_STYLE_EXTS = {".c", ".h", ".cpp", ".hpp", ".cc"}
HASH_STYLE_EXTS = {".py", ".r", ".R"}


def strip_c_style_header(lines: list[str]) -> list[str] | None:
    """If lines start with a /* ... */ block containing 'Author', remove it."""
    i = 0
    n = len(lines)
    while i < n and lines[i].strip() == "":
        i += 1
    if i >= n or not lines[i].strip().startswith("/*"):
        return None

    start = i
    block = []
    first = lines[i].strip()
    if "*/" in first and first != "/*":
        # single-line block comment
        block.append(first)
        end = i + 1
    else:
        block.append(first)
        i += 1
        end = None
        while i < n:
            block.append(lines[i].strip())
            if "*/" in lines[i]:
                end = i + 1
                break
            i += 1
        if end is None:
            return None

    block_text = " ".join(block)
    if "Author" not in block_text:
        return None

    remainder = lines[end:]
    while remainder and remainder[0].strip() == "":
        remainder.pop(0)
    return remainder


def strip_hash_style_header(lines: list[str]) -> list[str] | None:
    """If lines start with consecutive '#' comment lines containing 'Author', remove them."""
    i = 0
    n = len(lines)
    while i < n and lines[i].strip() == "":
        i += 1
    if i >= n or not lines[i].strip().startswith("#"):
        return None

    start = i
    block = []
    while i < n and lines[i].strip().startswith("#"):
        block.append(lines[i].strip())
        i += 1

    block_text = " ".join(block)
    if "Author" not in block_text:
        return None

    remainder = lines[i:]
    while remainder and remainder[0].strip() == "":
        remainder.pop(0)
    return remainder


def process_file(path: Path, dry_run: bool = False) -> bool:
    try:
        content = path.read_text(encoding="utf-8")
    except (UnicodeDecodeError, OSError):
        return False

    lines = content.splitlines()
    ext = path.suffix

    new_lines = None
    if ext in C_STYLE_EXTS:
        new_lines = strip_c_style_header(lines)
    elif ext in HASH_STYLE_EXTS:
        new_lines = strip_hash_style_header(lines)

    if new_lines is None:
        return False

    new_content = "\n".join(new_lines)
    if new_content and not new_content.endswith("\n"):
        new_content += "\n"

    if not dry_run:
        path.write_text(new_content, encoding="utf-8")
    return True


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument(
        "root", nargs="?", default=".", help="Root directory to scan (default: cwd)"
    )
    parser.add_argument(
        "--dry-run", action="store_true", help="Report what would change without writing"
    )
    args = parser.parse_args()

    root = Path(args.root)
    exts = C_STYLE_EXTS | HASH_STYLE_EXTS
    changed = []

    for path in sorted(root.rglob("*")):
        if not path.is_file():
            continue
        if path.suffix not in exts:
            continue
        if "node_modules" in path.parts or ".git" in path.parts:
            continue
        if process_file(path, dry_run=args.dry_run):
            changed.append(path)

    action = "Would remove" if args.dry_run else "Removed"
    print(f"{action} header from {len(changed)} file(s):")
    for p in changed:
        print(f"  {p}")


if __name__ == "__main__":
    sys.exit(main())
