---
label: APC-PRAC-014.c
description: "C program source code for APC-PRAC-014.c"
---

# `APC-PRAC-014.c`

## Problem Statement
!!!
Write a program to calculate and display the maturity amount taking the sum and number of days as input. No. of Days     Rate of Interest ===========     ================ <= 180          5.57 % 181 - 364       7.75 % 365 - 500       9.25 % > 500           9.15 %
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/tuition-c/APC-PRAC-014.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/tuition-c/APC-PRAC-014.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>

int main()
{
    double p, t, r, si;
    int days;
    printf("Enter the Principle, Time (Days) : ");
    scanf("%lf %d", &p, &days);
    if (days > 0 && days <= 180)
        r = 5.57;
    else if (days > 180 && days <= 364)
        r = 7.75;
    else if (days > 364 && days <= 500)
        r = 9.25;
    else if (days > 500)
        r = 9.15;
    si = (p * t * r) / 100;
    printf("\nMaturity Amount : %d", si + p);
    return 0;
}
```
