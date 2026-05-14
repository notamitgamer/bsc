---
title: apc-prac-016.c
description: "C program source code for apc-prac-016.c"
---

# `apc-prac-016.c`


!!! abstract "Problem Statement"
    Write a program to check palindrome number.

## Metadata
| Property | Detail |
|---|---|
| **Author**  | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/apc-prac-016.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/apc-prac-016.c){.md-button}

> 💡 You can print or save this file by opening **Raw** and using your browser.

## Source Code
```c
#include <stdio.h>

int main()
{
    int num, temp, rev = 0;
    printf("Enter the number : ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0)
    {
        rev = (rev * 10) + (temp % 10);
        temp /= 10;
    }
    if (rev == num)
        printf("\nInput %d is a palindrome number.", num);
    else
        printf("\nInput %d is not a palindrome number.", num);
    return 0;
}
```
