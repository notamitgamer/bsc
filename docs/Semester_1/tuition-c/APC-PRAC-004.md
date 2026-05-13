# `APC-PRAC-004.c`

## Problem Statement
!!!
WAP to calculate and display radius of a circle by taking the area as input.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/tuition-c/APC-PRAC-004.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/tuition-c/APC-PRAC-004.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>
#include <math.h>
int main()
{
    double r, area;
    printf("Enter the area of the circle : ");
    scanf("%lf", &area);
    r = sqrt(area / M_PI);
    printf("\nRadius of the circle : %g", r);
    return 0;
}
```
