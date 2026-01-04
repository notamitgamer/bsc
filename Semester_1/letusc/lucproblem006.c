/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc
 * License    : ESAL-1.0 ( https://amit.is-a.dev/license )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

/* Write a program to find the factorial value of any number entered
through the keyboard. */
/* Author - Amit Dutta, Date - 07th OCT, 2025 */
/* Let Us C, Chap - 5, Page - 84, Problem 5.2 */

#include <stdio.h>
int main()
{
    int num, i = 1;
    long long fact = 1;
    printf("Enter the number : ");
    // checking if the input is valid or not
    if (scanf("%d", &num) != 1)
    {
        printf("\nPlease enter a number.");
        return 1;
    }
    // result for the negetive input
    if (num < 0)
    {
        printf("\nFactorial of %d : Undefined", num);
        return 1;
    }
    //  Hard codded result for input '0' (zero)
    if (num == 0)
    {
        printf("\nFactorial of 0 : 1");
        return 0;
    }
    // calculating result
    while (i <= num) {
        fact = fact * i;
        i++;
    }
    printf("\nFactorial of %d : %d", num, fact);
    return 0;
}