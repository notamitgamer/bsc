---
label: lucproblem002.c
description: "C program source code for lucproblem002.c"
---

# `lucproblem002.c`

## Problem Statement
!!!
A year is entered through the keyboard, write a program to determine whether the year is leap or not. Use the logical operators && and || .
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/letusc/lucproblem002.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/letusc/lucproblem002.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>
int main()
{
    int year;
    printf("Enter year : ");
    scanf("%d", &year);
    if (year % 4 == 0 && year & 100 != 0 || year % 400 == 0)
        printf("\nYear %d is a leapyear.", year);
    else
        printf("\nYear %d is not a leapyear.", year);
    return 0;
}
```
