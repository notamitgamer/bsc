---
title: apc-prac-010.c
description: "C program source code for apc-prac-010.c"
---

# `apc-prac-010.c`


!!! abstract "Problem Statement"
    WAP to calculate and display the valve of the given expression : (1/a^3) + (1/(b+2)^3) + (1/(c^4 + root(2))) take a, b, c as input.

## Metadata
| Property | Detail |
|---|---|
| **Author**  | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/apc-prac-010.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/apc-prac-010.c){.md-button}

> 💡 You can print or save this file by opening **Raw** and using your browser.

## Source Code
```c
#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, result;
    printf("Enter the value for a, b and c : ");
    scanf("%lf %lf %lf", &a, &b, &c);
    result = (1 / pow(a, 3)) + (1 / pow((b + 2), 3)) + (1 / (pow(c, 4) + sqrt(2)));
    printf("\nResult = %g", result);
    return 0;
}
```
