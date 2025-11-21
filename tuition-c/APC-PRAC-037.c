/* Show all the armstrong number between a range. */
/* Author: Amit Dutta, Date: 21-11-2025 */

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>
#include <math.h>

#define lowerBound 100
#define upperBound 999

int isArmstrongNumber(int);

int isArmstrongNumber(int n)
{
    int temp = n, sum = 0, count = 0;
    while (temp > 0)
    {
        count++;
        temp /= 10;
    }
    temp = n;
    while (temp > 0)
    {
        sum += (int)pow(temp % 10, count);
        temp /= 10;
    }
    return sum == n;
}

int main()
{
    int n, i, count = 0;
    printf("Armstrong number between %d and %d are:  ", lowerBound, upperBound);
    for (i = lowerBound; i <= upperBound; i++)
        if (isArmstrongNumber(i))
        {
            printf("%d  ", i);
            count++;
        }
    printf("\n\nCount: %d\n", count);
    return 0;
}