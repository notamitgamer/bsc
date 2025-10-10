import os

# --- Configuration ---
# The root URL of your repository.
REPO_URL = "https://github.com/notamitgamer/bsc"
# List of directories to exclude from the list.
EXCLUDED_DIRS = ['.git', '.github', 'MinGW64', 'print', 'docs']
EXCLUDED_FILES = ['index.html', 'README.md', 'CODE_OF_CONDUCT.md', 'CONTRIBUTING.md', 
                  'LICENSE', 'main.js', 'package.json', 'SECURITY.md', 'server.js']
# --- End Configuration ---

def generate_file_list():
    """Walks the repo and generates an HTML list of its files and directories."""
    items = []
    
    # SVG Icons for folders and files
    folder_icon = '<svg class="w-6 h-6 text-blue-500 mr-4 flex-shrink-0" fill="none" stroke="currentColor" viewBox="0 0 24 24" xmlns="http://www.w3.org/2000/svg"><path stroke-linecap="round" stroke-linejoin="round" stroke-width="2" d="M3 7v10a2 2 0 002 2h14a2 2 0 002-2V9a2 2 0 00-2-2h-6l-2-2H5a2 2 0 00-2 2z"></path></svg>'
    file_icon = '<svg class="w-6 h-6 text-green-500 mr-4 flex-shrink-0" fill="none" stroke="currentColor" viewBox="0 0 24 24" xmlns="http://www.w3.org/2000/svg"><path stroke-linecap="round" stroke-linejoin="round" stroke-width="2" d="M7 21h10a2 2 0 002-2V9.414a1 1 0 00-.293-.707l-5.414-5.414A1 1 0 0012.586 3H7a2 2 0 00-2 2v14a2 2 0 002 2z"></path></svg>'

    # Walk through the repository's root directory
    for root, dirs, files in os.walk('.', topdown=True):
        # Exclude specified directories from being traversed further
        dirs[:] = [d for d in dirs if d not in EXCLUDED_DIRS]
        
        # We only want the top-level files and folders for a clean index
        if root == '.':
            # Sort directories and files alphabetically
            dirs.sort()
            files.sort()

            # Create list items for directories
            for dirname in dirs:
                # URL-encode spaces and other special characters
                encoded_dirname = dirname.replace(' ', '%20')
                url = f"{REPO_URL}/tree/main/{encoded_dirname}"
                items.append(f'<li><a href="{url}" target="_blank" class="flex items-center p-4 bg-gray-100 hover:bg-blue-100 rounded-lg transition-colors duration-200">{folder_icon}<span class="font-medium text-gray-800">{dirname}</span><span class="ml-auto text-blue-500 font-semibold text-sm">View on GitHub &rarr;</span></a></li>')

            # Create list items for files
            for filename in files:
                if filename not in EXCLUDED_FILES:
                    encoded_filename = filename.replace(' ', '%20')
                    url = f"{REPO_URL}/blob/main/{encoded_filename}"
                    items.append(f'<li><a href="{url}" target="_blank" class="flex items-center p-4 bg-gray-100 hover:bg-green-100 rounded-lg transition-colors duration-200">{file_icon}<span class="font-medium text-gray-800">{filename}</span><span class="ml-auto text-green-500 font-semibold text-sm">View on GitHub &rarr;</span></a></li>')
            
            # We only process the top level, so we break the loop
            break

    return "\n".join(items)


def main():
    """Generates the final index.html from a template."""
    # The script is in 'docs', so the template is in the same directory
    template_path = os.path.join('docs', 'template.html')
    output_path = os.path.join('docs', 'index.html')

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

if __name__ == "__main__":
    main()

