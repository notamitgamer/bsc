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

/* Write a problem to print all the prime numbers from 1 to 300. */
/* Author - Amit Dutta, Date - 24th OCT, 2025 */
/* Let Us C, Chap - 6, Page - 101, Problem 6.1 */

// Method: Trial Division (Optimized to check up to sqrt(N))

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define LIMIT 300

int main()
{
    printf("Prime numbers from 1 to 300 :  2"); // as 2 is the only even prime number
    for (int i = 3; i <= LIMIT; i += 2)  // skipping all other even number
    {
        int n = (int)sqrt(i);
        bool prime = true;

        for (int j = 3; j <= n; j += 2)
        // an odd number is only devisable by another odd number.
        // so, skipping even number.
        {
            if (i % j == 0)
            {
                prime = false;
                break;
            }
        }
        if (prime)
        {
            printf("  %d", i);
        }
    }
    return 0;
}