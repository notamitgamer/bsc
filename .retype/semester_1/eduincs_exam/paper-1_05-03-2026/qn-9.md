# `Qn-9.c`

## Problem Statement
!!!
Write a C program to find sum of all elements in a given 2D array.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta <amitdutta4255@gmail.com> |
| **Date** | 06 Mar 2026 |
| **License** | MIT License (See the LICENSE file for details) |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/eduincs_exam/Paper-1_05-03-2026/Qn-9.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/eduincs_exam/Paper-1_05-03-2026/Qn-9.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>

int findSum(int row, int col, int[row][col]);

int main()
{
    int row = 3, col = 3, i, j, val = 1;
    int arr[row][col];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            arr[i][j] = val++;
        }
    }
    printf("Sum: %d", findSum(row, col, arr));
    return 0;
}

int findSum(int row, int col, int arr[row][col])
{
    int i, j;
    int sum = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
    }
    return sum;
}
```
