---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> lucproblem005.c'
description: 'Write a program to calculate overtime pay of 10 employees. Overtime is paid at the rate of Rs. 120.00 per hour for every hour worked above 40 hours. Assume that employees do not work for fractional part of an hour.'
---

# lucproblem005.c

| Property | Details |
| :--- | :--- |
| **Author** | Amit Dutta (amitdutta4255@gmail.com) |
| **Date** | 12 Dec 2025 |
| **License** | [MIT](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
Write a program to calculate overtime pay of 10 employees. Overtime is paid at the rate of Rs. 120.00 per hour for every hour worked above 40 hours. Assume that employees do not work for fractional part of an hour.
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/letusc/lucproblem005.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/letusc/lucproblem005.c)

```c [lucproblem005.c]
#include <stdio.h>
#include <conio.h>
int main()
{
    int working_hour, i = 1;
    double pay;
    while (i <= 10)
    {
        printf("Enter the working hour for the employee no. %d : ", i);
        if (scanf("%d", &working_hour) != 1)
        {
            printf("\n\tPlease enter a number as woking hour.\n\n");
            while (getchar() != '\n')
                ;
            // above line discard the input characters untill getchar() reaches the new line character.
            /* if I do not discard the input, after 'continue;' statement that input will be again taken 
            by scanf (In the line 17). It will be a infinite loop of error. */
            continue;
        }
        // checking overtime
        if (working_hour > 40)
        {
            pay = (working_hour - 40) * 120.00;
            printf("\n\tOvertime working hours of Employee %d : %d", i, (working_hour - 40));
            printf("\n\tPay of the overtime for Employee %d   : Rs. %.2f\n\n", i, pay);
        }
        else
            printf("\n\tEmployee %d did not work any overtime.\n\n", i);
        i++; // changing to next employee
    }
}
```
