---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> pc-ip-13.c'
description: 'Question 13: Write a program to display the Fibonacci series using recursive function and iterative function.'
---

# pc-ip-13.c

| Property | Details |
| :--- | :--- |
| **Author** | [Amit Dutta](mailto:amitdutta4255@gmail.com) |
| **Date** | 05 Jan 2026 |
| **License** | [MIT License (See the LICENSE file for details)](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
Question 13: Write a program to display the Fibonacci series using recursive function and iterative function.
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/practice-c/pc-ip-13.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/practice-c/pc-ip-13.c)

```c [pc-ip-13.c]
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
