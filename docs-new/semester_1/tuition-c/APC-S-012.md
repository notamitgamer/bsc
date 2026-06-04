---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> APC-S-012.c'
description: 'Write a program to check if a matrix is a sparx matrix.'
---

# APC-S-012.c

| Property | Details |
| :--- | :--- |
| **Author** | Amit Dutta (amitdutta4255@gmail.com) |
| **Date** | 12 Dec 2025 |
| **License** | [MIT](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
Write a program to check if a matrix is a sparx matrix.
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-S-012.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-S-012.c)

```c [APC-S-012.c]
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
