/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* Pattern :
    1
    1   2
    1   2   3
    1   2   3   4
    1   2   3   4   5
for n = 5
*/
/* Author - Amit Dutta, Date - 02nd October, 2025 */

#include <stdio.h>
int main()
{
    int i, j, num;
    printf("Enter n : ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
}