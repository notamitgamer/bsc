---
title: APC-PRAC-012.c
description: "C program source code for APC-PRAC-012.c"
icon: lucide/file-code
---

# `APC-PRAC-012.c`


!!! abstract "Problem Statement"
    Write a program to input three integer and find out second largest

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-PRAC-012.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-PRAC-012.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
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
</div>
