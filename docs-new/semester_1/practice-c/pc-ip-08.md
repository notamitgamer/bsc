---
title: pc-ip-08.c
description: "C program source code for pc-ip-08.c"
icon: lucide/file-code
---

# `pc-ip-08.c`


!!! abstract "Problem Statement"
    Question 8: Write a program that takes the radius of a circle as input, passes it to a function that computes area and circumference, and displays results in main().

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 05 Jan 2026 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/practice-c/pc-ip-08.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/practice-c/pc-ip-08.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>
#include <math.h>

void area_circumference(double, double *, double *);

int main()
{
    double r, area, cir;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &r);
    area_circumference(r, &area, &cir);
    printf("\nArea of the circle: %g", area);
    printf("\nCircumference of the circle: %g", cir);
    return 0;
}

void area_circumference(double r, double *area, double *cir)
{
    *area = M_PI * r * r;
    *cir = 2 * M_PI * r;
}
```
</div>
