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

/* Write a program to print the sum of two matrix as input given by the user. */
/* Author: Amit Dutta, Date: 18-11-2025 */

#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int a[rows][cols], b[rows][cols], c[rows][cols];

    printf("Enter the elements of matrix A (%d x %d): \n", rows, cols);
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
        {
            printf("Position %d%d: ", i, j);
            scanf("%d", &a[i][j]);
        }
    printf("\nMatrix A: \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            printf("%d  ", a[i][j]);
        printf("\n");
    }

    printf("\nEnter the elements of matrix B(%d x %d): \n", rows, cols);
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
        {
            printf("Position %d%d: ", i, j);
            scanf("%d", &b[i][j]);
        }
    printf("\nMatrix B: \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            printf("%d  ", b[i][j]);
        printf("\n");
    }

    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            c[i][j] = a[i][j] + b[i][j];

    printf("\nResult Matrix: \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            printf("%d  ", c[i][j]);
        printf("\n");
    }

    return 0;
}