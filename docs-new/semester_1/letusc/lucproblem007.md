---
title: lucproblem007.c
description: "C program source code for lucproblem007.c"
icon: lucide/file-code
---

# `lucproblem007.c`


!!! abstract "Problem Statement"
    Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/letusc/lucproblem007.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/letusc/lucproblem007.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
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
</div>
