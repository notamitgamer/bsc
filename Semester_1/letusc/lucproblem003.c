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

/* If a character is entered through the keyboard, Write a program
to determine whether the character is a capital letter, a small case letter,
a digit or a speacial symbol.
The following table shows the range of ASCII values for various characters :
    Characters              ASCII Values
    A - Z                   65 - 90
    a - z                   97 - 122
    0 - 9                   48 - 57
    special symbols         0 - 47, 58 - 64, 91 - 96, 123 - 127
*/
/* Author - Amit Dutta, Date - 02th OCT, 2025 */
/* Let Us C, Chap - 4, Page - 65, Problem 4.2 */

#include <stdio.h>
int main()
{
    char inp;
    printf("Enter one character : ");
    scanf(" %c", &inp);
    if (inp >= 64 && inp <= 90)
        printf("\nInput '%c' is a CAPITAL LETTER.", inp);
    if (inp >= 97 && inp <= 122)
        printf("\nInput '%c' is a SMALL CASE LETTER.", inp);
    if (inp >= 48 && inp <= 57)
        printf("\nInput '%c' is a DIGIT.", inp);
    if (inp >= 0 && inp <= 47 || inp >= 58 && inp <= 64 
        || inp >= 91 && inp <= 96 || inp >= 123 && inp <= 127)
        printf("\nInput '%c' is a SPECIAL SYMBOL.", inp);
    return 0;
}