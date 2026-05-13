---
label: APC-PRAC-017.c
description: "C program source code for APC-PRAC-017.c"
---

# `APC-PRAC-017.c`

## Problem Statement
!!!
Write a program to check perfect number.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/tuition-c/APC-PRAC-017.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/tuition-c/APC-PRAC-017.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>

int main()
{
    int num, i, divisibleSum = 0;
    printf("Enter a number : ");
    scanf("%d", &num);
    for (i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            divisibleSum += i;
        }
    }
    if (divisibleSum == num)
        printf("\nInput %d ia a Perfect Number.", num);
    else
        printf("\nInput %d is NOT a Perfect Number.", num);
    return 0;
}
```
