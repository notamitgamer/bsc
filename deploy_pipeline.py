# Author  : Amit Dutta <amitdutta4255@gmail.com>
# Date    : 06 Feb 2026
# Repo    : https://github.com/notamitgamer/bsc
# License : MIT License (See the LICENSE file for details)
# Copyright (c) 2026 Amit Dutta

import os
import subprocess
import shutil
import stat
import socket
import sys
from datetime import datetime

BSC_REPO_ROOT = r"G:\bsc"
GENERATE_INDEX_SCRIPT = r"G:\bsc\docs\generate_index.py"
ARANAG_SITE_DESKTOP = r"C:\Users\PC\Desktop\amit.is-a.dev"
BSC_LOCAL_BACKUP = r"G:\bsc_local"
ARANAG_REPO_ROOT = r"G:\aranag"

MIN_DISK_SPACE_MB = 500

ARANAG_PRESERVE = [
    "ada-web",
    "compiler",
    "README.md",
    "sitemap.xml",
    ".firebase",
    ".git",
    "esal",
    "amit.is-a.dev"
]

def remove_readonly(func, path, exc_info):
    try:
        os.chmod(path, stat.S_IWRITE)
        func(path)
    except Exception as e:
        print(f"Failed to force delete {path}: {e}")

def check_internet(host="8.8.8.8", port=53, timeout=3):
    try:
        socket.setdefaulttimeout(timeout)
        socket.socket(socket.AF_INET, socket.SOCK_STREAM).connect((host, port))
        return True
    except socket.error:
        return False

def get_free_space_mb(folder):
    total, used, free = shutil.disk_usage(folder)
    return free // (2**20)

def is_tool_installed(name):
    return shutil.which(name) is not None

def pre_check():
    print("\n--- Step 0: System Pre-Checks ---")
    
    print("Checking internet connection...", end=" ")
    if check_internet():
        print("[OK]")
    else:
        print("[FAILED]")
        print("Error: No internet connection detected. Cannot push to Git or Firebase.")
        return False

    print("Checking required tools...", end=" ")
    missing_tools = []
    if not is_tool_installed("git"):
        missing_tools.append("git")
    
    if not is_tool_installed("firebase"):
        if not is_tool_installed("firebase.cmd"):
             missing_tools.append("firebase")

    if missing_tools:
        print("[FAILED]")
        print(f"Error: The following tools are missing from PATH: {', '.join(missing_tools)}")
        return False
    print("[OK]")

    backup_drive = os.path.splitdrive(BSC_LOCAL_BACKUP)[0]
    if not backup_drive: 
        backup_drive = "." 
    else:
        backup_drive += "\\"
        
    print(f"Checking disk space on {backup_drive}...", end=" ")
    try:
        free_space = get_free_space_mb(backup_drive)
        if free_space < MIN_DISK_SPACE_MB:
            print("[FAILED]")
            print(f"Error: Not enough disk space. Free: {free_space}MB, Required: {MIN_DISK_SPACE_MB}MB")
            return False
        print(f"[OK] ({free_space} MB free)")
    except Exception as e:
        print(f"[WARNING] Could not check disk space: {e}")

    return True

def run_generate_index():
    print("\n--- Step 1: Generating Index HTML ---")
    
    index_path = os.path.join(BSC_REPO_ROOT, "docs", "index.html")
    old_content = ""
    
    if os.path.exists(index_path):
        try:
            with open(index_path, 'r', encoding='utf-8') as f:
                old_content = f.read()
        except Exception:
            pass

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

    new_content = ""
    if os.path.exists(index_path):
        try:
            with open(index_path, 'r', encoding='utf-8') as f:
                new_content = f.read()
        except Exception:
            pass

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

    # 1. Filter out docs/index.html (it's auto-generated)
    relevant_files = [f for f in changed_files if "docs/index.html" not in f.replace('\\', '/')]

    # 2. Separate "docs" files from "source code" files
    # We check if a file starts with "docs/"
    non_docs_files = [f for f in relevant_files if not f.replace('\\', '/').startswith('docs/')]

    # 3. Decision Logic:
    # If we have non-docs changes (like Semester_1/code.c), we prioritize those paths.
    # We ignore 'docs/' changes in the path calculation so it doesn't default to Root.
    if non_docs_files:
        files_to_check = non_docs_files
    else:
        # If ONLY docs changed (or only index.html changed), use whatever we have
        files_to_check = relevant_files if relevant_files else changed_files

    changed_dirs = [os.path.dirname(f.replace('/', os.sep)) for f in files_to_check]
    
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
        if os.path.exists(BSC_LOCAL_BACKUP):
            print(f"Cleaning {BSC_LOCAL_BACKUP}...")
            shutil.rmtree(BSC_LOCAL_BACKUP, onerror=remove_readonly)
        
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

    print(f"Copying from {ARANAG_SITE_DESKTOP} to {ARANAG_REPO_ROOT}...")
    try:
        shutil.copytree(ARANAG_SITE_DESKTOP, ARANAG_REPO_ROOT, dirs_exist_ok=True)
    except Exception as e:
        print(f"[Error] Copy failed: {e}")
        return

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
    
    if not pre_check():
        print("\n[Aborted] Pre-checks failed. Please resolve the errors above.")
        return

    index_changed = run_generate_index()

    git_workflow_bsc()

    if index_changed:
        deploy_firebase()
    else:
        print("\n[Skip] Index unchanged. Skipping Firebase deploy.")

    sync_bsc_local()

    if index_changed:
        update_and_push_aranag()
    else:
        print("\n[Skip] Index unchanged. Skipping G:\\aranag update.")
    
    print("\n=== PIPELINE FINISHED ===")

if __name__ == "__main__":
    main()