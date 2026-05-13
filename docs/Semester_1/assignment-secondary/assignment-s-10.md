---
label: assignment-s-10.c
description: "C program source code for assignment-s-10.c"
---

# `assignment-s-10.c`

## Problem Statement
!!!
Write a program to swap two numbers using pointers (user-defined function).
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 17 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/assignment-secondary/assignment-s-10.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/assignment-secondary/assignment-s-10.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>

void swap(int *, int *);

int main()
{
    int a, b;
    printf("Enter value for a and b: ");
    scanf("%d %d", &a, &b);
    printf("\nBefore Swap: ");
    printf("\na = %d,\tAddress: %u", a, &a);
    printf("\nb = %d,\tAddress: %u", b, &b);
    swap(&a, &b);
    printf("\nAfter Swap: ");
    printf("\na = %d,\tAddress: %u", a, &a);
    printf("\nb = %d,\tAddress: %u", b, &b);
    return 0;
}

void swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
```
