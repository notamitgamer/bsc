---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> APC-S-010.c'
description: 'Write a program to input a new element at a specific position of an array. a[] = {4, 5, 2, 10, 6, 9, 8}, newItem = 7, position = 3'
---

# APC-S-010.c

| Property | Details |
| :--- | :--- |
| **Author** | Amit Dutta (amitdutta4255@gmail.com) |
| **Date** | 12 Dec 2025 |
| **License** | [MIT](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
Write a program to input a new element at a specific position of an array. a[] = {4, 5, 2, 10, 6, 9, 8}, newItem = 7, position = 3
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-S-010.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-S-010.c)

```c [APC-S-010.c]
#include <stdio.h>

int main()
{
    int a[8] = {4, 5, 2, 10, 6, 9, 8};
    int i;

    printf("Elemnts of the array:  ");
    for (i = 0; i <= 6; i++)
        printf("%d  ", a[i]);

    printf("\nMethod 1:  ");
    for (i = 7; i >= 4; i--)
        a[i] = a[i - 1];
    a[3] = 7;
    for (i = 0; i <= 7; i++)
        printf("%d  ", a[i]);

    // another method
    printf("\nMethod 2:  ");
    int b[8] = {4, 5, 2, 10, 6, 9, 8};
    int temp1 = 7;
    for (i = 3; i <= 7; i++)
    {
        int temp2 = b[i];
        b[i] = temp1;
        temp1 = temp2;
    }
    for (i = 0; i <= 7; i++)
        printf("%d  ", b[i]);

    return 0;
}
```
