---
label: APC-S-009.c
description: "C program source code for APC-S-009.c"
---

# `APC-S-009.c`

## Problem Statement
!!!
Write a program to find the upper and lower triangular matrix.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta <amitdutta4255@gmail.com> |
| **Date** | 12 Dec 2025 |
| **License** | MIT License (See the LICENSE file for details) |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/tuition-c/APC-S-009.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/tuition-c/APC-S-009.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>

int main()
{
    int i, j, rows, cols;
    printf("\nEnter the number of rows and columns : ");
    scanf("%d %d", &rows, &cols);

    if (rows != cols)
    {
        printf("Triangular matrix definitions only apply to square matrices (rows == columns).\n");
        return 1;
    }

    int matrix[rows][cols];

    printf("Enter the elements of matrix (%d x %d): \n", rows, cols);
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
        {
            printf("Position %d%d: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    printf("\nMatrix: \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            printf("%d  ", matrix[i][j]);
        printf("\n");
    }

    printf("\nUpper triangular of the Matrix: \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (j >= i)
                printf("%d  ", matrix[i][j]);
            else
                printf("~  ");
        }
        printf("\n");
    }

    printf("\nLower triangular of the Matrix: \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (j <= i)
                printf("%d  ", matrix[i][j]);
            else
                printf("~  ");
        }
        printf("\n");
    }

    return 0;
}
```
