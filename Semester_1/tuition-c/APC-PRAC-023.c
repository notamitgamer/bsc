/*
 * Author  : Amit Dutta <amitdutta4255@gmail.com>
 * Date    : 12 Dec 2025
 * Repo    : https://github.com/notamitgamer/bsc
 * License : MIT License (See the LICENSE file for details)
 * Copyright (c) 2025 Amit Dutta
 */

/* Pattern :
    (a) 1, -3, 5, -7, 9, -11, ... upto n times
    (b) 0, 3, 8, 15, ... upto n times
*/
/* Author - Amit Dutta, Date - 07th November, 2025 */
// File Name - amit0711202505.c (LAB), APC-PRAC-023.c (Local)

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, i, temp = 1;
    bool isNegative = true;
    printf("Enter the n : ");
    scanf("%d", &n);
    printf("\nPattern A :");
    for (i = 1; i <= n; i++)
    {
        if (!isNegative)
        {
            printf("  %d", temp * -1);
            isNegative = true;
        }
        else
        {
            printf("  %d", temp);
            isNegative = false;
        }
        temp += 2;
    }
    printf("\nPattern B :");
    for (i = 1; i <= n; i++)
    {
        temp = (i * i) - 1;
        printf("  %d", temp);
    }
    return 0;
}