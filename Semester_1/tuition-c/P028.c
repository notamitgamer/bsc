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

/* WAP to calculate factorial of a number */
/* Author - Amit Dutta, Date - 11th OCT, 2025 */

#include <stdio.h>
int main()
{
    int i = 1, num, fact = 1;
    printf("Enter the number : ");
    if (scanf("%d", &num) != 1)
    {
        printf("\nPlease enter a number.");
        return 1;
    }
    if (num == 0)
    {
        printf("\nFactorial of 0 : 1");
        return 0;
    }
    if (num < 0)
    {
        printf("\nFactorial of %d : UNDEFINED", num);
        return 0;
    }
    while (i <= num)
    {
        fact = fact * i;
        i++;
    }
    printf("Factorial of %d : %d", num, fact);
    return 0;
}