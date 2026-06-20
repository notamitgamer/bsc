---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> interpeter.py'
description: 'Python program — interpeter.py'
source: 'semester_1/khurapati-idea/interpeter.py'
---

# interpeter.py

### Metadata

- **Author** — [Amit Dutta](mailto:amitdutta4255@gmail.com)
- **Last updated** — 06 Feb 2026
- **License** — [MIT License (See the LICENSE file for details)](https://github.com/notamitgamer/bsc/blob/main/LICENSE)

## Source Code

<div style="display:flex;gap:12px;margin-bottom:12px;">
  <a href="https://github.com/notamitgamer/bsc/blob/main/semester_1/khurapati-idea/interpeter.py" target="_blank" rel="noopener noreferrer"   style="display:inline-flex;align-items:center;gap:6px;font-size:0.85rem;          text-decoration:none;color:var(--vp-c-brand);">
    <svg xmlns="http://www.w3.org/2000/svg" width="15" height="15" viewBox="0 0 24 24"         fill="currentColor" style="vertical-align:middle;">
      <path d="M12 0C5.37 0 0 5.373 0 12c0 5.303 3.438 9.8 8.205 11.387.6.113.82-.258             .82-.577v-2.234c-3.338.726-4.033-1.416-4.033-1.416-.546-1.387-1.333-1.757             -1.333-1.757-1.089-.745.083-.729.083-.729 1.205.084 1.84 1.236 1.84 1.236             1.07 1.835 2.809 1.305 3.495.998.108-.776.417-1.305.76-1.605-2.665-.3             -5.466-1.332-5.466-5.93 0-1.31.465-2.38 1.235-3.22-.135-.303-.54-1.523             .105-3.176 0 0 1.005-.322 3.3 1.23.96-.267 1.98-.399 3-.405 1.02.006             2.04.138 3 .405 2.28-1.552 3.285-1.23 3.285-1.23.645 1.653.24 2.873             .12 3.176.765.84 1.23 1.91 1.23 3.22 0 4.61-2.805 5.625-5.475 5.92             .42.36.81 1.096.81 2.22v3.293c0 .319.21.694.825.576C20.565 21.795             24 17.298 24 12c0-6.627-5.373-12-12-12z"/>
    </svg>
    View on GitHub
  </a>
  <a href="https://raw.usercontent.amit.is-a.dev/semester_1/khurapati-idea/interpeter.py" target="_blank" rel="noopener noreferrer"   style="display:inline-flex;align-items:center;gap:6px;font-size:0.85rem;          text-decoration:none;color:var(--vp-c-text-2);">
    <svg xmlns="http://www.w3.org/2000/svg" width="14" height="14" viewBox="0 0 24 24"         fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round"         stroke-linejoin="round" style="vertical-align:middle;">
      <path d="M21 15v4a2 2 0 0 1-2 2H5a2 2 0 0 1-2-2v-4"/>
      <polyline points="7 10 12 15 17 10"/>
      <line x1="12" y1="15" x2="12" y2="3"/>
    </svg>
    Download Raw
  </a>
</div>

::: info Printing the code
To print this file, open it on GitHub and click **Raw** before printing, or use the **Download Raw** button above and print directly from that page.
:::
```python [interpeter.py]
# Author  : Amit Dutta <amitdutta4255@gmail.com>
# Date    : 06 Feb 2026
# Repo    : https://github.com/notamitgamer/bsc
# License : MIT License (See the LICENSE file for details)
# Copyright (c) 2026 Amit Dutta

import sys
import os
import subprocess
import re

# Set the absolute path to your GCC compiler based on your system logs
COMPILER_PATH = r"G:\bsc\MinGW64\bin\gcc.exe"

def run_universal_compiler():
    if len(sys.argv) < 2:
        print("Usage: python emojic.py <file.c>")
        sys.exit(1)

    source_path = sys.argv[1]
    if not os.path.exists(source_path):
        print(f"File not found: {source_path}")
        sys.exit(1)

    with open(source_path, 'r', encoding='utf-8') as f:
        content = f.read()

    mapping = {}
    # Extract emoji mappings from #define statements
    define_pattern = re.compile(r'#define\s+(\S+)\s+(.+)')
    
    lines = content.splitlines()
    code_lines = []
    
    for line in lines:
        match = define_pattern.match(line.strip())
        if match:
            emoji_key = match.group(1)
            c_value = match.group(2).strip()
            mapping[emoji_key] = c_value
        else:
            code_lines.append(line)

    translated_code = "\n".join(code_lines)
    
    # Sort keys by length descending to replace multi-emoji tokens correctly
    sorted_keys = sorted(mapping.keys(), key=len, reverse=True)
    
    for key in sorted_keys:
        translated_code = translated_code.replace(key, mapping[key])

    # Ensure standard header is present if logic needs it
    header = "#include <stdio.h>\n"
    if "#include" not in translated_code:
        translated_code = header + translated_code

    temp_file = "output_target.c"
    with open(temp_file, "w", encoding="utf-8") as f:
        f.write(translated_code)

    exe_name = source_path.rsplit('.', 1)[0] + ".exe"
    compile_cmd = [COMPILER_PATH, temp_file, "-o", exe_name]
    
    try:
        # Use shell=True for better command resolution on Windows
        result = subprocess.run(compile_cmd, capture_output=True, text=True, shell=(os.name == 'nt'))

        if result.returncode == 0:
            print(f"Compilation Successful: {exe_name}")
            run_cmd = [f".\\{exe_name}"] if os.name == 'nt' else [f"./{exe_name}"]
            subprocess.run(run_cmd, shell=(os.name == 'nt'))
        else:
            print("Compilation Error:")
            print(result.stderr)
            
    except FileNotFoundError:
        print(f"Error: Compiler '{COMPILER_PATH}' not found.")
        print("Please ensure GCC is installed and added to your PATH,")
        print("or edit COMPILER_PATH in this script to point to your gcc.exe.")

    if os.path.exists(temp_file):
        os.remove(temp_file)

if __name__ == "__main__":
    run_universal_compiler()
```
