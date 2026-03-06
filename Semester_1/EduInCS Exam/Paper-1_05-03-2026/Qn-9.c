/*
 * Author  : Amit Dutta <amitdutta4255@gmail.com>
 * Date    : 06 Mar 2026
 * Repo    : https://github.com/notamitgamer/bsc
 * License : MIT License (See the LICENSE file for details)
 * Copyright (c) 2026 Amit Dutta
 */

/* Write a C program to find sum of all elements in a given 2D array. */

#include <stdio.h>

int findSum(int row, int col, int[row][col]);

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
    printf("Sum: %d", findSum(row, col, arr));
    return 0;
}

int findSum(int row, int col, int arr[row][col])
{
    int i, j;
    int sum = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
    }
    return sum;
}