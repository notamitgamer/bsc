---
label: APC-PRAC-002.c
description: "C program source code for APC-PRAC-002.c"
---

# `APC-PRAC-002.c`

## Problem Statement
!!!
WAP to calculate area of a circle using math library method. Take radius of the circle as input.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/tuition-c/APC-PRAC-002.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/tuition-c/APC-PRAC-002.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>
#include <math.h>
int main()
{
    double r, area;
    printf("Enter the radius of the circle : ");
    scanf("%lf", &r);
    area = M_PI * pow(r, 2);
    printf("\nArea of the circle : %g", area);
    return 0;
}
```
