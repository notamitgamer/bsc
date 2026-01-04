import os
import subprocess
import shutil
import stat
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
    ".git" # CRITICAL: Always preserve .git!
]

def remove_readonly(func, path, exc_info):
    """
    Error handler for shutil.rmtree.
    Unlocks read-only files (like .git objects) so they can be deleted.
    """
    try:
        os.chmod(path, stat.S_IWRITE)
        func(path)
    except Exception as e:
        print(f"Failed to force delete {path}: {e}")

def run_generate_index():
    print("\n--- Step 1: Generating Index HTML ---")
    
    index_path = os.path.join(BSC_REPO_ROOT, "docs", "index.html")
    old_content = ""
    
    # 1. Read existing content if file exists
    if os.path.exists(index_path):
        try:
            with open(index_path, 'r', encoding='utf-8') as f:
                old_content = f.read()
        except Exception:
            pass # Treat as empty if read fails

    # 2. Run the generation script
    if os.path.exists(GENERATE_INDEX_SCRIPT):
        try:
            subprocess.run(["python", GENERATE_INDEX_SCRIPT], check=True)
            print("[Success] Index generation script executed.")
        except subprocess.CalledProcessError:
            print("[Error] Failed to run generate_index.py")
            return False
    else:
        print(f"[Error] Script not found at: {GENERATE_INDEX_SCRIPT}")
        return False

    # 3. Read new content
    new_content = ""
    if os.path.exists(index_path):
        try:
            with open(index_path, 'r', encoding='utf-8') as f:
                new_content = f.read()
        except Exception:
            pass

    # 4. Compare
    if old_content != new_content:
        print("[Info] Changes detected in index.html.")
        return True
    else:
        print("[Info] No changes detected in index.html.")
        return False

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
        subprocess.run("firebase deploy --only hosting", shell=True, check=True)
        print("[Success] Firebase deployment complete.")
    except subprocess.CalledProcessError:
        print("[Error] Firebase deploy failed.")

def sync_bsc_local():
    print("\n--- Step 4: Syncing to G:\\bsc_local ---")
    try:
        # Force Delete using the remove_readonly handler
        if os.path.exists(BSC_LOCAL_BACKUP):
            print(f"Cleaning {BSC_LOCAL_BACKUP}...")
            shutil.rmtree(BSC_LOCAL_BACKUP, onerror=remove_readonly)
        
        # Copy fresh content
        print(f"Copying from {BSC_REPO_ROOT} to {BSC_LOCAL_BACKUP}...")
        shutil.copytree(BSC_REPO_ROOT, BSC_LOCAL_BACKUP)
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
                shutil.rmtree(item_path, onerror=remove_readonly)
            else:
                os.remove(item_path)
        except Exception as e:
            print(f"Warning: Could not delete {item}: {e}")

    # 2. Copy from Desktop site to G:\aranag
    print(f"Copying from {ARANAG_SITE_DESKTOP} to {ARANAG_REPO_ROOT}...")
    try:
        shutil.copytree(ARANAG_SITE_DESKTOP, ARANAG_REPO_ROOT, dirs_exist_ok=True)
    except Exception as e:
        print(f"[Error] Copy failed: {e}")
        return

    # 3. Git Push G:\aranag
    os.chdir(ARANAG_REPO_ROOT)
    print("Git pushing G:\\aranag...")
    
    try:
        subprocess.run(["git", "add", "."], check=True)
        
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
    
    # 1. Generate Index & Check for changes
    index_changed = run_generate_index()

    # 2. Always run the main repo Git workflow
    git_workflow_bsc()

    if index_changed:
        # 3. Deploy to Firebase only if index changed
        deploy_firebase()
    else:
        print("\n[Skip] Index unchanged. Skipping Firebase deploy.")

    # 4. Always sync the local backup
    sync_bsc_local()

    if index_changed:
        # 5. Update Aranag repo only if index changed
        update_and_push_aranag()
    else:
        print("\n[Skip] Index unchanged. Skipping G:\\aranag update.")
    
    print("\n=== PIPELINE FINISHED ===")

if __name__ == "__main__":
    main()