---
title: pc-ip-06.c
description: "C program source code for pc-ip-06.c"
icon: lucide/file-code
---

# `pc-ip-06.c`


!!! abstract "Problem Statement"
    Question 6: Write a program using a function to compute and display all factors of a given number.

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 05 Jan 2026 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/practice-c/pc-ip-06.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/practice-c/pc-ip-06.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>

void printFactors(int);

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printFactors(n);
    return 0;
}

void printFactors(int n)
{
    int i;
    printf("\nFactors of %d:", n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("  %d", i);
        }
    }
}
```
</div>
