---
title: assignment-p-01.c
description: "C program source code for assignment-p-01.c"
icon: lucide/file-code
---

# `assignment-p-01.c`


!!! abstract "Problem Statement"
    Write a C program that includes a user-defined function named isPrime with the signature int isPrime(int num); The function should take an integer as a parameter and return 1 if the number is prime and 0 otherwise.

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta <amitdutta4255@gmail.com> |
| **Date** | 12 Dec 2025 |
| **License** | MIT License (See the LICENSE file for details) |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/assignment-primary/assignment-p-01.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-primary/assignment-p-01.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>
#include <math.h>

int isPrime(int);

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (isPrime(n))
    {
        printf("\nInput %d is a Prime Number.", n);
    }
    else
    {
        printf("\nInput %d is not a Prime Number.", n);
    }

    return 0;
}

int isPrime(int n)
{
    if (n <= 1)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;

    int temp = (int)sqrt(n);
    int i;
    for (i = 3; i <= temp; i += 2)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
```
</div>
