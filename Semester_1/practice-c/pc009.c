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

/* Sum of digit */
/* Author - Amit Dutta, Date - 04th November, 2025 */

#include <stdio.h>
int main()
{
    int num, sumOfDigit = 0, temp;
    printf("Enter the number : ");
    if (scanf("%d", &num) != 1)
    {
        printf("\nOnly a number is allowed.");
        return 1;
    }
    temp = num;
    while (temp > 0)
    {
        sumOfDigit += temp % 10;
        temp /= 10;
    }
    printf("\nSum of the digit %d : %d", num, sumOfDigit);
    return 0;
}