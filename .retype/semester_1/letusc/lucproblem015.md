# `lucproblem015.c`

## Problem Statement
!!!
Write a program that defines a function that calculates power of one number reaised to another and factorial value of a number in one cell.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta <amitdutta4255@gmail.com> |
| **Date** | 12 Dec 2025 |
| **License** | MIT License (See the LICENSE file for details) |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/letusc/lucproblem015.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/letusc/lucproblem015.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
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
