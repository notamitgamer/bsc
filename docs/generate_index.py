import os
import html

# --- Configuration ---
# The root URL of your repository.
REPO_URL = "https://github.com/notamitgamer/bsc"

# List of directories to exclude from the list.
EXCLUDED_DIRS = ['.git', '.github', '.vscode', 'MinGW64', 'print', 'docs', '__pycache__', 'practice-c']

# List of files to exclude from the list.
EXCLUDED_FILES = [
    'index.html', 'README.md', 'CODE_OF_CONDUCT.md', 'CONTRIBUTING.md', 'SOCIAL_PREVIEW.md',
    'LICENSE', 'main.js', 'package.json', 'SECURITY.md', 'server.js', 'template.html', 
    'generate_index.py', 'header.py', 'add_header.py',
    'Assignment.pdf', 'Assignment.docx', 'deploy_pipeline.py', 'tester.c'
]
# --- End Configuration ---

def process_directory(current_path, relative_base=""):
    """
    Recursively walks the directory and returns HTML string for the file tree.
    """
    html_output = ""
    
    try:
        items = os.listdir(current_path)
    except OSError as e:
        print(f"Error accessing {current_path}: {e}")
        return ""

    # Separate folders and files
    dirs = []
    files = []

    for item in items:
        full_path = os.path.join(current_path, item)
        
        if os.path.isdir(full_path):
            if item not in EXCLUDED_DIRS:
                dirs.append(item)
        else:
            if item not in EXCLUDED_FILES:
                files.append(item)

    # Sort items
    dirs.sort()
    files.sort()

    # --- Generate HTML for Folders ---
    for d in dirs:
        sub_path = os.path.join(current_path, d)
        rel_path = os.path.join(relative_base, d).replace("\\", "/")
        
        content_html = process_directory(sub_path, rel_path)
        
        if not content_html.strip():
            continue

        html_output += f"""
        <div class="folder-container mb-2">
            <div class="flex items-center gap-2 px-3 py-2 cursor-pointer hover:bg-slate-100 rounded-lg transition-colors group select-none" onclick="toggleFolder(this)">
                <svg class="chevron w-4 h-4 text-slate-400 transition-transform duration-200" fill="none" viewBox="0 0 24 24" stroke="currentColor">
                    <path stroke-linecap="round" stroke-linejoin="round" stroke-width="2" d="M19 9l-7 7-7-7" />
                </svg>
                <svg class="folder-icon w-5 h-5 text-blue-500" fill="none" viewBox="0 0 24 24" stroke="currentColor">
                    <path stroke-linecap="round" stroke-linejoin="round" stroke-width="2" d="M3 7v10a2 2 0 002 2h14a2 2 0 002-2V9a2 2 0 00-2-2h-6l-2-2H5a2 2 0 00-2 2z" />
                </svg>
                <span class="font-medium text-slate-700 group-hover:text-blue-600 transition-colors">{html.escape(d)}</span>
            </div>
            <div class="hidden pl-4 mt-1 border-l-2 border-slate-100 ml-3.5">
                {content_html}
            </div>
        </div>
        """

    # --- Generate HTML for Files ---
    for f in files:
        full_file_path = os.path.join(current_path, f)
        url_path = f"{relative_base}/{f}" if relative_base else f
        github_url = f"{REPO_URL}/blob/main/{url_path}"
        
        # 1. READ CONTENT
        try:
            with open(full_file_path, 'r', encoding='utf-8', errors='ignore') as code_file:
                raw_code = code_file.read()
        except Exception as e:
            raw_code = f"Error reading file content: {e}"

        # 2. ESCAPE CONTENT (Safe for HTML)
        escaped_code = html.escape(raw_code)
        
        # 3. GENERATE UNIQUE ID
        # Create a safe ID string from the path (e.g., "code-assignment-primary-file-c")
        safe_id = "code-" + url_path.replace("/", "-").replace(".", "-").replace(" ", "-")

        # 4. GENERATE HTML
        # We create a hidden DIV to store the code.
        html_output += f"""
        <div class="file-item flex items-center justify-between px-3 py-2 hover:bg-white hover:shadow-sm rounded-lg transition-all group border border-transparent hover:border-slate-100 mb-1">
            <div class="flex items-center gap-2.5 min-w-0 cursor-pointer flex-1" onclick="showCode('{safe_id}', '{html.escape(f)}', '{github_url}')">
                <svg class="w-4 h-4 text-slate-400" fill="none" viewBox="0 0 24 24" stroke="currentColor">
                    <path stroke-linecap="round" stroke-linejoin="round" stroke-width="2" d="M9 12h6m-6 4h6m2 5H7a2 2 0 01-2-2V5a2 2 0 012-2h5.586a1 1 0 01.707.293l5.414 5.414a1 1 0 01.293.707V19a2 2 0 01-2 2z" />
                </svg>
                <span class="text-sm text-slate-600 font-medium group-hover:text-blue-600 truncate">{html.escape(f)}</span>
            </div>
            <div class="flex items-center gap-2 opacity-0 group-hover:opacity-100 transition-opacity">
                <a href="{github_url}" target="_blank" class="p-1.5 text-slate-400 hover:text-slate-700 hover:bg-slate-100 rounded-md" title="View on GitHub">
                    <svg class="w-4 h-4" fill="currentColor" viewBox="0 0 24 24"><path fill-rule="evenodd" d="M12 2C6.477 2 2 6.484 2 12.017c0 4.425 2.865 8.18 6.839 9.504.5.092.682-.217.682-.483 0-.237-.008-.868-.013-1.703-2.782.605-3.369-1.343-3.369-1.343-.454-1.158-1.11-1.466-1.11-1.466-.908-.62.069-.608.069-.608 1.003.07 1.531 1.032 1.531 1.032.892 1.53 2.341 1.088 2.91.832.092-.647.35-1.088.636-1.338-2.22-.253-4.555-1.113-4.555-4.951 0-1.093.39-2.126 1.029-2.935-.103-.253-.446-1.372.097-2.897 0 0 .84-.27 2.75 1.026A9.564 9.564 0 0112 6.844c.85.004 1.705.115 2.504.337 1.909-1.296 2.747-1.027 2.747-1.027.546 1.525.202 2.644.1 2.897.64.809 1.026 1.841 1.026 2.935 0 3.847-2.337 4.687-4.565 4.935.359.309.678.92.678 1.855 0 1.338-.012 2.419-.012 2.747 0 .268.18.58.688.482A10.019 10.019 0 0022 12.017C22 6.484 17.522 2 12 2z" clip-rule="evenodd"></path></svg>
                </a>
            </div>
            <!-- Embedded Code Storage -->
            <div id="{safe_id}" style="display:none;">{escaped_code}</div>
        </div>
        """
        
    return html_output

