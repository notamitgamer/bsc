---
label: lucproblem010.c
description: "C program source code for lucproblem010.c"
---

# `lucproblem010.c`

## Problem Statement
!!!
Write a program to generate all combination of 1, 2 and 3 using for loop.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta <amitdutta4255@gmail.com> |
| **Date** | 12 Dec 2025 |
| **License** | MIT License (See the LICENSE file for details) |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/letusc/lucproblem010.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/letusc/lucproblem010.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>

int main()
{
    printf("Combination of 1, 2 and 3 :");

    // for 1 digit numbers
    for (int i = 1; i <= 3; i++)
    {
        printf("  %d", i);
    }

    // for 2 digit numbers
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("  %d%d", i, j);
        }
    }

    // for 3 digit numbers
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            for (int k = 1; k <= 3; k++)
            {
                printf("  %d%d%d", i, j, k);
            }
        }
    }

    // for 4 digit numbers
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            for (int k = 1; k <= 3; k++)
            {
                for (int l = 1; l <= 3; l++)
                {
                    printf("  %d%d%d%d", i, j, k, l);
                }
            }
        }
    }

    return 0;
}
```
