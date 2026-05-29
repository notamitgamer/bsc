---
title: APC-S-006.c
description: "C program source code for APC-S-006.c"
icon: lucide/file-code
---

# `APC-S-006.c`


!!! abstract "Problem Statement"
    Write a program to print first 10 multiple of 5

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-S-006.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-S-006.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
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
</div>
