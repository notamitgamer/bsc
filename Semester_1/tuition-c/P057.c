/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* WAP to display the series using user defined method.
    0, 7, 26, 63, ... upto n terms using void series(int n)
*/

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>

void series(int n)
{
    int i;
    printf("\nSeries:  ");
    for (i = 1; i <= n; i++)
        printf("%d  ", (i * i * i) - 1);
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    series(n);
    return 0;
}