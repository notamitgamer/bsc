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

/* Write a program to recieve an integer and find its octal equivalent.
(Hint : To obtain octal equivalent of an integer, Divide it continuously
by 8 till dividend does not become zero, then write the remainders
obtained in reverse derection.) */
/* Author - Amit Dutta, Date - 8th OCT, 2025 */
/* Let Us C, Chap- 5, Page - 87, Qn No.: B(e) */

// using array

#include <stdio.h>
int main()
{
    int octal[20], decimal, index = 0, temp, rem;
    printf("Enter the decimal number : ");
    scanf("%d", &decimal);
    temp = decimal;
    while (temp != 0)
    {
        rem = temp % 8;
        temp = temp / 8;
        octal[index] = rem;
        index++;
    }
    printf("\nDeciaml %d to octal : ", decimal);
    while ((index - 1) >= 0)
    {
        printf("%d", octal[index - 1]);
        index--;
    }
    return 0;
}