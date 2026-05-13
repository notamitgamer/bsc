---
label: assignment-p-03.c
description: "C program source code for assignment-p-03.c"
---

# `assignment-p-03.c`

## Problem Statement
!!!
Write a C program that includes a user-defined function named isPerfect with the signature int isPerfect(int num);. A perfect number is a positive integer that is equal to the sum of its proper divisors, excluding itself. For example, 28 is a perfect number because the sum of its divisors (1, 2, 4, 7, 14) equals 28.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/assignment-primary/assignment-p-03.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/assignment-primary/assignment-p-03.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>

int isPerfect(int);

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (isPerfect(n))
    {
        printf("\nInput %d is a Perfect Number.", n);
    }
    else
    {
        printf("\nInput %d is not a Perfect Number.", n);
    }
    return 0;
}

int isPerfect(int n)
{
    if (n <= 1)
        return 0;
    int temp = 1;
    int i;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            temp += i;
        }
    }
    return temp == n;
}
```
