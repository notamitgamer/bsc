# <a href="https://github.com/notamitgamer/bsc">notamitgamer/bsc</a>

This repository contains practice code and solutions for **WBSU assignments**. 

## ⚖️ License
This project is licensed under the **MIT License**. See the [LICENSE](LICENSE) file or [opensource.org](https://opensource.org/license/mit) for full details.

---

### ⛔ Important Note for Students & Classmates
While this code is public, academic integrity matters! 

* **Read & Learn:** You are encouraged to study the logic and understand the implementation.
* **Don't Copy-Paste:** Using this code directly for your submissions may lead to plagiarism issues. 
* **Write Your Own:** The best way to learn is to understand the logic and then write it yourself from scratch.

> **Challenge yourself: Learn the logic, then close this tab and write your own version.**

---
🔗 **Website**
For better viewing experience:
👉 [amit.is-a.dev/bsc](https://amit.is-a.dev/bsc) (Preferred)  ***or***  [notamitgamer.github.io/bsc](https://notamitgamer.github.io/bsc)

---

# 🎓 B.Sc. CS Hons – Programs

This repository contains **Files of codes that will be done in this 4-year BSc Hons Computer Science**

---
## 📂 Contents

* ✅ C Source Codes (`.c`)

---

## 🚀 How to Run

```bash
# Compile using GCC
gcc program.c -o program.exe

# Run the executable
./program.exe
```

### 📌 Example Program (Factorial)

```c
#include <stdio.h>
int main() {
    int n, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        fact *= i;
    }
    printf("Factorial = %d", fact);
    return 0;
}
```

---

## 🛠️ MinGW-w64 Installation Guide: Your C/C++ Compiler Setup

This guide will walk you through the process of setting up your GCC/G++ compiler environment using the packaged MinGW-w64 distribution.

### Step 1: Download the Compiler Archive

Download the compressed MinGW-w64 files from the hosted location.

> ➡️ **Download Link:** [**Direct Download MinGW64.zip (85 MB)**](https://amit.is-a.dev/download/MinGW64.zip)

### Step 2: Extract the Files

Once the download is complete, extract the contents of the `MinGW64.zip` file to a simple, root-level folder.

1. **Extract the contents** of the Zip file.

2. **Move the resulting folder** to a short, easy-to-reference path.

3. **Recommended Path:** `C:\MinGW64`

### Step 3: Add the Tools to Your System PATH

Adding the `bin` directory to your PATH variable allows you to run `gcc` or `g++` from any terminal window without navigating to the installation folder every time.

1. **Open System Settings:** Open the Start Menu and search for **"Edit the system environment variables"**.

2. **Open Variables Window:** Click the **"Environment Variables..."** button.

3. **Edit Path:** Under the **"System variables"** section, select the **`Path`** variable and click **"Edit..."**.

4. **Add New Entry:**

   * Click **"New"**.

   * Paste the path to your installation's binary directory: `C:\MinGW64\bin`

5. **Save Changes:** Click **`OK`** on all open windows to finalize the system changes.

### Step 4: Verify the Installation

To ensure the compiler is correctly set up and accessible, open a new command line session and run a simple check.

1. **Open a NEW Terminal:** Close any existing Command Prompt or PowerShell windows, and open a fresh one.

2. **Run the Test Command:** Type the following command:

   ```
   gcc --version
   ```

3. **Expected Result:** If successful, you should see the version information for the GCC compiler (e.g., `gcc (MinGW.org GCC-6.3.0-1) 6.3.0`).

> 🎉 **Congratulations!** Your C/C++ development environment is now ready.

> If you do not want to work that much, just go to this [website](https://www.programiz.com/c-programming/online-compiler) and run your programs.

---


## 👨‍💻 Author

### Amit Dutta

* 📧 **amitdutta4255@gmail.com**
* 📧 **mail@amit.is-a.dev**

* 🌐 [**GitHub Profile**](https://github.com/notamitgamer)

---
