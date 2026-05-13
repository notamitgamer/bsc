---
label: APC-PRAC-009.c
description: "C program source code for APC-PRAC-009.c"
---

# `APC-PRAC-009.c`

## Problem Statement
!!!
WAP to swap two integer variable without using Third variable.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/tuition-c/APC-PRAC-009.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/tuition-c/APC-PRAC-009.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>
int main()
{
    int a = 4, b = 6;
    printf("Before swap : A = %d and B = %d", a, b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("\nAfter swap  : A = %d and B = %d", a, b);
    return 0;
}
```
