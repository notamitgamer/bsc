import os

from .config import (
    FILES_LIST, BSC_ROOT, DOCS_OUTPUT,
    ALGO_FOLDER_NAME, SUPPORTED_LANGS, PROTECTED_INDEX_FILES,
)
from .formatting import derive_tags
from .parsers import parse_c_style, parse_hash_style, parse_algo_md
from .builders import build_md, build_algo_md
from .indexing import create_folder_indexes
from .snapshot_content import build_content_json


def run():
    with open(FILES_LIST, 'r', encoding='utf-8') as f:
        file_paths = [line.strip() for line in f if line.strip()]

    generated = skipped = 0

    for full_path in file_paths:
        full_path = os.path.normpath(full_path)
        ext = os.path.splitext(full_path)[1].lower()

        # Handle algorithm .md files
        if ext == '.md':
            parent_folder = os.path.basename(os.path.dirname(full_path))
            if parent_folder.lower() != ALGO_FOLDER_NAME:
                print(f"SKIP (non-algo .md): {full_path}")
                skipped += 1
                continue

            try:
                with open(full_path, 'r', encoding='utf-8', errors='ignore') as f:
                    content_md = f.read()
            except FileNotFoundError:
                print(f"NOT FOUND: {full_path}")
                skipped += 1
                continue

            filename_base = os.path.splitext(os.path.basename(full_path))[0]
            rel_path = os.path.relpath(full_path, BSC_ROOT)
            title, problem_statement, body_lines = parse_algo_md(content_md)
            if not title:
                title = filename_base
            rel_url_algo = rel_path.replace('\\', '/')
            algo_tags = derive_tags(rel_path)
            md_content = build_algo_md(
                filename_base, title, problem_statement, body_lines, rel_url_algo, algo_tags
            )

            rel_path = os.path.relpath(full_path, BSC_ROOT)
            md_rel = os.path.splitext(rel_path)[0] + '.md'
            md_out = os.path.normpath(os.path.join(DOCS_OUTPUT, md_rel))

            if md_out in PROTECTED_INDEX_FILES and os.path.exists(md_out):
                print(f"SKIP (Protected Index File): {md_out}")
                skipped += 1
                continue

            os.makedirs(os.path.dirname(md_out), exist_ok=True)
            with open(md_out, 'w', encoding='utf-8') as f:
                f.write(md_content)

            print(f"OK  {md_rel}")
            generated += 1
            continue

        if ext not in SUPPORTED_LANGS:
            print(f"SKIP (unsupported extension): {full_path}")
            skipped += 1
            continue

        lang_info = SUPPORTED_LANGS[ext]

        try:
            rel_path = os.path.relpath(full_path, BSC_ROOT)
        except ValueError:
            print(f"SKIP (relpath failed): {full_path}")
            skipped += 1
            continue

        rel_url = rel_path.replace('\\', '/')

        try:
            with open(full_path, 'r', encoding='utf-8', errors='ignore') as f:
                content = f.read()
        except FileNotFoundError:
            print(f"NOT FOUND: {full_path}")
            skipped += 1
            continue

        filename = os.path.basename(full_path)

        if lang_info['style'] == 'c':
            problem_statement, code = parse_c_style(content)
        else:
            problem_statement, code = parse_hash_style(content)

        file_tags = derive_tags(rel_path, lang_info['label'])
        md_content = build_md(
            filename, lang_info['label'], lang_info['fence'],
            problem_statement, code, rel_url, file_tags,
        )

        md_rel = os.path.splitext(rel_path)[0] + '.md'
        md_out = os.path.normpath(os.path.join(DOCS_OUTPUT, md_rel))

        if md_out in PROTECTED_INDEX_FILES and os.path.exists(md_out):
            print(f"SKIP (Protected Index File): {md_out}")
            skipped += 1
            continue

        os.makedirs(os.path.dirname(md_out), exist_ok=True)
        with open(md_out, 'w', encoding='utf-8') as f:
            f.write(md_content)

        print(f"OK  {md_rel}")
        generated += 1

    print(f"\nDone - {generated} generated, {skipped} skipped.")
    print("Generating folder index pages...")
    create_folder_indexes(DOCS_OUTPUT)
    print("Folder indexes created.")

    print("Generating snapshot content.json...")
    written, content_skipped = build_content_json()
    print(f"content.json: {written} file(s), {content_skipped} skipped.")
