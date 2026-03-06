/*
 * Author  : Amit Dutta <amitdutta4255@gmail.com>
 * Date    : 06 Mar 2026
 * Repo    : https://github.com/notamitgamer/bsc
 * License : MIT License (See the LICENSE file for details)
 */

/* Write a C program to find the transpose of a given square matrix using 2D array.
The transpose of a matrix is obtained by swapping the rows and columns of the matrix */

#include <stdio.h>

void transpose(int row, int col, int[row][col]);
void print(int row, int col, int[row][col]);

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
    printf("Before Transpose: \n");
    print(row, col, arr);
    transpose(row, col, arr);
    return 0;
}

void transpose(int row, int col, int arr[row][col])
{
    int i, j;
    int res[col][row];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            res[j][i] = arr[i][j];
        }
    }
    printf("\nAfter Transpose: \n");
    print(row, col, res);
}

void print(int row, int col, int arr[row][col])
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
}