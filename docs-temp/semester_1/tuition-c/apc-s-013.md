---
title: apc-s-013.c
description: "C program source code for apc-s-013.c"
---

# `apc-s-013.c`


!!! abstract "Problem Statement"
    Write a fuction to calculate the average of an array

## Metadata
| Property | Detail |
|---|---|
| **Author**  | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/apc-s-013.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/apc-s-013.c){.md-button}

> 💡 You can print or save this file by opening **Raw** and using your browser.

## Source Code
```c
#include <stdio.h>

double average(int []);

int main()
{
    int marks[10], i;
    printf("\nEnter 10 numbers: \n");
    for (i = 0; i <= 9; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    printf("\nAverage = %g", average(marks));
    return 0;
}

double average(int marks[10])
{
    int sum = 0;
    for (int i = 0; i <= 9; i++)
        sum += marks[i];
    return sum / 10.0;
}
```
