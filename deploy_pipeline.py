import os
import subprocess
import shutil
from datetime import datetime

# --- CONFIGURATION PATHS ---
BSC_REPO_ROOT = r"G:\bsc"
GENERATE_INDEX_SCRIPT = r"G:\bsc\docs\generate_index.py"
ARANAG_SITE_DESKTOP = r"C:\Users\PC\Desktop\aranag.site"
BSC_LOCAL_BACKUP = r"G:\bsc_local"
ARANAG_REPO_ROOT = r"G:\aranag"

# Folders/Files to PRESERVE in G:\aranag when deleting
ARANAG_PRESERVE = [
    "ada-web",
    "compiler",
    "README.md",
    "sitemap.xml",
    ".firebase",
    ".git" # Always preserve .git in a repo!
]

def run_generate_index():
    print("\n--- Step 1: Generating Index HTML ---")
    if os.path.exists(GENERATE_INDEX_SCRIPT):
        try:
            # Running the script as a separate process
            subprocess.run(["python", GENERATE_INDEX_SCRIPT], check=True)
            print("[Success] Index generation script executed.")
        except subprocess.CalledProcessError:
            print("[Error] Failed to run generate_index.py")
    else:
        print(f"[Error] Script not found at: {GENERATE_INDEX_SCRIPT}")

def git_workflow_bsc():
    print("\n--- Step 2: Git Push (Primary Repo: bsc) ---")
    
    if not os.path.exists(BSC_REPO_ROOT):
        print(f"[Error] Repository root not found: {BSC_REPO_ROOT}")
        return

    os.chdir(BSC_REPO_ROOT)
    
    print("> git add .")
    try:
        subprocess.run(["git", "add", "."], check=True)
    except subprocess.CalledProcessError:
        print("[Error] 'git add' failed.")
        return

    # Detect changes
    try:
        result = subprocess.run(
            ["git", "diff", "--name-only", "--cached"],
            capture_output=True, text=True, check=True
        )
        changed_files = result.stdout.strip().splitlines()
    except subprocess.CalledProcessError:
        changed_files = []

    if not changed_files:
        print("[Info] No changes detected in 'bsc'. Skipping commit/push.")
        return

    # Calculate path for commit message
    changed_dirs = [os.path.dirname(f.replace('/', os.sep)) for f in changed_files]
    
    if not changed_dirs:
        common_path = ""
    else:
        try:
            common_path = os.path.commonpath(changed_dirs)
        except ValueError:
            common_path = ""

    path_str = f".\\{common_path}" if common_path else ".\\{root}"
    
    print(f"[Detected Changes in]: {path_str}")
    user_message = input(f"Enter commit message for '{path_str}': ")
    if not user_message:
        print("Commit message cannot be empty. Aborting git push.")
        return

    today = datetime.now().strftime("%Y-%m-%d")
    full_commit_msg = f"[{today}] : {path_str} : {user_message}"
    
    print(f"> git commit -m \"{full_commit_msg}\"")
    try:
        subprocess.run(["git", "commit", "-m", full_commit_msg], check=True)
        print("> git push")
        subprocess.run(["git", "push"], check=True)
        print("[Success] Pushed 'bsc' to remote.")
    except subprocess.CalledProcessError as e:
        print(f"[Error] Git command failed: {e}")

def deploy_firebase():
    print("\n--- Step 3: Firebase Deploy ---")
    if not os.path.exists(ARANAG_SITE_DESKTOP):
        print(f"[Error] Firebase project path not found: {ARANAG_SITE_DESKTOP}")
        return

    os.chdir(ARANAG_SITE_DESKTOP)
    print(f"Deploying from: {ARANAG_SITE_DESKTOP}")
    try:
        # shell=True is often needed for firebase commands on Windows to find the executable
        subprocess.run("firebase deploy --only hosting", shell=True, check=True)
        print("[Success] Firebase deployment complete.")
    except subprocess.CalledProcessError:
        print("[Error] Firebase deploy failed.")

def sync_bsc_local():
    print("\n--- Step 4: Syncing to G:\\bsc_local ---")
    try:
        # Delete existing content
        if os.path.exists(BSC_LOCAL_BACKUP):
            print(f"Cleaning {BSC_LOCAL_BACKUP}...")
            # rmtree can sometimes fail on Windows due to read-only files, loop to retry if needed
            shutil.rmtree(BSC_LOCAL_BACKUP, ignore_errors=True)
        
        # Copy fresh content
        print(f"Copying from {BSC_REPO_ROOT} to {BSC_LOCAL_BACKUP}...")
        shutil.copytree(BSC_REPO_ROOT, BSC_LOCAL_BACKUP, dirs_exist_ok=True)
        print("[Success] bsc_local synced.")
    except Exception as e:
        print(f"[Error] Sync failed: {e}")

def update_and_push_aranag():
    print("\n--- Step 5: Updating G:\\aranag & Pushing ---")
    
    if not os.path.exists(ARANAG_REPO_ROOT):
        print(f"[Error] Path not found: {ARANAG_REPO_ROOT}")
        return

    # 1. Delete contents except preserved
    print("Cleaning G:\\aranag (preserving specific files)...")
    for item in os.listdir(ARANAG_REPO_ROOT):
        if item in ARANAG_PRESERVE:
            continue
        
        item_path = os.path.join(ARANAG_REPO_ROOT, item)
        try:
            if os.path.isdir(item_path):
                shutil.rmtree(item_path)
            else:
                os.remove(item_path)
        except Exception as e:
            print(f"Warning: Could not delete {item}: {e}")

    # 2. Copy from Desktop site to G:\aranag
    print(f"Copying from {ARANAG_SITE_DESKTOP} to {ARANAG_REPO_ROOT}...")
    try:
        # dirs_exist_ok=True allows copying into existing folder structure
        shutil.copytree(ARANAG_SITE_DESKTOP, ARANAG_REPO_ROOT, dirs_exist_ok=True)
    except Exception as e:
        print(f"[Error] Copy failed: {e}")
        return

    # 3. Git Push G:\aranag
    os.chdir(ARANAG_REPO_ROOT)
    print("Git pushing G:\\aranag...")
    
    try:
        subprocess.run(["git", "add", "."], check=True)
        
        # Check if there are changes
        status = subprocess.run(["git", "status", "--porcelain"], capture_output=True, text=True)
        if status.stdout.strip():
            commit_msg = f"Automated Update: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}"
            subprocess.run(["git", "commit", "-m", commit_msg], check=True)
            subprocess.run(["git", "push"], check=True)
            print("[Success] G:\\aranag updated and pushed.")
        else:
            print("[Info] No changes to push in G:\\aranag.")
            
    except subprocess.CalledProcessError as e:
        print(f"[Error] Git operations on aranag failed: {e}")

def main():
    print("=== STARTING AUTOMATION PIPELINE ===")
    
    run_generate_index()
    git_workflow_bsc()
    deploy_firebase()
    sync_bsc_local()
    update_and_push_aranag()
    
    print("\n=== PIPELINE FINISHED ===")

if __name__ == "__main__":
    main()