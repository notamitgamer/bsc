---
title: APC-PRAC-021.c
description: "C program source code for APC-PRAC-021.c"
icon: lucide/file-code
---

# `APC-PRAC-021.c`


!!! abstract "Problem Statement"
    Write a program to check special number (sum of digit + product of digit = original number)

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-PRAC-021.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-PRAC-021.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>

int main()
{
    int num, temp, sumOfDigit = 0, productOfDigit = 1;
    printf("Enter the number to check if it is a special number : ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0)
    {
        sumOfDigit += temp % 10;
        productOfDigit *= temp % 10;
        temp /= 10;
    }
    temp = sumOfDigit + productOfDigit;
    if (num == temp)
        printf("\nInput %d is a special number.", num);
    else
        printf("\nInput %d is not a special number.", num);
    return 0;
}
```
</div>
