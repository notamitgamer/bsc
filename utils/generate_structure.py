import os

def save_structure_to_txt(target_dir, output_file):
    with open(output_file, 'w', encoding='utf-8') as f:
        for root, dirs, files in os.walk(target_dir):
            level = root.replace(target_dir, '').count(os.sep)
            indent = '    ' * level
            f.write(f"{indent}{os.path.basename(root)}/\n")
            for file in files:
                f.write(f"{indent}    {file}\n")

target = r'G:\bsc'
output = 'directory_structure.txt'

if os.path.exists(target):
    save_structure_to_txt(target, output)
    print(f"Structure saved to {output}")
else:
    print(f"The path {target} does not exist.")