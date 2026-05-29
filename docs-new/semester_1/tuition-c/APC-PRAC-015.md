---
title: APC-PRAC-015.c
description: "C program source code for APC-PRAC-015.c"
icon: lucide/file-code
---

# `APC-PRAC-015.c`


!!! abstract "Problem Statement"
    Write a program to display all numbers between lb (lower bound) and up (upper bound) which ends with digit 7 or divisible by 7.

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-PRAC-015.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-PRAC-015.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
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
</div>
