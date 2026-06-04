---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> APC-PRAC-035.c'
description: 'Print all the 3 and 4 digit palindrome number.'
---

# APC-PRAC-035.c

| Property | Details |
| :--- | :--- |
| **Author** | Amit Dutta (amitdutta4255@gmail.com) |
| **Date** | 12 Dec 2025 |
| **License** | [MIT](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
Print all the 3 and 4 digit palindrome number.
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-PRAC-035.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-PRAC-035.c)

```c [APC-PRAC-035.c]
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
