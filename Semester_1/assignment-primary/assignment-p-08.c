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

/* Write a C program that includes a user-defined function named countSetBits with the
signature int countSetBits(int num);. The function should count and return the number of
set bits (1s) in the binary representation of the given number. */

#include <stdio.h>

int countSetBits(int);

int main()
{
    int num, result;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (result = countSetBits(num))
    {
        printf("\nNumber of set bits in %d: %d", num, result);
    }
    else
    {
        printf("\nThere is no set bits in %d", num);
    }
    return 0;
}

int countSetBits(int num)
{
    int count = 0;
    if (num < 0)
    {
        printf("\nOnly positive numbers are allowed to maintain consistency. \nUsing absolute value %d", -num);
        num = -num;
    }
    while (num > 0)
    {
        if (num & 1)
        {
            count++;
        }
        num >>= 1;
        /*
        Another method to do the above bitwise calculation...
        if(num % 2 == 1) {
            count++;
        }
        num /= 2;
        */
    }
    return count;
}