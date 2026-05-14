---
title: pc-ip-02.c
description: "C program source code for pc-ip-02.c"
---

# `pc-ip-02.c`


!!! abstract "Problem Statement"
    Question 2: Write a program to reverse a non-negative integer using a function.

## Metadata
| Property | Detail |
|---|---|
| **Author**  | Amit Dutta (amitdutta4255@gmail.com) | Date: 05 Jan 2026 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/practice-c/pc-ip-02.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/practice-c/pc-ip-02.c){.md-button}

> 💡 You can print or save this file by opening **Raw** and using your browser.

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
