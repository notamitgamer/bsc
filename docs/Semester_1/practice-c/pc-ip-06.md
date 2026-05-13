---
label: pc-ip-06.c
description: "C program source code for pc-ip-06.c"
---

# `pc-ip-06.c`

## Problem Statement
!!!
Question 6: Write a program using a function to compute and display all factors of a given number.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 05 Jan 2026 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/practice-c/pc-ip-06.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/practice-c/pc-ip-06.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
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
