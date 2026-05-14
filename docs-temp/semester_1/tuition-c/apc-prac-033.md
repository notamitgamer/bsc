---
title: apc-prac-033.c
description: "C program source code for apc-prac-033.c"
---

# `apc-prac-033.c`


!!! abstract "Problem Statement"
    Print the factorial of the digits off a number

## Metadata
| Property | Detail |
|---|---|
| **Author**  | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/apc-prac-033.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/apc-prac-033.c){.md-button}

> 💡 You can print or save this file by opening **Raw** and using your browser.

## Source Code
```c
#include <stdio.h>

int factorial(int);

int factorial(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main()
{
    int n, temp;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Only non-negetive number is allowed.");
        return 1;
    }
    temp = n;
    while (temp > 0)
    {
        printf("\nFactorial of %d: %d", temp % 10, factorial(temp % 10));
        temp /= 10;
    }
    return 0;
}
```
