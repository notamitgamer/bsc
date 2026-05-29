---
title: pc-ip-07.c
description: "C program source code for pc-ip-07.c"
icon: lucide/file-code
---

# `pc-ip-07.c`


!!! abstract "Problem Statement"
    Question 7: Write a program to swap two numbers using pointers using user-defined function.

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 05 Jan 2026 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/practice-c/pc-ip-07.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/practice-c/pc-ip-07.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>

void swap(int *, int *);

int main()
{
    int a, b;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);
    printf("\nBefore Swap: ");
    printf("\nA = %d, Loc: %p", a, &a);
    printf("\nB = %d, Loc: %p", b, &b);
    swap(&a, &b);
    printf("\nAfter Swap: ");
    printf("\nA = %d, Loc: %p", a, &a);
    printf("\nB = %d, Loc: %p", b, &b);
    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
```
</div>
