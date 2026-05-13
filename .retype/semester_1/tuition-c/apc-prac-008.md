# `APC-PRAC-008.c`

## Problem Statement
!!!
WAP to multiply and divide a number by 4 without using multiplication and division operator.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/tuition-c/APC-PRAC-008.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/tuition-c/APC-PRAC-008.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>
int main()
{
    int num, multi, div;
    printf("Enter the number : ");
    scanf("%d", &num);
    multi = num << 2;
    div = num >> 2;
    printf("Multiplication : %d"
           "\nDivision : %d",
           multi, div);
    return 0;
}
```
