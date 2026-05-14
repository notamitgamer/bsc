---
title: apc-prac-036.c
description: "C program source code for apc-prac-036.c"
---

# `apc-prac-036.c`


!!! abstract "Problem Statement"
    Check krishnamurty number.

## Metadata
| Property | Detail |
|---|---|
| **Author**  | Amit Dutta <amitdutta4255@gmail.com> |
| **Date**    | 12 Dec 2025 |
| **License** | MIT License (See the LICENSE file for details) |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/apc-prac-036.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/apc-prac-036.c){.md-button}

> 💡 You can print or save this file by opening **Raw** and using your browser.

## Source Code
```c
#include <stdio.h>

int factorial(int);
int checkKrishnamurty(int);

int factorial(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int checkKrishnamurty(int n)
{
    int temp1 = n, temp2 = 0;
    while (temp1 > 0)
    {
        temp2 += factorial(temp1 % 10);
        temp1 /= 10;
    }
    if (temp2 == n)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (checkKrishnamurty(n))
        printf("\nInput %d is a Krishnamurty number.", n);
    else
        printf("\ninput %d is not a Krishnamurty number.", n);
    return 0;
}
```
