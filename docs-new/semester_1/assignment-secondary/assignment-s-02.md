---
title: assignment-s-02.c
description: "C program source code for assignment-s-02.c"
icon: lucide/file-code
---

# `assignment-s-02.c`


!!! abstract "Problem Statement"
    Write a program to reverse a non-negative integer using a function.

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/assignment-secondary/assignment-s-02.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-secondary/assignment-s-02.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>

int reverse(int);

int main()
{
    int num;
    printf("Enter a non-negetive integer: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("\nOnly non-negetive integers are allowed.");
        return 1;
    }
    printf("\nReverse of the integer %d = %d", num, reverse(num));
    return 0;
}

int reverse(int num)
{
    int rev = 0;
    while (num > 0)
    {
        rev = (rev * 10) + (num % 10);
        num /= 10;
    }
    return rev;
}
```
</div>
