---
title: apc-prac-020.c
description: "C program source code for apc-prac-020.c"
---

# `apc-prac-020.c`


!!! abstract "Problem Statement"
    Write a program to check if two number is co-prime or not

## Metadata
| Property | Detail |
|---|---|
| **Author**  | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/apc-prac-020.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/apc-prac-020.c){.md-button}

> 💡 You can print or save this file by opening **Raw** and using your browser.

## Source Code
```c
#include <stdio.h>

int main()
{
    int a, b, temp, temp_a, temp_b;
    printf("Enter the a and b : ");
    scanf("%d %d", &a, &b);
    temp_a = a, temp_b = b;
    while (b > 0)
    {
        temp = a;
        a = b;
        b = temp % b;
    }
    if (a == 1)
        printf("\n%d and %d is co-prime\n", temp_a, temp_b);
    else
        printf("\n%d and %d is NOT co-prime\n", temp_a, temp_b);
    return 0;
}
```
