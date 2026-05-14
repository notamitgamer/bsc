---
title: qn-9.c
description: "C program source code for qn-9.c"
---

# `qn-9.c`


!!! abstract "Problem Statement"
    Write a C program to find sum of all elements in a given 2D array.

## Metadata
| Property | Detail |
|---|---|
| **Author**  | Amit Dutta <amitdutta4255@gmail.com> |
| **Date**    | 06 Mar 2026 |
| **License** | MIT License (See the LICENSE file for details) |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/eduincs_exam/paper-1_05-03-2026/qn-9.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/eduincs_exam/paper-1_05-03-2026/qn-9.c){.md-button}

> 💡 You can print or save this file by opening **Raw** and using your browser.

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
