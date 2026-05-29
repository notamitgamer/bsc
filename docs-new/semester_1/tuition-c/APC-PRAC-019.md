---
title: APC-PRAC-019.c
description: "C program source code for APC-PRAC-019.c"
icon: lucide/file-code
---

# `APC-PRAC-019.c`


!!! abstract "Problem Statement"
    Write a program to find hcf of two numbers

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-PRAC-019.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-PRAC-019.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
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
    printf("\nHCF of %d and %d is : %d\n", temp_a, temp_b, a);
    return 0;
}
```
</div>
