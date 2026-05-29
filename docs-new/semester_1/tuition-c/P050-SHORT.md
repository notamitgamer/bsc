---
title: P050-SHORT.c
description: "C program source code for P050-SHORT.c"
icon: lucide/file-code
---

# `P050-SHORT.c`


!!! abstract "Problem Statement"
    Write a program to input a number and check whether it is Disarium Number or not. Note : A number is said to Disarium if sum of its digit powered by with their respective position is equal to the original number.

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/P050-SHORT.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/P050-SHORT.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    int position = printf("%d", num);
    int temp = num;
    int res = 0;
    while (temp > 0)
    {
        res += (int)pow(temp % 10, position);
        position--;
        temp /= 10;
    }
    if (res == num)
        printf(" is a Disarium Number.");
    else
        printf(" is Not a Disarium Number.");
    return 0;
}
```
</div>
