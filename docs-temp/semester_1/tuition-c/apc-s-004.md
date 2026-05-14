---
title: apc-s-004.c
description: "C program source code for apc-s-004.c"
---

# `apc-s-004.c`


!!! abstract "Problem Statement"
    Program to print first 10 natural numbers using while loop.

## Metadata
| Property | Detail |
|---|---|
| **Author**  | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/apc-s-004.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/apc-s-004.c){.md-button}

> 💡 You can print or save this file by opening **Raw** and using your browser.

## Source Code
```c
#include <stdio.h>
#include <conio.h>

void main()
{
    clrscr();
    int x;
    x = 1;
    while (x <= 10)
    {
        printf("%d  ", x);
        x++;
    }
    getch();
}
```
