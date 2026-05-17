# Difficulty Scoring System

This project uses a custom-built system to estimate the difficulty of each C program.

!!! info "Purpose"
    The goal is to help students quickly understand how complex a program is before reading it.

---

## How the Score Works

Each program is assigned a **difficulty index from 1 to 10**.

| Score | Level |
|------|------|
| 1 – 3 | Beginner |
| 4 – 5 | Intermediate |
| 6 – 8 | Advanced |
| 9 – 10 | Expert |

---

## Scoring Breakdown

The score is calculated based on:

### 1. Keyword Groups (0–7 points)

Each of the following groups adds **1 point** if detected:

- Dynamic Memory (`malloc`, `free`)
- Structures (`struct`, `union`)
- File Handling (`fopen`, `fread`)
- Advanced Features (`pthread`, `fork`, `signal`)
- Pointer Complexity
- Bitwise Operations
- Recursion (detected separately)

---

### 2. Code Size Bonus (0–3 points)

| Lines of Code | Bonus |
|--------------|------|
| 100+         | +1   |
| 200+         | +2   |
| 350+         | +3   |

---

### 3. Additional Complexity

Extra points may be added for:

- Deep nesting (`{}` blocks)
- Recursive function calls

---

## Final Score
Total Score = Keyword Score + Line Bonus
(Maximum = 10)

---

## Important Notes

!!! warning "Limitations"
    - This is an automated system.
    - It does not fully understand logic complexity.
    - Some programs may be misclassified.

---

## R Language Note

!!! note
    Difficulty scoring is currently **not applied to R programs**.

---

## Example

A program using:
- Pointers
- File I/O
- Recursion
- 150 lines

May result in:
Score: 6 → Advanced

---

## Future Improvements

- Better algorithm detection
- Time complexity estimation
- Smarter recursion analysis