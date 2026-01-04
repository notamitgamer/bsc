import os
import subprocess
from datetime import datetime

# --- CONFIGURATION ---
# The root of your git repository (where the .git folder is)
REPO_ROOT_DIRECTORY = r"G:\bsc"

def main():
    print("--- Git Automation ---")
    
    # 1. Change directory to the root of the repo
    if not os.path.exists(REPO_ROOT_DIRECTORY):
        print(f"[Error] Repository root not found: {REPO_ROOT_DIRECTORY}")
        return
    
    # Switch to repo root so git commands work correctly
    os.chdir(REPO_ROOT_DIRECTORY)
    
    # 2. Git Add
    print(f"\n> git add .")
    try:
        subprocess.run(["git", "add", "."], check=True)
    except subprocess.CalledProcessError:
        print("[Error] 'git add' failed.")
        return

    # 3. Detect Changed Files & Determine Path
    try:
        # Run git diff to see what is staged (what was just added)
        # --name-only lists the filenames, --cached looks at the staging area
        result = subprocess.run(
            ["git", "diff", "--name-only", "--cached"],
            capture_output=True, 
            text=True, 
            check=True
        )
        changed_files = result.stdout.strip().splitlines()
    except subprocess.CalledProcessError:
        print("[Error] Could not determine changed files.")
        return

    if not changed_files:
        print("\n[Info] No changes detected to commit.")
        return

    # Calculate the common directory of all changed files
    # We strip filenames to get just directories, and normalize slashes for Windows
    changed_dirs = []
    for f in changed_files:
        # Git uses forward slashes; convert to OS separator (backslash on Windows)
        normalized_path = f.replace('/', os.sep)
        dirname = os.path.dirname(normalized_path)
        changed_dirs.append(dirname)
    
    # Find the most specific common folder
    if not changed_dirs:
        common_path = ""
    else:
        try:
            # os.path.commonpath finds the deepest common folder
            # e.g., if files changed in "Semester_1\A" and "Semester_1\B", result is "Semester_1"
            common_path = os.path.commonpath(changed_dirs)
        except ValueError:
            common_path = ""

    # Format path for message: .\Semester_1\subfolder
    if not common_path:
        path_str = "."
    else:
        path_str = f".\\{common_path}"

    print(f"\n[Detected Changes in]: {path_str}")

    # 4. Get User Message
    user_message = input(f"Enter commit message for '{path_str}': ")
    if not user_message:
        print("Commit message cannot be empty. Aborting.")
        return

    # 5. Construct the Commit Message
    today = datetime.now().strftime("%Y-%m-%d")
    # Final Format: [YYYY-MM-DD] : .\path : message
    full_commit_msg = f"[{today}] : {path_str} : {user_message}"
    
    # 6. Git Commit
    print(f"\n> git commit -m \"{full_commit_msg}\"")
    try:
        subprocess.run(["git", "commit", "-m", full_commit_msg], check=True)
    except subprocess.CalledProcessError:
        print("[Error] 'git commit' failed.")
        return

    # 7. Git Push
    print("\n> git push")
    try:
        subprocess.run(["git", "push"], check=True)
        print("\n[Success] Pushed to remote.")
    except subprocess.CalledProcessError:
        print("[Error] 'git push' failed.")

if __name__ == "__main__":
    main()