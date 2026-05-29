---
title: assignment-s-06.c
description: "C program source code for assignment-s-06.c"
icon: lucide/file-code
---

# `assignment-s-06.c`


!!! abstract "Problem Statement"
    Write a program using a function to compute and display all factors of a given number.

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/assignment-secondary/assignment-s-06.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-secondary/assignment-s-06.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>
#include <stdlib.h>

void display_factors(int);

int main()
{
    int num, i;
    printf("Please enter the number to get the factors from it : ");
    scanf("%d", &num);
    display_factors(num);
    return 0;
}

void display_factors(int num) {
    int temp = abs(num);
    int i;

    if (temp == 0)
    {
        printf("\n0 has infinitely many factors (all integers).");
        exit(1);
    }

    printf("\nThe factors of ' %d ' is :- ", num);
    printf("\nPositive : ");
    for (i = 1; i <= temp; i++)
        if (temp % i == 0)
            printf("  %d", i);
    printf("\nNegative : ");
    for (i = 1; i <= temp; i++)
        if (temp % i == 0)
            printf("  %d", -i);
}
```
</div>
