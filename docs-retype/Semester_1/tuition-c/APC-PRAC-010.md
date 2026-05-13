---
label: APC-PRAC-010.c
description: "C program source code for APC-PRAC-010.c"
---

# `APC-PRAC-010.c`

## Problem Statement
!!!
WAP to calculate and display the valve of the given expression : (1/a^3) + (1/(b+2)^3) + (1/(c^4 + root(2))) take a, b, c as input.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/tuition-c/APC-PRAC-010.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/tuition-c/APC-PRAC-010.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

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
