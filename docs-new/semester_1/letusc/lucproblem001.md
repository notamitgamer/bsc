---
title: lucproblem001.c
description: "C program source code for lucproblem001.c"
icon: lucide/file-code
---

# `lucproblem001.c`


!!! abstract "Problem Statement"
    Consider a currency system in which there are notes of six denominations, namely, Rs. 1, Rs. 2, rs. 5, Rs. 10, Rs. 50, Rs. 100. If a sum of Rs. N is entered through the keyboard, Write a program to compute the smallest number of notes that will combine to give Rs. N.

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/letusc/lucproblem001.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/letusc/lucproblem001.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>
int main()
{
    int n, nonotes, temp;
    printf("Enter the amount : ");
    scanf("%d", &n);
    if (n < 1)
    {
        printf("\nAmount should be a positive integer.");
        return 1;
    }
    temp = n;
    nonotes = n / 100;
    n = n % 100;
    nonotes = nonotes + (n / 50);
    n = n % 50;
    nonotes = nonotes + (n / 10);
    n = n % 10;
    nonotes = nonotes + (n / 5);
    n = n % 5;
    nonotes = nonotes + (n / 2);
    n = n % 2;
    nonotes = nonotes + n;
    printf("\nthe smallest number of notes that will combine to give Rs. %d : %d", temp, nonotes);
    return 0;
}
```
</div>
