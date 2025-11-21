/*
Print all combinations of two two-digit numbers such that the sum of digits of both numbers is equal.
Example: 23 and 41 → (2+3) = 5, (4+1) = 5.
*/
/* Author: Amit Dutta, Date: 21-11-2025 */

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>

int main()
{
    printf("Combinations of two two-digit numbers such that the sum of digits of both numbers is equal:  ");
    int i, j, sum1, sum2, count = 0;
    for (i = 10; i <= 99; i++)
    {
        sum1 = (i % 10) + (i / 10);
        for (j = i + 1; j <= 99; j++)
        {
            sum2 = (j % 10) + (j / 10);
            if (sum1 == sum2)
            {
                printf("(%d, %d)  ", i, j);
                count++;
            }
        }
    }
    printf("\nCount: %d\n", count);
    return 0;
}