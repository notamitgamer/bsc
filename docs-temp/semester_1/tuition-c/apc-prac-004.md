---
title: apc-prac-004.c
description: "C program source code for apc-prac-004.c"
---

# `apc-prac-004.c`


!!! abstract "Problem Statement"
    WAP to calculate and display radius of a circle by taking the area as input.

## Metadata
| Property | Detail |
|---|---|
| **Author**  | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/apc-prac-004.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/apc-prac-004.c){.md-button}

> 💡 You can print or save this file by opening **Raw** and using your browser.

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
