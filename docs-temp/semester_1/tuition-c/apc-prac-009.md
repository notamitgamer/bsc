---
title: apc-prac-009.c
description: "C program source code for apc-prac-009.c"
---

# `apc-prac-009.c`


!!! abstract "Problem Statement"
    WAP to swap two integer variable without using Third variable.

## Metadata
| Property | Detail |
|---|---|
| **Author**  | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/apc-prac-009.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/apc-prac-009.c){.md-button}

> 💡 You can print or save this file by opening **Raw** and using your browser.

## Source Code
```c
#include <stdio.h>
int main()
{
    int a = 4, b = 6;
    printf("Before swap : A = %d and B = %d", a, b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("\nAfter swap  : A = %d and B = %d", a, b);
    return 0;
}
```
