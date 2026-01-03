/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc/tree/main/tuition-c
 * License    : ESAL-1.0 ( https://aranag.site/license )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

/* WAP to swap two integer variable without using Third variable. */
/* Author - Amit Dutta, Date - 19th SEP, 2025 */

#include <stdio.h>
int main()
{
    int a = 4, b = 6;
    printf("Before swap : A = %d and B = %d", a, b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("\nAfter swap  : A = %d and B = %d", a, b);
    return 0;
}