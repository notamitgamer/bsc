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

/* WAP to input an int number and display the product of the successors
of even digits of the number entered by user. */
/* Author - Amit Dutta, Date - 18th OCT, 2025 */

#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n, res = 1, temp;
    bool status = false;
    printf("Enter the number : ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0)
    {
        if ((temp % 10) % 2 == 0)
        {
            res *= (temp % 10) + 1;
            status = true;
        }
        temp /= 10;
    }
    if (!status)
        printf("\nThere is no even digits.");
    else
        printf("\nThe product of the successors of even digits of the number %d is : %d", n, res);
    return 0;
}