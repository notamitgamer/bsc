---
title: pc-ip-14.c
description: "C program source code for pc-ip-14.c"
---

# `pc-ip-14.c`


!!! abstract "Problem Statement"
    Question 14: Write a program to calculate the factorial of a number using recursive and iterative function.

## Metadata
| Property | Detail |
|---|---|
| **Author**  | Amit Dutta (amitdutta4255@gmail.com) | Date: 05 Jan 2026 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/practice-c/pc-ip-14.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/practice-c/pc-ip-14.c){.md-button}

> 💡 You can print or save this file by opening **Raw** and using your browser.

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
