---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> pc-ip-06.c'
description: 'Question 6: Write a program using a function to compute and display all factors of a given number.'
---

# pc-ip-06.c

| Property | Details |
| :--- | :--- |
| **Author** | Amit Dutta (amitdutta4255@gmail.com) |
| **Date** | 05 Jan 2026 |
| **License** | [MIT](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
Question 6: Write a program using a function to compute and display all factors of a given number.
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/practice-c/pc-ip-06.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/practice-c/pc-ip-06.c)

```c [pc-ip-06.c]
#include <stdio.h>

void printFactors(int);

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printFactors(n);
    return 0;
}

void printFactors(int n)
{
    int i;
    printf("\nFactors of %d:", n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("  %d", i);
        }
    }
}
```
