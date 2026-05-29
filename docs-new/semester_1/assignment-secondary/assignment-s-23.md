---
title: assignment-s-23.c
description: "C program source code for assignment-s-23.c"
icon: lucide/file-code
---

# `assignment-s-23.c`


!!! abstract "Problem Statement"
    Write a program to add two complex numbers using structures.

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 18 Jan 2026 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/assignment-secondary/assignment-s-23.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-secondary/assignment-s-23.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>
#include <stdlib.h>

struct complex_number
{
    double real;
    double imaginary;
};

int main()
{
    struct complex_number a, b;
    printf("Enter the 1st complex number in this format (a+bi): ");
    scanf("%lf+%lfi", &a.real, &a.imaginary);
    printf("Enter the 2nd complex number in this format (a+bi): ");
    scanf("%lf+%lfi", &b.real, &b.imaginary);

    printf("Result = %-2g + %-2.2g", a.real + b.real, a.imaginary + b.imaginary);
    return 0;
}
```
</div>
