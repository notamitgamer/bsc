---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> assignment-p-09.c'
description: 'Write a C program that includes a user-defined function named setBit with the signature int setBit(int num, int position);. The function should set the bit at the specified position (0-indexed) to 1 and return the modified number.'
---

# assignment-p-09.c

| Property | Details |
| :--- | :--- |
| **Author** | Amit Dutta (amitdutta4255@gmail.com) |
| **Date** | 12 Dec 2025 |
| **License** | [MIT](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
Write a C program that includes a user-defined function named setBit with the signature int setBit(int num, int position);. The function should set the bit at the specified position (0-indexed) to 1 and return the modified number.
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-primary/assignment-p-09.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/assignment-primary/assignment-p-09.c)

```c [assignment-p-09.c]
#include <stdio.h>

int setBit(int, int);

int main()
{
    int num, position;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the postion where you want to set the bit (0-indexed): ");
    scanf("%d", &position);
    printf("\nModified number= %d", setBit(num, position));
    return 0;
}

int setBit(int num, int position)
{
    int mask = 1 << position;
    return num | mask;
}
```
