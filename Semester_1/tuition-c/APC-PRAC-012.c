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

/* Write a program to input three integer and find out second largest */
/* Author - Amit Dutta, Date - 31st October, 2025 */

#include <stdio.h>

int main()
{
    int a, b, c, secondLargest;
    printf("Enter three number : ");
    scanf("%d %d %d", &a, &b, &c);
    if ((a < b && a > c) || (a > b && a < c))
        secondLargest = a;
    if ((b < a && b > c) || (b > a && b < c))
        secondLargest = b;
    if ((c < b && c > a) || (c > b && c < a))
        secondLargest = c;
    printf("\nSecond Largest : %d", secondLargest);
    return 0;
}