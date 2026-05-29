---
title: APC-PRAC-002.c
description: "C program source code for APC-PRAC-002.c"
icon: lucide/file-code
---

# `APC-PRAC-002.c`


!!! abstract "Problem Statement"
    WAP to calculate area of a circle using math library method. Take radius of the circle as input.

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-PRAC-002.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-PRAC-002.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
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
</div>
