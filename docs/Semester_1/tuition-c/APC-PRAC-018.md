---
label: APC-PRAC-018.c
description: "C program source code for APC-PRAC-018.c"
---

# `APC-PRAC-018.c`

## Problem Statement
!!!
Write a program to check Automorphic Number.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/tuition-c/APC-PRAC-018.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/tuition-c/APC-PRAC-018.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>
#include <math.h>

int main()
{
    int num, square, count = 0, temp, modNum;
    printf("Enter the number : ");
    scanf("%d", &num);
    square = (int)pow(num, 2);
    temp = num;
    while (temp > 0)
    {
        temp /= 10;
        count++;
    }
    modNum = (int)pow(10, count);
    temp = square % modNum;
    if (num == temp)
        printf("\nInput %d is a Automorphic Number.", num);
    else
        printf("\nInput %d is a Automorphic Number.", num);
    return 0;
}
```
