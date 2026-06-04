---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> P050-SHORT.c'
description: 'Write a program to input a number and check whether it is Disarium Number or not. Note : A number is said to Disarium if sum of its digit powered by with their respective position is equal to the original number.'
---

# P050-SHORT.c

| Property | Details |
| :--- | :--- |
| **Author** | Amit Dutta (amitdutta4255@gmail.com) |
| **Date** | 12 Dec 2025 |
| **License** | [MIT](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
Write a program to input a number and check whether it is Disarium Number or not. Note : A number is said to Disarium if sum of its digit powered by with their respective position is equal to the original number.
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/P050-SHORT.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/P050-SHORT.c)

```c [P050-SHORT.c]
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
