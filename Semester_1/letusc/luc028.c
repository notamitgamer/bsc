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

/* Write a program to print all the ASCII values and their equivalent
characters using a while loop. The ASCII may vary from 0 to 255. */
/* Author - Amit Dutta, Date - 7th OCT, 2025 */
/* Let Us C, Chap- 5, Page - 87, Qn No.: B(a) */

#include <stdio.h>
int main()
{
    int i = 0;
    printf("ASCII Value\tCharacter");
    printf("\n-----------\t---------\n");
    while (i <= 255)
    {
        printf("%d.\t%c\n\n", i, i);
        i++;
    }
    return 0;
}