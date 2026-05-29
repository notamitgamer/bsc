---
title: lucproblem002.c
description: "C program source code for lucproblem002.c"
icon: lucide/file-code
---

# `lucproblem002.c`


!!! abstract "Problem Statement"
    A year is entered through the keyboard, write a program to determine whether the year is leap or not. Use the logical operators && and || .

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/letusc/lucproblem002.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/letusc/lucproblem002.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
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
</div>
