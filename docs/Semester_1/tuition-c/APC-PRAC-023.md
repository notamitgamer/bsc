---
label: APC-PRAC-023.c
description: "C program source code for APC-PRAC-023.c"
---

# `APC-PRAC-023.c`

## Problem Statement
!!!
Pattern : (a) 1, -3, 5, -7, 9, -11, ... upto n times (b) 0, 3, 8, 15, ... upto n times
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta <amitdutta4255@gmail.com> |
| **Date** | 12 Dec 2025 |
| **License** | MIT License (See the LICENSE file for details) |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/tuition-c/APC-PRAC-023.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/tuition-c/APC-PRAC-023.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, i, temp = 1;
    bool isNegative = true;
    printf("Enter the n : ");
    scanf("%d", &n);
    printf("\nPattern A :");
    for (i = 1; i <= n; i++)
    {
        if (!isNegative)
        {
            printf("  %d", temp * -1);
            isNegative = true;
        }
        else
        {
            printf("  %d", temp);
            isNegative = false;
        }
        temp += 2;
    }
    printf("\nPattern B :");
    for (i = 1; i <= n; i++)
    {
        temp = (i * i) - 1;
        printf("  %d", temp);
    }
    return 0;
}
```
