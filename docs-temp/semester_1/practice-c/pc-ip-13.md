---
title: pc-ip-13.c
description: "C program source code for pc-ip-13.c"
---

# `pc-ip-13.c`


!!! abstract "Problem Statement"
    Question 13: Write a program to display the Fibonacci series using recursive function and iterative function.

## Metadata
| Property | Detail |
|---|---|
| **Author**  | Amit Dutta <amitdutta4255@gmail.com> |
| **Date**    | 05 Jan 2026 |
| **License** | MIT License (See the LICENSE file for details) |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/practice-c/pc-ip-13.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/practice-c/pc-ip-13.c){.md-button}

> 💡 You can print or save this file by opening **Raw** and using your browser.

## Source Code
```c
#include <stdio.h>

long long int fib_rec(int);
void fib_rec_print(int);
void fib_ite_print(int);

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fib_rec_print(n);
    fib_ite_print(n);
    return 0;
}

void fib_rec_print(int n)
{
    int i;
    printf("\nFibonacci Series (Recursion):");
    for (i = 0; i <= n; i++)
    {
        printf("  %lld", fib_rec(i));
    }
}

void fib_ite_print(int n)
{
    int i, t1 = 0, t2 = 1, t3;
    printf("\nFibonacci Series (iteration):");
    if (n > 0)
    {
        printf("  0");
    }
    if (n > 1)
    {
        printf("  1");
    }
    for (i = 2; i <= n; i++)
    {
        t3 = t1 + t2;
        printf("  %d", t3);
        t1 = t2;
        t2 = t3;
    }
}

long long int fib_rec(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fib_rec(n - 1) + fib_rec(n - 2);
    }
}
```
