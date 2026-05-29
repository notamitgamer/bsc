---
title: pc-ip-16.c
description: "C program source code for pc-ip-16.c"
icon: lucide/file-code
---

# `pc-ip-16.c`


!!! abstract "Problem Statement"
    Question 16: Write a C program that includes a user-defined function named isArmstrong with the signature int isArmstrong(int num);.

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta <amitdutta4255@gmail.com> |
| **Date** | 05 Jan 2026 |
| **License** | MIT License (See the LICENSE file for details) |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/practice-c/pc-ip-16.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/practice-c/pc-ip-16.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>
#include <math.h>

int isArmstrong(int);

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (isArmstrong(num))
    {
        printf("\nInput %d is a Armstrong number.", num);
    }
    else
    {
        printf("\nInput %d is not a Armstrong number.", num);
    }
    return 0;
}

int isArmstrong(int num)
{
    int temp = num;
    int power = 0;
    int result = 0;
    while (temp > 0)
    {
        power++;
        temp /= 10;
    }
    temp = num;
    while (temp > 0)
    {
        result += (int)pow((temp % 10), power);
        temp /= 10;
    }
    return result == num;
}
```
</div>
