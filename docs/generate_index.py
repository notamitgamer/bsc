import os
import html

# --- Configuration ---
# The root URL of your repository.
REPO_URL = "https://github.com/notamitgamer/bsc"
# List of directories to exclude from the list.
EXCLUDED_DIRS = ['.git', '.github', '.vscode', 'MinGW64', 'print', 'docs']
# List of files to exclude from the list.
EXCLUDED_FILES = ['index.html', 'README.md', 'CODE_OF_CONDUCT.md', 'CONTRIBUTING.md', 'SOCIAL_PREVIEW.md',
                  'LICENSE', 'main.js', 'package.json', 'SECURITY.md', 'server.js', 'template.html', 'generate_index.py',
                  'Assignment.pdf', 'Assignment.docx']
# --- End Configuration ---

def get_language_class(filename):
    """Gets the highlight.js language class from the file extension."""
    if filename.endswith('.c'):
        return 'c'
    if filename.endswith('.py'):
        return 'python'
    if filename.endswith('.html'):
        return 'xml'
    if filename.endswith('.js'):
        return 'javascript'
    if filename.endswith('.css'):
        return 'css'
    return 'plaintext'

def generate_file_list():
    """Walks the repo and generates an HTML list of its files and directories with folder contents."""
    items = []
    
    # SVG Icons
    folder_icon = '<svg class="w-6 h-6 text-blue-500 mr-4 flex-shrink-0" fill="none" stroke="currentColor" viewBox="0 0 24 24" xmlns="http://www.w3.org/2000/svg"><path stroke-linecap="round" stroke-linejoin="round" stroke-width="2" d="M3 7v10a2 2 0 002 2h14a2 2 0 002-2V9a2 2 0 00-2-2h-6l-2-2H5a2 2 0 00-2 2z"></path></svg>'
    file_icon = '<svg class="w-6 h-6 text-green-500 mr-4 flex-shrink-0" fill="none" stroke="currentColor" viewBox="0 0 24 24" xmlns="http://www.w3.org/2000/svg"><path stroke-linecap="round" stroke-linejoin="round" stroke-width="2" d="M7 21h10a2 2 0 002-2V9.414a1 1 0 00-.293-.707l-5.414-5.414A1 1 0 0012.586 3H7a2 2 0 00-2 2v14a2 2 0 002 2z"></path></svg>'
    chevron_down = '<svg class="w-5 h-5 text-gray-500 transition-transform duration-200" fill="none" stroke="currentColor" viewBox="0 0 24 24" xmlns="http://www.w3.org/2000/svg"><path stroke-linecap="round" stroke-linejoin="round" stroke-width="2" d="M19 9l-7 7-7-7"></path></svg>'
    github_icon = '<svg class="w-6 h-6" fill="currentColor" viewBox="0 0 24 24" aria-hidden="true"><path fill-rule="evenodd" d="M12 2C6.477 2 2 6.477 2 12c0 4.418 2.865 8.168 6.839 9.492.5.092.682-.217.682-.482 0-.237-.009-.868-.014-1.703-2.782.605-3.369-1.343-3.369-1.343-.454-1.158-1.11-1.466-1.11-1.466-.908-.62.069-.608.069-.608 1.003.07 1.531 1.032 1.531 1.032.892 1.53 2.341 1.088 2.91.832.092-.647.35-1.088.636-1.338-2.22-.253-4.555-1.113-4.555-4.951 0-1.093.39-1.988 1.031-2.688-.103-.253-.446-1.272.098-2.65 0 0 .84-.27 2.75 1.026A9.564 9.564 0 0112 6.844c.85.004 1.705.115 2.504.337 1.909-1.296 2.747-1.027 2.747-1.027.546 1.379.203 2.398.1 2.651.64.7 1.03 1.595 1.03 2.688 0 3.848-2.338 4.695-4.566 4.942.359.308.678.92.678 1.855 0 1.338-.012 2.419-.012 2.747 0 .268.18.58.688.482A10.001 10.001 0 0022 12c0-5.523-4.477-10-10-10z" clip-rule="evenodd"></path></svg>'

    # Walk through the repository's root directory
    for root, dirs, files in os.walk('.', topdown=True):
        dirs[:] = [d for d in dirs if d not in EXCLUDED_DIRS]
        
        if root == '.':
            dirs.sort()
            files.sort()

            for dirname in dirs:
                encoded_dirname = dirname.replace(' ', '%20')
                folder_url = f"{REPO_URL}/tree/main/{encoded_dirname}"
                dir_path = os.path.join('.', dirname)
                try:
                    dir_files = sorted([item for item in os.listdir(dir_path) if os.path.isfile(os.path.join(dir_path, item)) and not item.startswith('.') and not item.endswith(('.exe', '.png', '.jpg', '.jpeg', '.gif', '.md'))])
                    
                    file_count = len(dir_files)
                    folder_header = f'''
                        <li class="border rounded-lg overflow-hidden">
                            <div class="folder-header bg-gray-100 p-4 cursor-pointer hover:bg-blue-100 transition-colors duration-200" onclick="toggleFolder('{dirname}')">
                                <div class="flex items-center justify-between">
                                    <div class="flex items-center">
                                        {folder_icon}
                                        <span class="font-medium text-gray-800">{dirname}</span>
                                        <span class="ml-2 text-sm text-gray-500">({file_count} files)</span>
                                    </div>
                                    <div class="flex items-center space-x-4">
                                        <a href="{folder_url}" target="_blank" class="p-1 rounded-full text-gray-500 hover:bg-gray-200 hover:text-gray-800 transition-colors" onclick="event.stopPropagation()" title="View folder on GitHub">
                                            {github_icon}
                                        </a>
                                        <div class="chevron" id="chevron-{dirname}">{chevron_down}</div>
                                    </div>
                                </div>
                            </div>
                            <div class="folder-content hidden bg-white" id="folder-{dirname}">
                                <ul class="divide-y divide-gray-200">'''
                    
                    items.append(folder_header)
                    
                    for filename in dir_files:
                        encoded_filename = filename.replace(' ', '%20')
                        file_path = os.path.join(dirname, filename)
                        file_url = f"{REPO_URL}/blob/main/{encoded_dirname}/{encoded_filename}"
                        
                        file_content = ""
                        try:
                            with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
                                file_content = f.read()
                        except Exception as e:
                            file_content = f"Error reading file: {e}"

                        escaped_content = html.escape(file_content)
                        code_block_id = f"code-{dirname}-{filename}".replace('.', '_').replace(' ', '_')
                        lang_class = get_language_class(filename)

                        file_item = f'''
                                    <li>
                                        <div class="flex items-center p-3 pl-8 hover:bg-gray-50 transition-colors duration-200">
                                            {file_icon}
                                            <span class="text-gray-700">{filename}</span>
                                            <div class="ml-auto flex items-center space-x-4">
                                                <a href="{file_url}" target="_blank" class="p-1 rounded-full text-gray-500 hover:bg-gray-200 hover:text-gray-800 transition-colors" title="View file on GitHub">
                                                    {github_icon}
                                                </a>
                                                <button onclick="showCode('{code_block_id}', '{filename}')" class="text-green-600 font-semibold text-sm hover:underline">View Code</button>
                                            </div>
                                        </div>
                                        <div id="{code_block_id}" class="hidden" data-github-url="{file_url}">
                                            <pre><code class="language-{lang_class}">{escaped_content}</code></pre>
                                        </div>
                                    </li>'''
                        items.append(file_item)
                    
                    items.append('                </ul>\n            </div>\n        </li>')
                    
                except (OSError, PermissionError):
                    simple_folder = f'''
                        <li>
                            <a href="{folder_url}" target="_blank" class="flex items-center p-4 bg-gray-100 hover:bg-blue-100 rounded-lg transition-colors duration-200">
                                {folder_icon}
                                <span class="font-medium text-gray-800">{dirname}</span>
                                <span class="ml-auto text-blue-500 font-semibold text-sm">View on GitHub &rarr;</span>
                            </a>
                        </li>'''
                    items.append(simple_folder)

            top_level_files = [f for f in files if f not in EXCLUDED_FILES]
            for filename in top_level_files:
                encoded_filename = filename.replace(' ', '%20')
                url = f"{REPO_URL}/blob/main/{encoded_filename}"
                
                file_content = ""
                try:
                    with open(filename, 'r', encoding='utf-8', errors='ignore') as f:
                        file_content = f.read()
                except Exception as e:
                    file_content = f"Error reading file: {e}"
                
                escaped_content = html.escape(file_content)
                code_block_id = f"code-root-{filename}".replace('.', '_').replace(' ', '_')
                lang_class = get_language_class(filename)
                
                items.append(f'''
                    <li class="border rounded-lg overflow-hidden">
                        <div class="flex items-center p-4 bg-gray-100 hover:bg-green-100 rounded-lg transition-colors duration-200">
                            {file_icon}
                            <span class="font-medium text-gray-800">{filename}</span>
                            <div class="ml-auto flex items-center space-x-4">
                                <a href="{url}" target="_blank" class="p-1 rounded-full text-gray-500 hover:bg-gray-200 hover:text-gray-800 transition-colors" title="View file on GitHub">
                                    {github_icon}
                                </a>
                                <button onclick="showCode('{code_block_id}', '{filename}')" class="text-green-600 font-semibold text-sm hover:underline">View Code</button>
                            </div>
                        </div>
                        <div id="{code_block_id}" class="hidden bg-white p-4 border-t" data-github-url="{url}">
                            <pre><code class="language-{lang_class}">{escaped_content}</code></pre>
                        </div>
                    </li>''')
            
            break

    return "\n".join(items)


