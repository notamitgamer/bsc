---
label: assignment-s-11.c
description: "C program source code for assignment-s-11.c"
---

# `assignment-s-11.c`

## Problem Statement
!!!
Write a program that takes the radius of a circle as input, passes it to a function that computes area and circumference, and displays results in main().
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 17 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/assignment-secondary/assignment-s-11.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/assignment-secondary/assignment-s-11.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>
#include <math.h>

void area_circumference(double, double *, double *);

int main()
{
    double r, area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &r);
    area_circumference(r, &area, &circumference);
    printf("\nArea of the circle = %g", area);
    printf("\nCircumference of the circle = %g", circumference);
    return 0;
}

void area_circumference(double r, double *area, double *circumference)
{
    *area = M_PI * r * r;
    *circumference = 2 * M_PI * r;
}
```