def main():
    root_dir = os.getcwd()
    docs_dir = os.path.join(root_dir, 'docs')
    template_path = os.path.join(docs_dir, 'template.html')
    output_path = os.path.join(docs_dir, 'index.html')

    print("Generating index.html with embedded code...")

    try:
        with open(template_path, 'r', encoding='utf-8') as f:
            template = f.read()
    except FileNotFoundError:
        print(f"Error: The template file was not found at {template_path}")
        return

    # Generate the recursive file list HTML
    file_list_html = process_directory(root_dir)
    
    # Inject into template
    final_html = template.replace('<!--FILE_LIST_PLACEHOLDER-->', file_list_html)

    # 1. Write to local index.html
    try:
        os.makedirs(docs_dir, exist_ok=True)
        with open(output_path, 'w', encoding='utf-8') as f:
            f.write(final_html)
        print(f"index.html generated successfully in '{output_path}'.")
    except Exception as e:
        print(f"Error writing index.html: {e}")

    # 2. Write to secondary path (Desktop)
    second_output_path = r"C:\Users\PC\Desktop\aranag.site\bsc.html"
    try:
        os.makedirs(os.path.dirname(second_output_path), exist_ok=True)
        with open(second_output_path, 'w', encoding='utf-8') as f:
            f.write(final_html)
        print(f"Also updated bsc.html successfully at '{second_output_path}'.")
    except (IOError, OSError) as e:
        print(f"Warning: Could not write to second location '{second_output_path}'. Error: {e}")

if __name__ == "__main__":
    main()