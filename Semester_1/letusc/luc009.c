/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
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