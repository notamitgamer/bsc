# `APC-PRAC-001.c`

## Problem Statement
!!!
WAP to calculate area and perimeter of a rectangle by accepting length and breadth as input.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/tuition-c/APC-PRAC-001.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/tuition-c/APC-PRAC-001.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

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
