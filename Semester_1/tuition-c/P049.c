/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* Make this pattern for input n no of row.
    Pattern :
    #
    @   @
    #   #   #
    @   @   @   @
    #   #   #   #   #
    */

#include <stdio.h>

int main()
{
    int i, j, n;
    char a = '#', b = '@';
    printf("Enter row number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
                printf("%c\t", b);
            else
                printf("%c\t", a);
        }
        printf("\n");
    }
    return 0;
}
