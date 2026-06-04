---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> APC-PRAC-041.c'
description: 'Write a C program to find and print all twin prime pairs between 1 and n using nested loops. (Twin primes are prime numbers having a difference of 2, like 11 and 13)'
---

# APC-PRAC-041.c

| Property | Details |
| :--- | :--- |
| **Author** | [Amit Dutta](mailto:amitdutta4255@gmail.com) |
| **Date** | 12 Dec 2025 |
| **License** | [MIT License (See the LICENSE file for details)](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
Write a C program to find and print all twin prime pairs between 1 and n using nested loops. (Twin primes are prime numbers having a difference of 2, like 11 and 13)
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-PRAC-041.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-PRAC-041.c)

```c [APC-PRAC-041.c]
#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
    if (n < 2)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;
    int i, temp = (int)sqrt(n);
    for (i = 3; i <= temp; i += 2)
        if (n % i == 0)
            return 0;
    return 1;
}

int main()
{
    int n, i, count = 0;
    printf("enter the n: ");
    scanf("%d", &n);
    printf("\nAll the twin numbers:  ");
    for (i = 1; i <= n - 2; i++)
    {
        if (isPrime(i))
        {
            if (isPrime(i + 2))
            {
                printf("(%d, %d)  ", i, i + 2);
                count++;
            }
        }
    }
    printf("\nCount; %d", count);
    return 0;
}
```
