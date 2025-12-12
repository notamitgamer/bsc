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