---
label: APC-S-012.c
description: "C program source code for APC-S-012.c"
---

# `APC-S-012.c`

## Problem Statement
!!!
Write a program to check if a matrix is a sparx matrix.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/tuition-c/APC-S-012.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/tuition-c/APC-S-012.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>

int main()
{
    int i, j, row, col, count = 0;

    printf("Enter the number of rows and columns in the matrix: ");
    scanf("%d %d", &row, &col);

    int matrix[row][col];

    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
        {
            printf("Postion %d%d: ", i, j);
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 0)
                count++;
        }

    printf("\nEntered Matrix: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            printf("%d  ", matrix[i][j]);
        printf("\n");
    }

    if (count > (row * col) / 2)
        printf("\nEntered matrix is a Sparx Matrix.");
    else
        printf("\nEntered matrix is not a Sparx Matrix");
    return 0;
}
```
