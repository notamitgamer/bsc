import os
import re

from .config import IGNORED_FOLDERS, PROTECTED_INDEX_FILES


def _get_md_title(md_path: str) -> str:
    try:
        with open(md_path, encoding='utf-8') as f:
            content = f.read()
        # Extracts actual title text, ignoring prepended SVGs or icons
        m = re.search(r'^title:\s*\'(?:.*?</svg>\s*)?(.+)\'$', content, re.MULTILINE)
        if m:
            return m.group(1).strip()
    except OSError:
        pass
    return os.path.splitext(os.path.basename(md_path))[0]


def create_folder_indexes(docs_root):
    for root, dirs, files in os.walk(docs_root):
        dirs[:] = [d for d in dirs if d not in IGNORED_FOLDERS]

        folder_name = os.path.basename(root)

        if folder_name in IGNORED_FOLDERS:
            continue

        index_path = os.path.normpath(os.path.join(root, 'index.md'))

        if index_path in PROTECTED_INDEX_FILES and os.path.exists(index_path):
            continue

        md_files = sorted(
            f for f in files
            if f.endswith('.md') and f.lower() not in {'index.md', 'readme.md', 'default.md', 'home.md', 'tags.md'}
        )
        subdirs = sorted(dirs)

        if root == docs_root:
            title = "BSc Code Index"
            intro  = "Select a category from the left sidebar or the table below."
        else:
            title = folder_name.replace('_', ' ').replace('-', ' ').title()
            intro  = f"Files and sub-folders in **{title}**."

        with open(index_path, 'w', encoding='utf-8') as f:
            f.write(f"# {title}\n\n{intro}\n\n")

            if subdirs:
                f.write("## Folders\n\n")
                f.write(f'<p class="bsc-count">{len(subdirs)} folder{"s" if len(subdirs) != 1 else ""}</p>\n\n')
                f.write('<div class="bsc-filelist is-folders">\n\n')
                for d in subdirs:
                    dir_title = d.replace('_', ' ').replace('-', ' ').title()
                    f.write(f"- [{dir_title}]({d}/index.md)\n")
                f.write("\n</div>\n\n")

            if md_files:
                f.write("## Files\n\n")
                f.write(f'<p class="bsc-count">{len(md_files)} file{"s" if len(md_files) != 1 else ""}</p>\n\n')
                f.write('<div class="bsc-filelist">\n\n')
                for md_file in md_files:
                    src_name = _get_md_title(os.path.join(root, md_file))
                    f.write(f"- [`{src_name}`]({md_file})\n")
                f.write("\n</div>\n\n")
