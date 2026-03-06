/*
 * Author  : Amit Dutta <amitdutta4255@gmail.com>
 * Date    : 06 Mar 2026
 * Repo    : https://github.com/notamitgamer/bsc
 * License : MIT License (See the LICENSE file for details)
 * Copyright (c) 2026 Amit Dutta
 */

/* Write a C program to find the maximum element in each row of a 2D 
array and print the result. */

#include <stdio.h>

void findMax(int row, int col, int[row][col]);

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
    findMax(row, col, arr);
    return 0;
}

void findMax(int row, int col, int arr[row][col])
{
    int i, j;
    int max;
    for (i = 0; i < row; i++)
    {
        max = arr[i][0];
        for (j = 0; j < col; j++)
        {
            if(max < arr[i][j]) {
                max = arr[i][j];
            }
        }
        printf("Max of row %d = %d\n", i, max);
    }
}
