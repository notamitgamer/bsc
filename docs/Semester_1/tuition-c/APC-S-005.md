# `APC-S-005.c`

## Problem Statement
!!!
Write to reverse a number.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/tuition-c/APC-S-005.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/tuition-c/APC-S-005.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>
#include <conio.h>

void main()
{
    clrscr();
    int n, reverse = 0, rem;
    printf("Enter the numner : ");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n /= 10;
    }
    printf("Reversed Number : %d", reverse);
    getch();
}
```
