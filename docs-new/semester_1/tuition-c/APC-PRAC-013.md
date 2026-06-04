---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> APC-PRAC-013.c'
description: 'Write a program to input sum(p), rate of interest(r), time(t) and type of interest (''s'' for simple interes, ''c'' for compound interest), then calculate and display the earned interest'
---

# APC-PRAC-013.c

| Property | Details |
| :--- | :--- |
| **Author** | Amit Dutta (amitdutta4255@gmail.com) |
| **Date** | 12 Dec 2025 |
| **License** | [MIT](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
Write a program to input sum(p), rate of interest(r), time(t) and type of interest ('s' for simple interes, 'c' for compound interest), then calculate and display the earned interest
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-PRAC-013.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-PRAC-013.c)

```c [APC-PRAC-013.c]
#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{
    double p, t, r, si, ci;
    char mode;
    printf("Enter the Principle, Time (Year) and the Rate of Interest : ");
    scanf("%lf %lf %lf", &p, &t, &r);
    printf("Enter the mode of calculation ('s' for simple interest, 'c' for compound interest) : ");
    scanf(" %c", &mode);
    mode = tolower(mode);
    switch (mode)
    {
    case 's':
        si = (p * t * r) / 100;
        printf("\nSimple Interest : %g", si);
        return 0;
    case 'c':
        ci = (p * pow(1 + (r / 100), t)) - p;
        printf("\nCompound Interest : %g", ci);
        return 0;
    default:
        printf("\nYou entered a wrong choice.");
        return 1;
    }
}
```
