import os

# --- Configuration ---
# The root URL of your repository.
REPO_URL = "https://github.com/notamitgamer/bsc"
# List of directories to exclude from the list.
EXCLUDED_DIRS = ['.git', '.github', '.vscode', 'MinGW64', 'print', 'docs']
# List of files to exclude from the list.
EXCLUDED_FILES = ['index.html', 'README.md', 'CODE_OF_CONDUCT.md', 'CONTRIBUTING.md', 
                  'LICENSE', 'main.js', 'package.json', 'SECURITY.md', 'server.js', 'template.html']
# --- End Configuration ---

def generate_file_list():
    """Walks the repo and generates an HTML list of its files and directories with folder contents."""
    items = []
    
    # SVG Icons for folders and files
    folder_icon = '<svg class="w-6 h-6 text-blue-500 mr-4 flex-shrink-0" fill="none" stroke="currentColor" viewBox="0 0 24 24" xmlns="http://www.w3.org/2000/svg"><path stroke-linecap="round" stroke-linejoin="round" stroke-width="2" d="M3 7v10a2 2 0 002 2h14a2 2 0 002-2V9a2 2 0 00-2-2h-6l-2-2H5a2 2 0 00-2 2z"></path></svg>'
    file_icon = '<svg class="w-6 h-6 text-green-500 mr-4 flex-shrink-0" fill="none" stroke="currentColor" viewBox="0 0 24 24" xmlns="http://www.w3.org/2000/svg"><path stroke-linecap="round" stroke-linejoin="round" stroke-width="2" d="M7 21h10a2 2 0 002-2V9.414a1 1 0 00-.293-.707l-5.414-5.414A1 1 0 0012.586 3H7a2 2 0 00-2 2v14a2 2 0 002 2z"></path></svg>'
    chevron_down = '<svg class="w-5 h-5 text-gray-500 transition-transform duration-200" fill="none" stroke="currentColor" viewBox="0 0 24 24" xmlns="http://www.w3.org/2000/svg"><path stroke-linecap="round" stroke-linejoin="round" stroke-width="2" d="M19 9l-7 7-7-7"></path></svg>'

    # Walk through the repository's root directory
    for root, dirs, files in os.walk('.', topdown=True):
        # Exclude specified directories from being traversed
        dirs[:] = [d for d in dirs if d not in EXCLUDED_DIRS]
        
        if root == '.':
            # Sort directories alphabetically
            dirs.sort()
            files.sort()

            # Create expandable sections for directories with their contents
            for dirname in dirs:
                encoded_dirname = dirname.replace(' ', '%20')
                folder_url = f"{REPO_URL}/tree/main/{encoded_dirname}"
                
                # Get files in this directory
                dir_path = os.path.join('.', dirname)
                try:
                    dir_files = []
                    if os.path.exists(dir_path):
                        for item in os.listdir(dir_path):
                            item_path = os.path.join(dir_path, item)
                            if os.path.isfile(item_path) and not item.startswith('.'):
                                # Filter out .exe files and other binary files
                                if not item.endswith(('.exe', '.png', '.jpg', '.jpeg', '.gif')):
                                    dir_files.append(item)
                        dir_files.sort()
                    
                    # Create folder section with files
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
                                <div class="flex items-center space-x-2">
                                    <a href="{folder_url}" target="_blank" class="text-blue-500 font-semibold text-sm hover:underline" onclick="event.stopPropagation()">GitHub</a>
                                    <div class="chevron" id="chevron-{dirname}">{chevron_down}</div>
                                </div>
                            </div>
                        </div>
                        <div class="folder-content hidden bg-white" id="folder-{dirname}">
                            <ul class="divide-y divide-gray-200">'''
                    
                    items.append(folder_header)
                    
                    # Add files in the directory
                    for filename in dir_files:
                        encoded_filename = filename.replace(' ', '%20')
                        file_url = f"{REPO_URL}/blob/main/{encoded_dirname}/{encoded_filename}"
                        file_item = f'''
                                <li>
                                    <a href="{file_url}" target="_blank" class="flex items-center p-3 pl-8 hover:bg-gray-50 transition-colors duration-200">
                                        {file_icon}
                                        <span class="text-gray-700">{filename}</span>
                                        <span class="ml-auto text-green-500 text-sm">View Code &rarr;</span>
                                    </a>
                                </li>'''
                        items.append(file_item)
                    
                    # Close folder section
                    items.append('            </ul>\n        </div>\n    </li>')
                    
                except (OSError, PermissionError):
                    # If we can't access the directory, just show it as a simple folder
                    simple_folder = f'''
                    <li>
                        <a href="{folder_url}" target="_blank" class="flex items-center p-4 bg-gray-100 hover:bg-blue-100 rounded-lg transition-colors duration-200">
                            {folder_icon}
                            <span class="font-medium text-gray-800">{dirname}</span>
                            <span class="ml-auto text-blue-500 font-semibold text-sm">View on GitHub &rarr;</span>
                        </a>
                    </li>'''
                    items.append(simple_folder)

            # Add top-level files (if any)
            top_level_files = [f for f in files if f not in EXCLUDED_FILES]
            for filename in top_level_files:
                encoded_filename = filename.replace(' ', '%20')
                url = f"{REPO_URL}/blob/main/{encoded_filename}"
                items.append(f'<li><a href="{url}" target="_blank" class="flex items-center p-4 bg-gray-100 hover:bg-green-100 rounded-lg transition-colors duration-200">{file_icon}<span class="font-medium text-gray-800">{filename}</span><span class="ml-auto text-green-500 font-semibold text-sm">View on GitHub &rarr;</span></a></li>')
            
            break  # Only process the top level

    return "\n".join(items)


def main():
    """Generates the final index.html from a template."""
    # Get the directory of this script
    script_dir = os.path.dirname(os.path.abspath(__file__))
    repo_root = os.path.dirname(script_dir)  # Go up one level from docs/
    
    # Change to repo root directory for file walking
    original_cwd = os.getcwd()
    os.chdir(repo_root)
    
    try:
        # Define paths relative to the script location
        template_path = os.path.join(script_dir, 'template.html')
        output_path = os.path.join(script_dir, 'index.html')

        try:
            with open(template_path, 'r') as f:
                template = f.read()
        except FileNotFoundError:
            print(f"Error: The template file was not found at {template_path}")
            return

        file_list_html = generate_file_list()
        
        # Replace the placeholder with our generated list
        final_html = template.replace('<!--FILE_LIST_PLACEHOLDER-->', file_list_html)

        with open(output_path, 'w') as f:
            f.write(final_html)
        
        print(f"{output_path} generated successfully.")
        
    finally:
        # Always change back to original directory
        os.chdir(original_cwd)

if __name__ == "__main__":
    main()

