---
title: apc-prac-008.c
description: "C program source code for apc-prac-008.c"
---

# `apc-prac-008.c`


!!! abstract "Problem Statement"
    WAP to multiply and divide a number by 4 without using multiplication and division operator.

## Metadata
| Property | Detail |
|---|---|
| **Author**  | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/apc-prac-008.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/apc-prac-008.c){.md-button}

> 💡 You can print or save this file by opening **Raw** and using your browser.

## Source Code
```c
#include <stdio.h>
int main()
{
    int num, multi, div;
    printf("Enter the number : ");
    scanf("%d", &num);
    multi = num << 2;
    div = num >> 2;
    printf("Multiplication : %d"
           "\nDivision : %d",
           multi, div);
    return 0;
}
```
