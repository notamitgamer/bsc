/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc
 * License    : ESAL-1.0 ( https://amit.is-a.dev/license )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

/* Write a program to check if a matrix is a sparx matrix. */
/* Author: Amit Dutta, Date: 19-11-2025 */

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