---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> APC-PRAC-038.c'
description: 'Print all combinations of two two-digit numbers such that the sum of digits of both numbers is equal. Example: 23 and 41 → (2+3) = 5, (4+1) = 5.'
---

# APC-PRAC-038.c

| Property | Details |
| :--- | :--- |
| **Author** | Amit Dutta (amitdutta4255@gmail.com) |
| **Date** | 12 Dec 2025 |
| **License** | [MIT](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
Print all combinations of two two-digit numbers such that the sum of digits of both numbers is equal. Example: 23 and 41 → (2+3) = 5, (4+1) = 5.
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-PRAC-038.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-PRAC-038.c)

```c [APC-PRAC-038.c]
#include <stdio.h>

int main()
{
    printf("Combinations of two two-digit numbers such that the sum of digits of both numbers is equal:  ");
    int i, j, sum1, sum2, count = 0;
    for (i = 10; i <= 99; i++)
    {
        sum1 = (i % 10) + (i / 10);
        for (j = i + 1; j <= 99; j++)
        {
            sum2 = (j % 10) + (j / 10);
            if (sum1 == sum2)
            {
                printf("(%d, %d)  ", i, j);
                count++;
            }
        }
    }
    printf("\nCount: %d\n", count);
    return 0;
}
```
