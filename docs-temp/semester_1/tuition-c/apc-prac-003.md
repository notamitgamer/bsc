---
title: apc-prac-003.c
description: "C program source code for apc-prac-003.c"
---

# `apc-prac-003.c`


!!! abstract "Problem Statement"
    WAP to accept  diagonal of a square and calculate area, parimeter

## Metadata
| Property | Detail |
|---|---|
| **Author**  | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/apc-prac-003.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/apc-prac-003.c){.md-button}

> 💡 You can print or save this file by opening **Raw** and using your browser.

## Source Code
```c
#include <stdio.h>
#include <math.h>
int main()
{
    double dia, side, area, peri;
    printf("Enter the diagonal of the square : ");
    scanf("%lf", &dia);
    side = dia / sqrt(2);
    area = pow(side, 2);
    peri = 4 * side;
    printf("\nArea of the square      : %g"
           "\nPerimeter of the square : %g",
           area, peri);
    return 0;
}
```
