---
label: assignment-s-07.c
description: "C program source code for assignment-s-07.c"
---

# `assignment-s-07.c`

## Problem Statement
!!!
Write a program to swap two numbers using a macro (#define).
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/assignment-secondary/assignment-s-07.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/assignment-secondary/assignment-s-07.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>

// Define the SWAP macro.
// The do-while(0) block is a common trick to ensure the macro behaves
// like a single statement, regardless of where it is used (e.g., inside an 'if' statement).
#define SWAP(a, b, data_type)   \
    do {                        \
        data_type temp = a;     \
        a = b;                  \
        b = temp;               \
    } while(0)

int main() {
    int num1 = 15;
    int num2 = 42;

    printf("--- Before Swap ---\n");
    printf("Number 1 (num1): %d\n", num1);
    printf("Number 2 (num2): %d\n", num2);

    // Call the macro, passing the variables and their type
    // The preprocessor replaces this line with the block of code defined above.
    SWAP(num1, num2, int);

    printf("\n--- After Swap (using macro) ---\n");
    printf("Number 1 (num1): %d\n", num1);
    printf("Number 2 (num2): %d\n", num2);

    return 0;
}
```
