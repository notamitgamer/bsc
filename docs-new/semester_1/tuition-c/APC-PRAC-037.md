---
title: APC-PRAC-037.c
description: "C program source code for APC-PRAC-037.c"
icon: lucide/file-code
---

# `APC-PRAC-037.c`


!!! abstract "Problem Statement"
    Show all the armstrong number between a range.

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta <amitdutta4255@gmail.com> |
| **Date** | 12 Dec 2025 |
| **License** | MIT License (See the LICENSE file for details) |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-PRAC-037.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-PRAC-037.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>
#include <math.h>

#define lowerBound 100
#define upperBound 999

int isArmstrongNumber(int);

int isArmstrongNumber(int n)
{
    int temp = n, sum = 0, count = 0;
    while (temp > 0)
    {
        count++;
        temp /= 10;
    }
    temp = n;
    while (temp > 0)
    {
        sum += (int)pow(temp % 10, count);
        temp /= 10;
    }
    return sum == n;
}

int main()
{
    int n, i, count = 0;
    printf("Armstrong number between %d and %d are:  ", lowerBound, upperBound);
    for (i = lowerBound; i <= upperBound; i++)
        if (isArmstrongNumber(i))
        {
            printf("%d  ", i);
            count++;
        }
    printf("\n\nCount: %d\n", count);
    return 0;
}
```
</div>
