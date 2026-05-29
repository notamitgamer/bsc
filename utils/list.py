import os
def list_all_c_files(start_path='.', output_file='list.txt'):
    try:
        count = 0
        with open(output_file, 'w', encoding='utf-8') as f:
            for root, dirs, files in os.walk(start_path):
                for file in files:
                    if file.lower().endswith('.c'):
                        full_path = os.path.abspath(os.path.join(root, file))                        
                        f.write(full_path + '\n')
                        count += 1
                    if file.lower().endswith('.r'):
                        full_path = os.path.abspath(os.path.join(root, file))                        
                        f.write(full_path + '\n')
                        count += 1
                        
        print(f"\nSuccessfully found {count} file(s).")
        print(f"Results have been saved to: {os.path.abspath(output_file)}")
                    
    except PermissionError:
        print("Error: Permission denied in some directories.")
    except Exception as e:
        print(f"An unexpected error occurred: {e}")

if __name__ == "__main__":
    current_directory = os.getcwd()
    
    print(f"Scanning for .c files in: {current_directory}\n")
    print("-" * 30)
    
    list_all_c_files(current_directory)
    
    print("-" * 30)
    print("Scan complete.")