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

/* WAP to find out smallest of three numbers without using if_else block. */
/* Author - Amit Dutta, Date - 8th OCT, 2025 */
// This code has not been compiled. 
// If you find any issues, please create a new issue on GitHub regarding them.

#include <stdio.h>
int main()
{
    int a, b, c, min;
    printf("Enter three number : ");
    scanf("%d %d %d", &a, &b, &c);
    min = (a < b && a < c) ? a : (b < a && b < c) ? b
                                                  : c;
    printf("Minimum = %d", min);
    return 0;
}