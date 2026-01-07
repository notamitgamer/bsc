/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc
 * License    : ESAL-1.0 ( https://esal.amit.is-a.dev/ )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

/* Write a C program that includes a user-defined function named isPerfect with the signature 
int isPerfect(int num);. A perfect number is a positive integer that is equal to the sum of 
its proper divisors, excluding itself. For example, 28 is a perfect number because the sum 
of its divisors (1, 2, 4, 7, 14) equals 28. */

#include <stdio.h>

int isPerfect(int);

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (isPerfect(n))
    {
        printf("\nInput %d is a Perfect Number.", n);
    }
    else
    {
        printf("\nInput %d is not a Perfect Number.", n);
    }
    return 0;
}

int isPerfect(int n)
{
    if (n <= 1)
        return 0;
    int temp = 1;
    int i;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            temp += i;
        }
    }
    return temp == n;
}
