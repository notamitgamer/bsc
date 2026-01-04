/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc
 * License    : ESAL-1.0 ( https://amit.is-a.dev/license )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

/* Write a C program that includes a user-defined function named isPrime with the signature 
int isPrime(int num); The function should take an integer as a parameter and return 1 if 
the number is prime and 0 otherwise. */

#include <stdio.h>
#include <math.h>

int isPrime(int);

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (isPrime(n))
    {
        printf("\nInput %d is a Prime Number.", n);
    }
    else
    {
        printf("\nInput %d is not a Prime Number.", n);
    }

    return 0;
}

int isPrime(int n)
{
    if (n <= 1)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;

    int temp = (int)sqrt(n);
    int i;
    for (i = 3; i <= temp; i += 2)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
