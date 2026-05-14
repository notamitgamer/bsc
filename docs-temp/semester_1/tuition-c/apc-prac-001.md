---
title: apc-prac-001.c
description: "C program source code for apc-prac-001.c"
---

# `apc-prac-001.c`


!!! abstract "Problem Statement"
    WAP to calculate area and perimeter of a rectangle by accepting length and breadth as input.

## Metadata
| Property | Detail |
|---|---|
| **Author**  | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/apc-prac-001.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/apc-prac-001.c){.md-button}

> 💡 You can print or save this file by opening **Raw** and using your browser.

## Source Code
```c
#include<stdio.h>
int main() {
    double length, breadth, area, perimeter;
    printf("Enter the length and breadth of the Rectangle : ");
    scanf("%lf %lf", &length, &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("\nArea of the Rectangle : %g"
           "\nPerimeter of the Rectangle : %g", area, perimeter);
    return 0;

}
```
