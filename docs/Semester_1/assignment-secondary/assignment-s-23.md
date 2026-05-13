# `assignment-s-23.c`

## Problem Statement
!!!
Write a program to add two complex numbers using structures.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 18 Jan 2026 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/assignment-secondary/assignment-s-23.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/assignment-secondary/assignment-s-23.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
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
