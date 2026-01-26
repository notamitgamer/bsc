/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* Pattern :
    1   2   3   4   5
    6   7   8   9
    10  11  12
    13  14
    15
for n = 5
*/


#include <stdio.h>
int main()
{
    int i, j, n, temp = 1;
    printf("Enter n : ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
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