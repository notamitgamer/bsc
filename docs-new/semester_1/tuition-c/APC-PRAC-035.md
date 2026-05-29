---
title: APC-PRAC-035.c
description: "C program source code for APC-PRAC-035.c"
icon: lucide/file-code
---

# `APC-PRAC-035.c`


!!! abstract "Problem Statement"
    Print all the 3 and 4 digit palindrome number.

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-PRAC-035.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-PRAC-035.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>

int palindromeCheck(int);

int palindromeCheck(int n)
{
    int temp = n, rev = 0;
    while (temp > 0)
    {
        rev = (rev * 10) + (temp % 10);
        temp /= 10;
    }
    if (rev == n)
        return 1;
    else
        return 0;
}

int main()
{
    int i;
    printf("Palindrome number of 3 and 4 digits:  ");
    for (i = 100; i <= 9999; i++)
        if (palindromeCheck(i))
            printf("%d  ", i);
    return 0;
}
```
</div>
