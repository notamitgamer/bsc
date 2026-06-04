---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> pc-ip-08.c'
description: 'Question 8: Write a program that takes the radius of a circle as input, passes it to a function that computes area and circumference, and displays results in main().'
---

# pc-ip-08.c

| Property | Details |
| :--- | :--- |
| **Author** | Amit Dutta (amitdutta4255@gmail.com) |
| **Date** | 05 Jan 2026 |
| **License** | [MIT](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
Question 8: Write a program that takes the radius of a circle as input, passes it to a function that computes area and circumference, and displays results in main().
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/practice-c/pc-ip-08.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/practice-c/pc-ip-08.c)

```c [pc-ip-08.c]
#include <stdio.h>
#include <math.h>

void area_circumference(double, double *, double *);

int main()
{
    double r, area, cir;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &r);
    area_circumference(r, &area, &cir);
    printf("\nArea of the circle: %g", area);
    printf("\nCircumference of the circle: %g", cir);
    return 0;
}

void area_circumference(double r, double *area, double *cir)
{
    *area = M_PI * r * r;
    *cir = 2 * M_PI * r;
}
```
