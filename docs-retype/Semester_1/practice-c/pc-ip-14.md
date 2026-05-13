---
label: pc-ip-14.c
description: "C program source code for pc-ip-14.c"
---

# `pc-ip-14.c`

## Problem Statement
!!!
Question 14: Write a program to calculate the factorial of a number using recursive and iterative function.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 05 Jan 2026 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/practice-c/pc-ip-14.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/practice-c/pc-ip-14.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>

long long int fact_rec(int);
long long int fact_ite(int);

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("\nFactorial of %d (Recursion): %lld", n, fact_rec(n));
    printf("\nFactorial of %d (Iteration): %lld", n, fact_ite(n));
    return 0;
}

long long int fact_ite(int n)
{
    int i, pd = 1;
    for (i = 1; i <= n; i++)
    {
        pd *= i;
    }
    return pd;
}

long long int fact_rec(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact_rec(n - 1);
    }
}
```
