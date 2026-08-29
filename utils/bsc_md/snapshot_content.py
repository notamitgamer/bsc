"""Builds docs/public/content.json — a flat JSON array with the raw content
of every file listed in list.txt.

This backs the offline "Snapshot" feature (see docs/snapshots.md): instead of
trying to capture the rendered docs site page-by-page, the client just
downloads this one file and stores it locally, then lists/searches it.

Kept separate from the main docs-generation pipeline (pipeline.py) so it can
be reasoned about and tested on its own — it reads the same list.txt and the
same SUPPORTED_LANGS map, but writes plain source text, not rendered markdown.
"""
import json
import os

from .config import FILES_LIST, BSC_ROOT, DOCS_OUTPUT, SUPPORTED_LANGS

CONTENT_JSON_OUT = os.path.join(DOCS_OUTPUT, "public", "content.json")


def build_content_json(files_list=FILES_LIST, out_path=CONTENT_JSON_OUT):
    with open(files_list, "r", encoding="utf-8") as f:
        file_paths = [line.strip() for line in f if line.strip()]

    entries = []
    skipped = 0

    for full_path in file_paths:
        full_path = os.path.normpath(full_path)
        ext = os.path.splitext(full_path)[1].lower()

        try:
            rel_path = os.path.relpath(full_path, BSC_ROOT)
        except ValueError:
            skipped += 1
            continue
        rel_url = rel_path.replace("\\", "/")

        lang = "markdown" if ext == ".md" else SUPPORTED_LANGS.get(ext, {}).get("fence", "text")

        try:
            with open(full_path, "r", encoding="utf-8", errors="ignore") as f:
                content = f.read()
        except (FileNotFoundError, IsADirectoryError):
            skipped += 1
            continue

        entries.append({
            "path": rel_url,
            "lang": lang,
            "size": len(content.encode("utf-8")),
            "content": content,
        })

    os.makedirs(os.path.dirname(out_path), exist_ok=True)
    with open(out_path, "w", encoding="utf-8") as f:
        json.dump(entries, f, ensure_ascii=False, separators=(",", ":"))

    return len(entries), skipped


if __name__ == "__main__":
    written, skipped = build_content_json()
    print(f"content.json: {written} file(s) written, {skipped} skipped -> {CONTENT_JSON_OUT}")
