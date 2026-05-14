---
title: apc-s-007.c
description: "C program source code for apc-s-007.c"
---

# `apc-s-007.c`


!!! abstract "Problem Statement"
    Write a program the sum of first 10 natural numbers.

## Metadata
| Property | Detail |
|---|---|
| **Author**  | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/apc-s-007.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/apc-s-007.c){.md-button}

> 💡 You can print or save this file by opening **Raw** and using your browser.

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
