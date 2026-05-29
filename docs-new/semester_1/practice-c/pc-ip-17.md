---
title: pc-ip-17.c
description: "C program source code for pc-ip-17.c"
icon: lucide/file-code
---

# `pc-ip-17.c`


!!! abstract "Problem Statement"
    Question 17: Write a C program that includes a user-defined function named isPerfect with the signature int isPerfect(int num);.

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 05 Jan 2026 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/practice-c/pc-ip-17.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/practice-c/pc-ip-17.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>

int isPerfect(int);

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    if (isPerfect(num))
    {
        printf("\nInput '%d' is a perfect number.", num);
    }
    else
    {
        printf("\nInput '%d' is not a perfect number.", num);
    }
    return 0;
}

int isPerfect(int n)
{
    int i, sum = 0;
    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum == n;
}
```
</div>
