---
label: APC-PRAC-012.c
description: "C program source code for APC-PRAC-012.c"
---

# `APC-PRAC-012.c`

## Problem Statement
!!!
Write a program to input three integer and find out second largest
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/tuition-c/APC-PRAC-012.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/tuition-c/APC-PRAC-012.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>

int main()
{
    int a, b, c, secondLargest;
    printf("Enter three number : ");
    scanf("%d %d %d", &a, &b, &c);
    if ((a < b && a > c) || (a > b && a < c))
        secondLargest = a;
    if ((b < a && b > c) || (b > a && b < c))
        secondLargest = b;
    if ((c < b && c > a) || (c > b && c < a))
        secondLargest = c;
    printf("\nSecond Largest : %d", secondLargest);
    return 0;
}
```
