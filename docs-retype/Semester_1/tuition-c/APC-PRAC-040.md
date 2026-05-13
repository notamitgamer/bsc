---
label: APC-PRAC-040.c
description: "C program source code for APC-PRAC-040.c"
---

# `APC-PRAC-040.c`

## Problem Statement
!!!
Write a C program to count how many numbers between 100 and 999 have all distinct digits (e.g., 123, 709, 981).
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/tuition-c/APC-PRAC-040.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/tuition-c/APC-PRAC-040.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>

int main()
{
    int i, count = 0, n1, n2, n3;
    printf("Distinct numbers between 100 and 999: ");
    for (i = 100; i <= 999; i++)
    {
        n1 = i / 100;
        n2 = (i % 100) / 10;
        n3 = i % 10;
        if (n1 != n2 && n2 != n3 && n1 != n3)
        {
            printf("%d  ", i);
            count++;
        }
    }
    printf("\nCount: %d\n", count);
    return 0;
}
```
