/*
 * Author  : Amit Dutta <amitdutta4255@gmail.com>
 * Date    : 12 Dec 2025
 * Repo    : https://github.com/notamitgamer/bsc
 * License : MIT License (See the LICENSE file for details)
 * Copyright (c) 2025 Amit Dutta
 */

/* Print all pattern */

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>

int main()
{
    int i, j, temp;

    printf("\n\nPattern 1 : \n\n");
    /*
    9   9   9   9   9
    7   7   7   7   7
    5   5   5   5   5
    3   3   3   3   3
    1   1   1   1   1
    */
    temp = 9;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%d  ", temp);
        }
        printf("\n");
        temp -= 2;
    }

    // Another method print above pattern
    printf("\n\nPattern 1 : \n\n");
    for (i = 9; i >= 1; i -= 2)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%d  ", i);
        }
        printf("\n");
    }

    printf("\n\nPattern 2 : \n\n");
    /*
    1   2   3   4   5
    1   2   3   4   5
    1   2   3   4   5
    */
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%d  ", j);
        }
        printf("\n");
    }

    printf("\n\nPattern 3 : \n\n");
    /*
    5   4   3   2   1
    5   4   3   2   1
    */
    for (i = 1; i <= 2; i++)
    {
        for (j = 5; j >= 1; j--)
        {
            printf("%d  ", j);
        }
        printf("\n");
    }

    printf("\n\nPattern 4 : \n\n");
    /*
    1   2   3   4
    5   6   7   8
    9   10  11  12
    */
    temp = 1;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            printf("%d  ", temp);
            temp++;
        }
        printf("\n");
    }

    printf("\n\nPattern 5 : \n\n");
    /*
    1   2   3   4
    4   8   12  16
    1   2   3   4
    4   8   12  16
    1   2   3   4
    */
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            if (i % 2 == 0)
                printf("%d  ", j * 4);
            else
                printf("%d  ", j);
        }
        printf("\n");
    }

    printf("\n\nPattern 6 : \n\n");
    /*
    1
    2   4
    3   5   7
    6   8   10  12
    9   11  13  15  17
    */
    int odd = 1, even = 2;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("%d  ", even);
                even += 2;
            }
            else
            {
                printf("%d  ", odd);
                odd += 2;
            }
        }
        printf("\n");
    }

    printf("\n\nPattern 7 : \n\n");
    /*
    1   2   3   4   5
    6   7   8   9
    10  11  12
    13  14
    15
    */
    temp = 1;
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d  ", temp);
            temp++;
        }
        printf("\n");
    }

    return 0;
}