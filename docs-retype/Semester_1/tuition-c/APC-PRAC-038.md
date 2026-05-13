---
label: APC-PRAC-038.c
description: "C program source code for APC-PRAC-038.c"
---

# `APC-PRAC-038.c`

## Problem Statement
!!!
Print all combinations of two two-digit numbers such that the sum of digits of both numbers is equal. Example: 23 and 41 → (2+3) = 5, (4+1) = 5.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/tuition-c/APC-PRAC-038.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/tuition-c/APC-PRAC-038.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>

int main()
{
    printf("Combinations of two two-digit numbers such that the sum of digits of both numbers is equal:  ");
    int i, j, sum1, sum2, count = 0;
    for (i = 10; i <= 99; i++)
    {
        sum1 = (i % 10) + (i / 10);
        for (j = i + 1; j <= 99; j++)
        {
            sum2 = (j % 10) + (j / 10);
            if (sum1 == sum2)
            {
                printf("(%d, %d)  ", i, j);
                count++;
            }
        }
    }
    printf("\nCount: %d\n", count);
    return 0;
}
```
