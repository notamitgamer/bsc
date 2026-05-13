# `APC-PRAC-015.c`

## Problem Statement
!!!
Write a program to display all numbers between lb (lower bound) and up (upper bound) which ends with digit 7 or divisible by 7.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/tuition-c/APC-PRAC-015.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/tuition-c/APC-PRAC-015.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>

int main()
{
    int lb, ub, i;
    printf("Enter the lb, ub : ");
    scanf("%d %d", &lb, &ub);
    printf("\nEnds with 7 :");
    for (i = lb; i <= ub; i++)
    {
        if (i % 10 == 7)
        {
            printf("  %d", i);
        }
    }
    printf("\nDivisible by 7 :");
    for (i = lb; i <= ub; i++)
    {
        if (i % 7 == 0)
        {
            printf("  %d", i);
        }
    }
    return 0;
}
```
