---
title: pc-ip-03.c
description: "C program source code for pc-ip-03.c"
icon: lucide/file-code
---

# `pc-ip-03.c`


!!! abstract "Problem Statement"
    Question 3: Write a program to compute the sum of the first n terms of the series using a function: S=1-2+3-4+5-6+...

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 05 Jan 2026 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/practice-c/pc-ip-03.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/practice-c/pc-ip-03.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>

int series(int);

int main()
{
    int n;
    printf("Enter the n: ");
    scanf("%d", &n);
    printf("\nSum of the series: %d", series(n));
    return 0;
}

int series(int n)
{
    int i, result = 0;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            result -= i;
        }
        else
        {
            result += i;
        }
    }
    return result;
}
```
</div>
