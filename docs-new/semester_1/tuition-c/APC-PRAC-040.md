---
title: APC-PRAC-040.c
description: "C program source code for APC-PRAC-040.c"
icon: lucide/file-code
---

# `APC-PRAC-040.c`


!!! abstract "Problem Statement"
    Write a C program to count how many numbers between 100 and 999 have all distinct digits (e.g., 123, 709, 981).

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-PRAC-040.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-PRAC-040.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
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
</div>
