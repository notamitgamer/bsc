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

/* Write a program to print all the factors of a postive integer */
/* Author - Amit Dutta, Date - 27th OCT, 2025 */

#include <stdio.h>

int main()
{
    int num, i;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("\nFactors of %d : ", num);
    for (i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            printf("  %d", i);
        }
    }
    return 0;
}