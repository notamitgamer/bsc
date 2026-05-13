---
label: pc-ip-02.c
description: "C program source code for pc-ip-02.c"
---

# `pc-ip-02.c`

## Problem Statement
!!!
Question 2: Write a program to reverse a non-negative integer using a function.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 05 Jan 2026 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/practice-c/pc-ip-02.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/practice-c/pc-ip-02.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>

int reverse(int);

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("\nOnly poitive integers are allowed.");
        return 1;
    }
    printf("\nReverse of input %d is : %d", num, reverse(num));
    return 0;
}

int reverse(int num)
{
    int result = 0;
    while (num > 0)
    {
        result = (result * 10) + (num % 10);
        num /= 10;
    }
    return result;
}
```
