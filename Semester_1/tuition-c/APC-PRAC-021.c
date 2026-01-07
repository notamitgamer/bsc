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

/* Write a program to check special number (sum of digit + product of digit = original number) */
/* Author - Amit Dutta, Date - 07th November, 2025 */
// File Name - amit0711202503.c (LAB), APC-PRAC-021.c (Local)

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>

int main()
{
    int num, temp, sumOfDigit = 0, productOfDigit = 1;
    printf("Enter the number to check if it is a special number : ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0)
    {
        sumOfDigit += temp % 10;
        productOfDigit *= temp % 10;
        temp /= 10;
    }
    temp = sumOfDigit + productOfDigit;
    if (num == temp)
        printf("\nInput %d is a special number.", num);
    else
        printf("\nInput %d is not a special number.", num);
    return 0;
}