def main():
    """Generates the final index.html from a template."""
    script_dir = os.path.dirname(os.path.abspath(__file__))
    # Assuming the script is run from a sub-directory like 'docs'
    repo_root = os.path.abspath(os.path.join(script_dir, '..'))
    
    original_cwd = os.getcwd()
    # It's better to construct paths from the repo_root than to change directory
    
    try:
        # Construct paths relative to the repo root
        os.chdir(repo_root)
        template_path = os.path.join(script_dir, 'template.html')
        output_path = os.path.join(script_dir, 'index.html')

        try:
            with open(template_path, 'r', encoding='utf-8') as f:
                template = f.read()
        except FileNotFoundError:
            print(f"Error: The template file was not found at {template_path}")
            return

        file_list_html = generate_file_list()
        
        final_html = template.replace('<!--FILE_LIST_PLACEHOLDER-->', file_list_html)

        # Original write operation
        with open(output_path, 'w', encoding='utf-8') as f:
            f.write(final_html)
        
        print(f"index.html generated successfully in '{output_path}'.")

        # NEW: Define the second, absolute output path
        # Using a raw string (r"...") is important to handle backslashes in Windows paths
        second_output_path = r"C:\Users\PC\Desktop\aranag.site\bsc.html"
        
        # NEW: Add a try...except block for the second write operation for safety
        try:
            # NEW: Write the same final_html content to the second location
            with open(second_output_path, 'w', encoding='utf-8') as f:
                f.write(final_html)
            
            # NEW: Print a confirmation message for the second file
            print(f"Also updated bsc.html successfully at '{second_output_path}'.")
        except (IOError, OSError) as e:
            # NEW: Print a warning if the second write fails (e.g., path doesn't exist)
            print(f"Warning: Could not write to second location '{second_output_path}'. Error: {e}")
            
    finally:
        os.chdir(original_cwd)

if __name__ == "__main__":
    main()
