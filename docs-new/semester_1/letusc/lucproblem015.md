---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> lucproblem015.c'
description: 'Write a program that defines a function that calculates power of one number reaised to another and factorial value of a number in one cell.'
---

# lucproblem015.c

| Property | Details |
| :--- | :--- |
| **Author** | [Amit Dutta](mailto:amitdutta4255@gmail.com) |
| **Date** | 12 Dec 2025 |
| **License** | [MIT License (See the LICENSE file for details)](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
Write a program that defines a function that calculates power of one number reaised to another and factorial value of a number in one cell.
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/letusc/lucproblem015.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/letusc/lucproblem015.c)

```c [lucproblem015.c]
#include <stdio.h>

void bothPowerFactorial(double, int, int, double *, long long *);

int main()
{
    double a, resultPower;
    int b, factN;
    long long resultFactorial;
    printf("Enter a and b for calculating a raised to b: ");
    scanf("%lf %d", &a, &b);
    printf("Enter number to calculate the factorial: ");
    scanf("%d", &factN);
    if (b < 0 || factN < 0)
    {
        printf("\nOnly non-negative integer is allowed as input of b and factorial.");
        return 1;
    }
    bothPowerFactorial(a, b, factN, &resultPower, &resultFactorial);
    printf("\n%g Raised to %d: %g"
           "\nFactorial of %d: %lld",
           a, b, resultPower, factN, resultFactorial);
    return 0;
}

void bothPowerFactorial(double a, int b, int n, double *resultPower, long long *resultFactorial)
{
    double tempResultPower = 1;
    long long tempResultFactorial = 1;
    int i;

    for (i = 1; i <= b; i++)
        tempResultPower *= a;

    for (i = 1; i <= n; i++)
        tempResultFactorial *= i;

    *resultPower = tempResultPower;
    *resultFactorial = tempResultFactorial;
}
```
