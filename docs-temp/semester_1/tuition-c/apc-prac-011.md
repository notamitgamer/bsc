---
title: apc-prac-011.c
description: "C program source code for apc-prac-011.c"
---

# `apc-prac-011.c`


!!! abstract "Problem Statement"
    Write a program to input positive number and check whether the number is perfect square or not. If the number is negetive then display appropriate message

## Metadata
| Property | Detail |
|---|---|
| **Author**  | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/apc-prac-011.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/apc-prac-011.c){.md-button}

> 💡 You can print or save this file by opening **Raw** and using your browser.

## Source Code
```c
#include <stdio.h>
#include <math.h>

int main()
{
    int num, temp;
    printf("Enter the number : ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("\nYou entered a negetive number.");
        return 1;
    }
    temp = (int)sqrt(num);
    if (temp * temp == num)
    {
        printf("\nInput %d is a perfect square number.", num);
        return 0;
    }
    else
        printf("\nInput %d is not a perfect square number.", num);
    return 0;
}
```
