---
label: APC-S-007.c
description: "C program source code for APC-S-007.c"
---

# `APC-S-007.c`

## Problem Statement
!!!
Write a program the sum of first 10 natural numbers.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/tuition-c/APC-S-007.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/tuition-c/APC-S-007.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>
#include <conio.h>

void main()
{
    clrscr();
    int i, sum = 0;
    for (i = 1; i <= 10; i++)
    {
        sum += i;
    }
    printf("\nSum of the first natural number : %d", sum);
    getch();
}
```
