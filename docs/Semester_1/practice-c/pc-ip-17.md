---
label: pc-ip-17.c
description: "C program source code for pc-ip-17.c"
---

# `pc-ip-17.c`

## Problem Statement
!!!
Question 17: Write a C program that includes a user-defined function named isPerfect with the signature int isPerfect(int num);.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 05 Jan 2026 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/practice-c/pc-ip-17.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/practice-c/pc-ip-17.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>

int isPerfect(int);

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    if (isPerfect(num))
    {
        printf("\nInput '%d' is a perfect number.", num);
    }
    else
    {
        printf("\nInput '%d' is not a perfect number.", num);
    }
    return 0;
}

int isPerfect(int n)
{
    int i, sum = 0;
    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum == n;
}
```
