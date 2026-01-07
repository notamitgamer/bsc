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

/* A year is entered through the keyboard, write a program to
determine whether the year is leap or not. Use the logical operators
&& and || . */
/* Author - Amit Dutta, Date - 02th OCT, 2025 */
/* Let Us C, Chap - 4, Page - 64, Problem 4.1 */

#include <stdio.h>
int main()
{
    int year;
    printf("Enter year : ");
    scanf("%d", &year);
    if (year % 4 == 0 && year & 100 != 0 || year % 400 == 0)
        printf("\nYear %d is a leapyear.", year);
    else
        printf("\nYear %d is not a leapyear.", year);
    return 0;
}