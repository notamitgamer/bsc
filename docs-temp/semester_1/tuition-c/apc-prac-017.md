---
title: apc-prac-017.c
description: "C program source code for apc-prac-017.c"
---

# `apc-prac-017.c`


!!! abstract "Problem Statement"
    Write a program to check perfect number.

## Metadata
| Property | Detail |
|---|---|
| **Author**  | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/apc-prac-017.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/apc-prac-017.c){.md-button}

> 💡 You can print or save this file by opening **Raw** and using your browser.

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
