import os
import subprocess
from datetime import datetime

REPO_ROOT_DIRECTORY = r"G:\bsc"

def main():
    print("--- Git Automation ---")
    
    if not os.path.exists(REPO_ROOT_DIRECTORY):
        print(f"[Error] Repository root not found: {REPO_ROOT_DIRECTORY}")
        return
    
    os.chdir(REPO_ROOT_DIRECTORY)
    
    print(f"\n> git add .")
    try:
        subprocess.run(["git", "add", "."], check=True)
    except subprocess.CalledProcessError:
        print("[Error] 'git add' failed.")
        return

    try:
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

    changed_dirs = []
    for f in changed_files:
        normalized_path = f.replace('/', os.sep)
        dirname = os.path.dirname(normalized_path)
        changed_dirs.append(dirname)
    
    if not changed_dirs:
        common_path = ""
    else:
        try:
            common_path = os.path.commonpath(changed_dirs)
        except ValueError:
            common_path = ""

    if not common_path:
        path_str = ".\\{root}"
    else:
        path_str = f".\\{common_path}"

    print(f"\n[Detected Changes in]: {path_str}")

    user_message = input(f"Enter commit message for '{path_str}': ")
    if not user_message:
        print("Commit message cannot be empty. Aborting.")
        return

    today = datetime.now().strftime("%Y-%m-%d")
    full_commit_msg = f"[{today}] : {path_str} : {user_message}"
    
    print(f"\n> git commit -m \"{full_commit_msg}\"")
    try:
        subprocess.run(["git", "commit", "-m", full_commit_msg], check=True)
    except subprocess.CalledProcessError:
        print("[Error] 'git commit' failed.")
        return

    print("\n> git push")
    try:
        subprocess.run(["git", "push"], check=True)
        print("\n[Success] Pushed to remote.")
    except subprocess.CalledProcessError:
        print("[Error] 'git push' failed.")

if __name__ == "__main__":
    main()