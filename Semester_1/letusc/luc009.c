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

/* Two numbers are input through the keyboard into two locations
C and D. Write a program to interchange the contents of C and D. */
/* Author - Amit Dutta, Date - 30th SEP, 2025 */
/* Let Us C, Chap - 2, Page - 37, Qn No.: G(d) */

#include <stdio.h>
int main()
{
    double a, b;
    printf("Enter the two number A and B : ");
    scanf("%lf %lf", &a, &b);
    printf("\nBefore Interchange : ");
    printf("\nA = %g (Memory location = %p)", a, &a);
    printf("\nB = %g (Memory location = %p)", b, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nAfter Interchange :");
    printf("\nA = %g (Memory location = %p)", a, &a);
    printf("\nB = %g (Memory location = %p)", b, &b);
    return 0;
}