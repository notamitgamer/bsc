---
label: lucproblem004.c
description: "C program source code for lucproblem004.c"
---

# `lucproblem004.c`

## Problem Statement
!!!
If the lengths of three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is valid or not. The triangle is valid if the sum of two sides is greater that the largest of the three sides.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/letusc/lucproblem004.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/letusc/lucproblem004.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>
int main()
{
    double side1, side2, side3;
    printf("Enter the length of side1, side2 and side3 of the triangle : ");
    scanf("%lf %lf %lf", &side1, &side2, &side3);
    if (side1 <= 0 || side2 <= 0 || side3 <= 0)
    {
        printf("\nTriangle sides must be positive.\n");
        return 1;
    }
    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1))
    // Triangle Inequality Theorem
        printf("\nThis triangle is valid.");
    else
        printf("\nThis triangle is not valid.");
    return 0;
}
```
