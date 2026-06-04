---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> pc-ip-16.c'
description: 'Question 16: Write a C program that includes a user-defined function named isArmstrong with the signature int isArmstrong(int num);.'
---

# pc-ip-16.c

| Property | Details |
| :--- | :--- |
| **Author** | [Amit Dutta](mailto:amitdutta4255@gmail.com) |
| **Date** | 05 Jan 2026 |
| **License** | [MIT License (See the LICENSE file for details)](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
Question 16: Write a C program that includes a user-defined function named isArmstrong with the signature int isArmstrong(int num);.
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/practice-c/pc-ip-16.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/practice-c/pc-ip-16.c)

```c [pc-ip-16.c]
#include <stdio.h>
#include <math.h>

int isArmstrong(int);

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (isArmstrong(num))
    {
        printf("\nInput %d is a Armstrong number.", num);
    }
    else
    {
        printf("\nInput %d is not a Armstrong number.", num);
    }
    return 0;
}

int isArmstrong(int num)
{
    int temp = num;
    int power = 0;
    int result = 0;
    while (temp > 0)
    {
        power++;
        temp /= 10;
    }
    temp = num;
    while (temp > 0)
    {
        result += (int)pow((temp % 10), power);
        temp /= 10;
    }
    return result == num;
}
```
