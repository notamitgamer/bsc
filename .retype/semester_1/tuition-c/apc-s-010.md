# `APC-S-010.c`

## Problem Statement
!!!
Write a program to input a new element at a specific position of an array. a[] = {4, 5, 2, 10, 6, 9, 8}, newItem = 7, position = 3
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/tuition-c/APC-S-010.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/tuition-c/APC-S-010.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>

int main()
{
    int a[8] = {4, 5, 2, 10, 6, 9, 8};
    int i;

    printf("Elemnts of the array:  ");
    for (i = 0; i <= 6; i++)
        printf("%d  ", a[i]);

    printf("\nMethod 1:  ");
    for (i = 7; i >= 4; i--)
        a[i] = a[i - 1];
    a[3] = 7;
    for (i = 0; i <= 7; i++)
        printf("%d  ", a[i]);

    // another method
    printf("\nMethod 2:  ");
    int b[8] = {4, 5, 2, 10, 6, 9, 8};
    int temp1 = 7;
    for (i = 3; i <= 7; i++)
    {
        int temp2 = b[i];
        b[i] = temp1;
        temp1 = temp2;
    }
    for (i = 0; i <= 7; i++)
        printf("%d  ", b[i]);

    return 0;
}
```
