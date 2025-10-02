## License
This project is licensed under the MIT License – see the [LICENSE](LICENSE) file for details.

---

# 🎓 B.Sc. CS Hons – Programs

This repository contains **all C programs, executables, and snapshots** as per the **West Bengal State University B.Sc. Computer Science (Hons) syllabus**.
It’s designed to help students easily access, run, and understand each program.

---

## 📂 Contents

* ✅ C Source Codes (`.c`)
* ⚡ Executables (`.exe`)
* 🖼️ Snapshots (screenshots of code)

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


## How to install the MinGW-w64 

### Download the MinGW-w64 archive:
Click here to download the zip file directly from our server: [Direct Download Link](https://aranag.site/download/MinGW64.zip)

### Extract the archive:
Once the download is complete, extract the contents of the MinGW64.zip file to a location on your computer. We recommend a simple path like `C:\MinGW64`.

### Add to your system's PATH:
To use the tools from any command prompt, you need to add the bin directory to your system's PATH environment variable.

Open the Start Menu and search for `Edit the system environment variables`.

Click the `Environment Variables...` button.

In the `System variables` section, find the Path variable and click `Edit...`.

Click `New` and add the path to the bin directory of your MinGW-w64 installation (e.g., `C:\MinGW64\bin`).

Click `OK` on all windows to save the changes.

### Verify the installation:
Open a new Command Prompt or PowerShell window and type `gcc --version`. If the installation was successful, you should see the version information for the GCC compiler.

---

🔗 **Website**
For a better browsing experience, visit the web version of this repository:
👉 [https://aranag.site/github](https://aranag.site/github)

🔗 **Website**
For all tution code, visit:
👉 [https://aranag.site/github-tution](https://aranag.site/github-tution)

---

## 👨‍💻 Author

### Amit Dutta

* 📧 **amitdutta4255@gmail.com**

* 🌐 [**GitHub Profile**](https://github.com/notamitgamer)
