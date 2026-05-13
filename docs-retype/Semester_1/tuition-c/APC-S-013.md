---
label: APC-S-013.c
description: "C program source code for APC-S-013.c"
---

# `APC-S-013.c`

## Problem Statement
!!!
Write a fuction to calculate the average of an array
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/tuition-c/APC-S-013.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/tuition-c/APC-S-013.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

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
