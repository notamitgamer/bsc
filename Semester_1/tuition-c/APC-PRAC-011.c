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

/* Write a program to input positive number and check whether the number is
perfect square or not. If the number is negetive then display appropriate message */
/* Author - Amit Dutta, Date - 31st October, 2025 */

#include <stdio.h>
#include <math.h>

int main()
{
    int num, temp;
    printf("Enter the number : ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("\nYou entered a negetive number.");
        return 1;
    }
    temp = (int)sqrt(num);
    if (temp * temp == num)
    {
        printf("\nInput %d is a perfect square number.", num);
        return 0;
    }
    else
        printf("\nInput %d is not a perfect square number.", num);
    return 0;
}