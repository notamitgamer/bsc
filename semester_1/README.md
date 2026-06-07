> [!NOTE]
> ## SEMESTER 1: ARCHIVED CONTENT
>
> This folder contains all my completed academic work, including practicals, assignments, and study materials from my first semester in the BSc Computer Science program at [**Acharya Prafulla Chandra College (APC)**](https://apccollege.ac.in/).
>
> **Current Status:**
> * **Completed & Archived:** This semester has officially concluded. The files here serve as a reference archive and will no longer be actively updated.
> * **Technologies Covered:** Primarily focused on **C Programming** and **R Programming**.
>
> **Explore More:**
> * Follow See active work in [**Semester 2**](https://github.com/notamitgamer/bsc/tree/main/semester_2)
> * See my other projects on my [**Portfolio**](https://amit.is-a.dev/)
> * Follow my development journey on [**GitHub**](https://github.com/notamitgamer)

---

## Directory Structure

To keep the repository organized, the C and R programs are divided into specific categories based on their origin and purpose. 

### C Programming
* **`/assignment-primary/`**: Core college assignments and standard problems.
* **`/assignment-secondary/`**: Additional or extended college assignments.
* **`/internal-practice/`**: Code written for internal exam preparation.
* **`/practice-c/`**: General, day-to-day C programming practice files.
* **`/tuition-c/`**: Programs and problem-solving exercises completed during tuition classes (files prefixed with `APC-PRAC`, `APC-S`, etc.).
* **`/EduInCS Exam/`**: Specific code solutions for exam papers organized by date.
* **`/letusc/`**: Chapter-wise exercise solutions from the textbook *"Let Us C"*.
* **`/khurapati-idea/`**: Experimental code, logical tests, and out-of-the-box ideas.

### R Programming
* **`/R/`**: Contains all R-related coursework, split into:
  * `/Code/`: R script files (`.r`) for practicals.
  * `/Material_PDF/`: Study materials and reference documents for R.

---

## How to Find a Specific Code

1. **Identify the Category:** Determine if the code was an assignment, a textbook problem, or a tuition exercise, and navigate to the corresponding folder above.
2. **Naming Convention:** Most files are sequentially numbered for easy tracking (e.g., `assignment-p-01.c`, `luc018.c`, `APC-PRAC-005.c`).
3. **Internal Comments:** Open the file. Most source codes include a commented section at the top detailing the exact problem statement or logic being solved.

---

## How to Run the Programs

### Running C Programs (`.c`)
Ensure you have a C compiler (like GCC via MinGW) installed. If you haven't set it up, refer to the [Main Repository README](../README.md) for the installation guide.

1. Open your terminal or command prompt.
2. Navigate to the folder containing the specific program:
   
   ```bash
   cd Semester_1/assignment-primary
   ```
4. Compile the code using GCC:
   
   ```bash
   gcc assignment-p-01.c -o program.exe
   ```
6. Execute the compiled file:
   
   ```bash
   ./program.exe
   ```

### Running R Programs (`.r`)
It is highly recommended to run R programs using RStudio for the best visual experience with data and plots.

#### To run via command line:

1. Open your terminal.
2. Navigate to the R Code directory:
   
   ```bash
   cd Semester_1/R/Code
   ```
4. Execute the script using `Rscript`:
   
   ```bash
   Rscript R_Prac-1.r
   ```