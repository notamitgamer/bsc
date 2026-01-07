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

/* Write a program to display all numbers between lb (lower bound) and up (upper bound)
which ends with digit 7 or divisible by 7. */
/* Author - Amit Dutta, Date - 06th November, 2025 */
// File Name - amit0611202501.c (LAB), APC-PRAC-015.c (Local)

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>

int main()
{
    int lb, ub, i;
    printf("Enter the lb, ub : ");
    scanf("%d %d", &lb, &ub);
    printf("\nEnds with 7 :");
    for (i = lb; i <= ub; i++)
    {
        if (i % 10 == 7)
        {
            printf("  %d", i);
        }
    }
    printf("\nDivisible by 7 :");
    for (i = lb; i <= ub; i++)
    {
        if (i % 7 == 0)
        {
            printf("  %d", i);
        }
    }
    return 0;
}