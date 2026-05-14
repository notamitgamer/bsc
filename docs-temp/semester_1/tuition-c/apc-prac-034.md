---
title: apc-prac-034.c
description: "C program source code for apc-prac-034.c"
---

# `apc-prac-034.c`


!!! abstract "Problem Statement"
    Take a Range as input from user and print the prime number between it.

## Metadata
| Property | Detail |
|---|---|
| **Author**  | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/apc-prac-034.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/apc-prac-034.c){.md-button}

> 💡 You can print or save this file by opening **Raw** and using your browser.

## Source Code
```c
#include <stdio.h>
#include <math.h>

int isPrime(int);

int isPrime(int n)
{
    if (n <= 1)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;
    int temp = (int)sqrt(n), i;
    for (i = 3; i <= temp; i += 2)
        if (n % i == 0)
            return 0;
    return 1;
}

int main()
{
    int lb, ub, i;
    printf("Enter the lower bound and the upper bound: ");
    scanf("%d %d", &lb, &ub);
    printf("\nPrime numbers between %d and %d:  ", lb, ub);
    for (i = lb; i <= ub; i++)
        if (isPrime(i))
            printf("%d  ", i);
    return 0;
}
```
