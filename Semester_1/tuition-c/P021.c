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

/* WAP to input a positive number and check if it is a perfect
square number or not. */
/* Author - Amit Dutta, Date - 8th OCT, 2025 */
// This code has not been compiled. 
// If you find any issues, please create a new issue on GitHub regarding them.

#include <stdio.h>
#include <math.h>
int main()
{
    int n, temp;
    double sr;
    printf("Enter the number : ");
    scanf("%d", &n);
    sr = sqrt(n);
    temp = (int)sr;
    if (temp * temp == n)
        printf("\nThis is a perfect square.");
    else
        printf("\nThis is not a perfect square.");
    return 0;
}