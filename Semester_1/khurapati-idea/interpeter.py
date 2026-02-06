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