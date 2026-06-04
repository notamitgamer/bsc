---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> assignment-s-23.c'
description: 'Write a program to add two complex numbers using structures.'
---

# assignment-s-23.c

| Property | Details |
| :--- | :--- |
| **Author** | Amit Dutta (amitdutta4255@gmail.com) |
| **Date** | 18 Jan 2026 |
| **License** | [MIT](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
Write a program to add two complex numbers using structures.
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-secondary/assignment-s-23.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/assignment-secondary/assignment-s-23.c)

```c [assignment-s-23.c]
#include <stdio.h>
#include <stdlib.h>

struct complex_number
{
    double real;
    double imaginary;
};

int main()
{
    struct complex_number a, b;
    printf("Enter the 1st complex number in this format (a+bi): ");
    scanf("%lf+%lfi", &a.real, &a.imaginary);
    printf("Enter the 2nd complex number in this format (a+bi): ");
    scanf("%lf+%lfi", &b.real, &b.imaginary);

    printf("Result = %-2g + %-2.2g", a.real + b.real, a.imaginary + b.imaginary);
    return 0;
}
```
