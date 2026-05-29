---
title: APC-PRAC-005.c
description: "C program source code for APC-PRAC-005.c"
icon: lucide/file-code
---

# `APC-PRAC-005.c`


!!! abstract "Problem Statement"
    WAP a program that accept number of days as input and represent it as years, months and days.

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-PRAC-005.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-PRAC-005.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>
int main()
{
    int days, months, years, temp;
    printf("Enter the No. of days : ");
    scanf("%d", &days);
    temp = days;
    years = days / 365;
    days = days % 365;
    months = days / 30;
    days = days % 30;
    printf("%d Days = %d Years, %d Months, %d Days", temp, years, months, days);
    return 0;
}
```
</div>
