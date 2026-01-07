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

/* Write a program to accept a number and check whether the number is twisted prime or not */
/* Author - Amit Dutta, Date - 07th November, 2025 */
// File Name - amit0711202504.c (LAB), APC-PRAC-022.c (Local)

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool checkPrime(int num)
{
    if (num < 2)
        return false;
    if (num == 2)
        return true;
    if (num % 2 == 0)
        return false;
    int limit = (int)sqrt(num);
    for (int i = 3; i <= limit; i += 2)
        if (num % i == 0)
            return false;
    return true;
}

int reverseNumber(int num)
{
    int reverse = 0;
    while (num > 0)
    {
        reverse = (reverse * 10) + (num % 10);
        num /= 10;
    }
    return reverse;
}

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    if (!checkPrime(num))
    {
        printf("\nInput %d is not a prime number.", num);
        return 0;
    }
    if (checkPrime(reverseNumber(num)))
        printf("\nInput %d is a twisted prime number.", num);
    else
        printf("\nInput %d is not a twisted prime number.", num);
    return 0;
}