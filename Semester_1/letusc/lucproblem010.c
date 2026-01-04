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

/* Write a program to generate all combination of 1, 2 and 3 using for loop. */
/* Author - Amit Dutta, Date - 24th OCT, 2025 */
/* Let Us C, Chap - 6, Page - 103, Problem 6.3 */

#include <stdio.h>

int main()
{
    printf("Combination of 1, 2 and 3 :");

    // for 1 digit numbers
    for (int i = 1; i <= 3; i++)
    {
        printf("  %d", i);
    }

    // for 2 digit numbers
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("  %d%d", i, j);
        }
    }

    // for 3 digit numbers
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            for (int k = 1; k <= 3; k++)
            {
                printf("  %d%d%d", i, j, k);
            }
        }
    }

    // for 4 digit numbers
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            for (int k = 1; k <= 3; k++)
            {
                for (int l = 1; l <= 3; l++)
                {
                    printf("  %d%d%d%d", i, j, k, l);
                }
            }
        }
    }

    return 0;
}