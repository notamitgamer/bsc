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

/* Write a program to reverse a non-negative integer using a function. */

#include <stdio.h>

int reverse(int);

int main()
{
    int num;
    printf("Enter a non-negetive integer: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("\nOnly non-negetive integers are allowed.");
        return 1;
    }
    printf("\nReverse of the integer %d = %d", num, reverse(num));
    return 0;
}

int reverse(int num)
{
    int rev = 0;
    while (num > 0)
    {
        rev = (rev * 10) + (num % 10);
        num /= 10;
    }
    return rev;
}