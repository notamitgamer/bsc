---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> APC-PRAC-005.c'
description: 'WAP a program that accept number of days as input and represent it as years, months and days.'
---

# APC-PRAC-005.c

| Property | Details |
| :--- | :--- |
| **Author** | Amit Dutta (amitdutta4255@gmail.com) |
| **Date** | 12 Dec 2025 |
| **License** | [MIT](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
WAP a program that accept number of days as input and represent it as years, months and days.
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-PRAC-005.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-PRAC-005.c)

```c [APC-PRAC-005.c]
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
