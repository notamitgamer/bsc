---
label: lucproblem009.c
description: "C program source code for lucproblem009.c"
---

# `lucproblem009.c`

## Problem Statement
!!!
Write a program to add first seven terms of the following series using a for loop. 1 / 1! + 2 / 2! + 3 / 3! + ...
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/letusc/lucproblem009.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/letusc/lucproblem009.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>
#define N 7 // update N here

int main()
{
    double sum = 0; int fact = 1;
    for (int i = 1; i <= N; i++)
    {
        fact *= i;
        sum += (double)i / fact;
    }
    printf("Sum of the series : %g", sum);
    return 0;
}
```
