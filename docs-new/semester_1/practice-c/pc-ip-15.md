---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> pc-ip-15.c'
description: 'Question 15: Write a program to calculate the GCD of two numbers using recursive and iterative function.'
---

# pc-ip-15.c

| Property | Details |
| :--- | :--- |
| **Author** | [Amit Dutta](mailto:amitdutta4255@gmail.com) |
| **Date** | 05 Jan 2026 |
| **License** | [MIT License (See the LICENSE file for details)](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
Question 15: Write a program to calculate the GCD of two numbers using recursive and iterative function.
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/practice-c/pc-ip-15.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/practice-c/pc-ip-15.c)

```c [pc-ip-15.c]
#include <stdio.h>

int gcd_rec(int, int);
int gcd_ite(int, int);

int main()
{
    int a, b;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);
    printf("\nGCD(%d, %d) (Recursion) = %d", a, b, gcd_rec(a, b));
    printf("\nGCD(%d, %d) (Iteration) = %d", a, b, gcd_ite(a, b));
    return 0;
}

int gcd_ite(int a, int b)
{
    int temp;
    while (a != 0)
    {
        temp = a;
        a = b % a;
        b = temp;
    }
    return b;
}

int gcd_rec(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    else
    {
        return gcd_rec(b % a, a);
    }
}
```
