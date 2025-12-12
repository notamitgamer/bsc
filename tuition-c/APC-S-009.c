/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * ======================================================================================
 * Repository: https://github.com/notamitgamer
 * Author    : Amit Dutta
 * License   : EDUCATIONAL SOURCE-AVAILABLE LICENSE (ESAL-1.0)
 * ======================================================================================
 *
 * [ IMPORTANT LEGAL NOTICE ]
 *
 * 1. PROPRIETARY STATUS:
 * This software ("The Software") is the intellectual property of Amit Dutta.
 * It is NOT "Open Source" in the traditional sense. It is "Source-Available"
 * for educational observation only.
 *
 * 2. ACADEMIC INTEGRITY & RESTRICTION:
 * The use of this code, in whole or in part, for the purpose of submitting
 * academic assignments, projects, lab reports, or examinations at
 * WEST BENGAL STATE UNIVERSITY (WBSU) or any other educational institution
 * is STRICTLY PROHIBITED.
 *
 * >>> VIOLATION OF THIS CLAUSE WILL BE REPORTED AS ACADEMIC MISCONDUCT. <<<
 *
 * 3. PERMISSIONS:
 * You are granted a revocable license to:
 * - Read and study the code to understand algorithms.
 * - Compile and run the code locally for personal testing.
 *
 * 4. NO WARRANTY:
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND.
 *
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