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

/* Write a program to enter two numbers and check they are co-prime or not.
    co-prime when HCF = 1
*/
/* Author - Amit Dutta, Date - 27th OCT, 2025 */

#include <stdio.h>
int main()
{
    int a, b, temp, temp_a, temp_b;
    printf("Enter two number : ");
    scanf("%d %d", &a, &b);
    temp_a = a;
    temp_b = b;
    while (b > 0)
    {
        temp = a;
        a = b;
        b = temp % b;
    }
    if (a == 1)
    {
        printf("\n(%d, %d) is co-prime.", temp_a, temp_b);
    }
    else
    {
        printf("\n(%d, %d) is not co-prime.", temp_a, temp_b);
    }
    return 0;
}