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