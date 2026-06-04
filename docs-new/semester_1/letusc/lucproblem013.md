---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> lucproblem013.c'
description: 'Define a function to convert any given year into its Roman equivalent. Use these roman equivalent for decimal numbers : 1 - I, 5 - V, 10 - X, 50 - L, 100 - C, 500 - D, 1000 - M'
---

# lucproblem013.c

| Property | Details |
| :--- | :--- |
| **Author** | Amit Dutta (amitdutta4255@gmail.com) |
| **Date** | 12 Dec 2025 |
| **License** | [MIT](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
Define a function to convert any given year into its Roman equivalent. Use these roman equivalent for decimal numbers : 1 - I, 5 - V, 10 - X, 50 - L, 100 - C, 500 - D, 1000 - M
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/letusc/lucproblem013.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/letusc/lucproblem013.c)

```c [lucproblem013.c]
#include <stdio.h>

void romanise(int);

void romanise(int year)
{
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char *romanChar[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    // including the two-character subtractive pairs.
    int i = 0;

    printf("Year %d = ", year);
    while (year > 0)
    {
        if (year >= values[i])
        {
            printf("%s", romanChar[i]);
            year -= values[i];
        }
        else
            i++;
    }
}

int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d", &year);
    romanise(year);
    return 0;
}
```
