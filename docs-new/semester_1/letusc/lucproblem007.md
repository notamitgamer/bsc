---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> lucproblem007.c'
description: 'Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another'
---

# lucproblem007.c

| Property | Details |
| :--- | :--- |
| **Author** | Amit Dutta (amitdutta4255@gmail.com) |
| **Date** | 12 Dec 2025 |
| **License** | [MIT](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/letusc/lucproblem007.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/letusc/lucproblem007.c)

```c [lucproblem007.c]
#include <stdio.h>
int main()
{
    double num, result;
    int power, i = 1;
    printf("Enter the numbers in 'num^power' format : ");
    // checking if the input is valid or not
    if (scanf("%lf^%d", &num, &power) != 2)
    {
        printf("\nPlease enter numbers.");
        return 1;
    }
     // result for the negetive input
    if (power < 0)
    {
        printf("\nPlease use a positive number as power.");
        return 1;
    }
    //  Hard codded result for input '0' (zero)
    if (power == 0)
    {
        printf("\n%g to the power of %d is : 1", num, power);
        return 0;
    }
    result = num;
    while (i <= power - 1)
    {
        result = result * num;
        i++;
    }
    printf("\n%g to the power of %d is : %g", num, power, result);
    return 0;
}
```
