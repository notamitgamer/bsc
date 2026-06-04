---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> lucproblem014-short.c'
description: 'Write a function that receives integers and returns the sum, average and standard deviation of these numbers. Call this function from main() and print the result in main()'
---

# lucproblem014-short.c

| Property | Details |
| :--- | :--- |
| **Author** | [Amit Dutta](mailto:amitdutta4255@gmail.com) |
| **Date** | 12 Dec 2025 |
| **License** | [MIT License (See the LICENSE file for details)](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
Write a function that receives integers and returns the sum, average and standard deviation of these numbers. Call this function from main() and print the result in main()
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/letusc/lucproblem014-short.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/letusc/lucproblem014-short.c)

```c [lucproblem014-short.c]
#include <stdio.h>
#include <math.h>

void stats(double *, double *, double *);

int main()
{
    double sum, average, standardDeviation;
    stats(&sum, &average, &standardDeviation);

    printf("\n--- Stats ---"
           "\nSum: %g"
           "\nAverage: %g"
           "\nStandard Deviation: %g",
           sum, average, standardDeviation);
    return 0;
}

void stats(double *sum, double *average, double *standardDeviation)
{
    int n;
    printf("How many numbers you want to give input: ");
    scanf("%d", &n);

    double inputNumber[n];
    int i;

    printf("\n--- Enter Numbers ---\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%lf", &inputNumber[i]);
    }

    double tempSum = 0;
    for (i = 0; i < n; i++)
        tempSum += inputNumber[i];

    double tempAverage = tempSum / n;

    double tempStandardDeviation = 0.0;

    if (n > 1)
    {
        double tempSumation = 0;
        for (i = 0; i < n; i++)
            tempSumation += pow((inputNumber[i] - tempAverage), 2.0);

        tempStandardDeviation = sqrt(tempSumation / (n - 1));
    }

    *sum = tempSum;
    *average = tempAverage;
    *standardDeviation = tempStandardDeviation;
}
```
