---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> APC-PRAC-014.c'
description: 'Write a program to calculate and display the maturity amount taking the sum and number of days as input. No. of Days     Rate of Interest ===========     ================ <= 180          5.57 % 181 - 364       7.75 % 365 - 500       9.25 % > 500           9.15 %'
---

# APC-PRAC-014.c

| Property | Details |
| :--- | :--- |
| **Author** | Amit Dutta (amitdutta4255@gmail.com) |
| **Date** | 12 Dec 2025 |
| **License** | [MIT](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
Write a program to calculate and display the maturity amount taking the sum and number of days as input. No. of Days     Rate of Interest ===========     ================ &lt;= 180          5.57 % 181 - 364       7.75 % 365 - 500       9.25 % &gt; 500           9.15 %
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-PRAC-014.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-PRAC-014.c)

```c [APC-PRAC-014.c]
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
