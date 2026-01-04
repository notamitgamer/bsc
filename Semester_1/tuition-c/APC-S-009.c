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

/* Write a program to find the upper and lower triangular matrix. */
/* Author: Amit Dutta, Date: 18-11-2025 */

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