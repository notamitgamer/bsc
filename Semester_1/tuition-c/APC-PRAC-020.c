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

/* Write a program to check if two number is co-prime or not */
/* Author - Amit Dutta, Date - 07th November, 2025 */
// File Name - amit0711202502.c (LAB), APC-PRAC-020.c (Local)

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>

int main()
{
    int a, b, temp, temp_a, temp_b;
    printf("Enter the a and b : ");
    scanf("%d %d", &a, &b);
    temp_a = a, temp_b = b;
    while (b > 0)
    {
        temp = a;
        a = b;
        b = temp % b;
    }
    if (a == 1)
        printf("\n%d and %d is co-prime\n", temp_a, temp_b);
    else
        printf("\n%d and %d is NOT co-prime\n", temp_a, temp_b);
    return 0;
}