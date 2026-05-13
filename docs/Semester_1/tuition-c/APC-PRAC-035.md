---
label: APC-PRAC-035.c
description: "C program source code for APC-PRAC-035.c"
---

# `APC-PRAC-035.c`

## Problem Statement
!!!
Print all the 3 and 4 digit palindrome number.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/tuition-c/APC-PRAC-035.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/tuition-c/APC-PRAC-035.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
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
