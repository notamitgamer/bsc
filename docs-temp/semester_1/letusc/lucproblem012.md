---
title: lucproblem012.c
description: "C program source code for lucproblem012.c"
---

# `lucproblem012.c`


!!! abstract "Problem Statement"
    Write a Function power(a, b), to calculate the value of a raised to b

## Metadata
| Property | Detail |
|---|---|
| **Author**  | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/letusc/lucproblem012.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/letusc/lucproblem012.c){.md-button}

> 💡 You can print or save this file by opening **Raw** and using your browser.

## Source Code
```c
#include <stdio.h>

double power(double, int);

double power(double a, int b)
{
    if (b == 0)
        return 1;
    double res = 1;
    int i;
    if (b > 0)
        for (i = 1; i <= b; i++)
            res *= a;
    return res;
}

int main()
{
    double a, result;
    int b;
    printf("Enter the value and the power (Format A^B) : ");
    scanf("%lf^%d", &a, &b);
    result = power(a, b);
    printf("Result of %g^%d = %g", a, b, result);
    return 0;
}
```
