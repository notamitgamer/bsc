# `APC-PRAC-039.c`

## Problem Statement
!!!
Write a C program to print all unique combinations of three numbers (a, b, c) such that: 1 ≤ a, b, c ≤ 30 and a² + b² = c² (Pythagorean triplets)
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/tuition-c/APC-PRAC-039.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/tuition-c/APC-PRAC-039.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>

int main()
{
    printf("a² + b² = c² :  ");
    int i, j, k, sq1, sq2, count = 0;
    for (i = 1; i <= 30; i++)
    {
        sq1 = i * i;
        for (j = i + 1; j <= 30; j++)
        {
            sq2 = j * j;
            for (k = j + 1; k <= 30; k++)
            {
                if (sq1 + sq2 == k * k)
                {
                    printf("(%d, %d, %d)  ", i, j, k);
                    count++;
                }
            }
        }
    }
    printf("\n\nCount: %d\n", count);
    return 0;
}
```
