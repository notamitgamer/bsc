# `pc-ip-15.c`

## Problem Statement
!!!
Question 15: Write a program to calculate the GCD of two numbers using recursive and iterative function.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta <amitdutta4255@gmail.com> |
| **Date** | 05 Jan 2026 |
| **License** | MIT License (See the LICENSE file for details) |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/practice-c/pc-ip-15.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/practice-c/pc-ip-15.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
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
