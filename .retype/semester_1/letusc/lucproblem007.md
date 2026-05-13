# `lucproblem007.c`

## Problem Statement
!!!
Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/letusc/lucproblem007.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/letusc/lucproblem007.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
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
