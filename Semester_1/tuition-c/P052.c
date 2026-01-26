/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* Print the sum of this series for upto n element.
    Series: 1 + (1 + 2) + (1 + 2 + 3) + (1 + 2 + 3 + 4) + ... + (1 + 2 + 3 + ... + n) */

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>

int main()
{
    int n, sum = 0, temp = 0, i;
    printf("Enter the n : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        temp += i;
        sum += temp;
    }
    printf("%d", sum);
    return 0;
}