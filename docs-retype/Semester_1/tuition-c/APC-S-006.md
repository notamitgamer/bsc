---
label: APC-S-006.c
description: "C program source code for APC-S-006.c"
---

# `APC-S-006.c`

## Problem Statement
!!!
Write a program to print first 10 multiple of 5
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/tuition-c/APC-S-006.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/tuition-c/APC-S-006.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>
#include <conio.h>

void main()
{
    clrscr();
    int a = 5, i = 1, res;
    while (i <= 10)
    {
        res = a * i;
        printf("%d * %d = %d\n", a, i, res);
        i++;
    }
    getch();
}
```
