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

/* WAP to perform addition of first n natural numbers. sum = 1 + 2 + 3 + ... */
/* Author - Amit Dutta, Date - 11th OCT, 2025 */

#include <stdio.h>
int main()
{
    int num, i = 0, result = 0;
    printf("Enter the value for n : ");
    if (scanf("%d", &num) != 1)
    {
        printf("\nPlease enter a number.");
        return 1;
    }
    if (num < 1)
    {
        printf("\nPlease enter a positive number.");
        return 1;
    }
    while (i <= num)
    {
        result = result + i;
        i++;
    }
    printf("\nResult : %d", result);
    return 0;
}