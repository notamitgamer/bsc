/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* Make this pattern for input n no of row.
    Pattern :
    1
    2   3   
    4   5   6
    7   8   9   10
    11  12  13  14  15   
*/

#include <stdio.h>

int main()
{
    int i, j, n, temp = 1;
    printf("Enter row number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d\t", temp);
            temp++;
        }
        printf("\n");
    }
    return 0;
}
