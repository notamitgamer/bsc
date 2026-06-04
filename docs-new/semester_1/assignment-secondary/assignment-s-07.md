---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> assignment-s-07.c'
description: 'Write a program to swap two numbers using a macro (#define).'
---

# assignment-s-07.c

| Property | Details |
| :--- | :--- |
| **Author** | Amit Dutta (amitdutta4255@gmail.com) |
| **Date** | 12 Dec 2025 |
| **License** | [MIT](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
Write a program to swap two numbers using a macro (#define).
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-secondary/assignment-s-07.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/assignment-secondary/assignment-s-07.c)

```c [assignment-s-07.c]
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
