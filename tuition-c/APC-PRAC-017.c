/* Write a program to check perfect number. */
/* Author - Amit Dutta, Date - 06th November, 2025 */
// File Name - amit0611202503.c (LAB), APC-PRAC-017.c (Local)

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>

int main()
{
    int num, i, divisibleSum = 0;
    printf("Enter a number : ");
    scanf("%d", &num);
    for (i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            divisibleSum += i;
        }
    }
    if (divisibleSum == num)
        printf("\nInput %d ia a Perfect Number.", num);
    else
        printf("\nInput %d is NOT a Perfect Number.", num);
    return 0;
}