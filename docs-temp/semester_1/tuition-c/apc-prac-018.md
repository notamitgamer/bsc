---
title: apc-prac-018.c
description: "C program source code for apc-prac-018.c"
---

# `apc-prac-018.c`


!!! abstract "Problem Statement"
    Write a program to check Automorphic Number.

## Metadata
| Property | Detail |
|---|---|
| **Author**  | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/apc-prac-018.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/apc-prac-018.c){.md-button}

> 💡 You can print or save this file by opening **Raw** and using your browser.

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
