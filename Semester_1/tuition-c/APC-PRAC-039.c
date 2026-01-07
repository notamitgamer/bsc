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

/*
Write a C program to print all unique combinations of three numbers (a, b, c) such that:
1 ≤ a, b, c ≤ 30 and a² + b² = c² (Pythagorean triplets)
*/
/* Author: Amit Dutta, Date: 21-11-2025 */

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>

int main()
{
    printf("a² + b² = c² :  ");
    int i, j, k, sq1, sq2, count = 0;
    for (i = 1; i <= 30; i++)
    {
        sq1 = i * i;
        for (j = i + 1; j <= 30; j++)
        {
            sq2 = j * j;
            for (k = j + 1; k <= 30; k++)
            {
                if (sq1 + sq2 == k * k)
                {
                    printf("(%d, %d, %d)  ", i, j, k);
                    count++;
                }
            }
        }
    }
    printf("\n\nCount: %d\n", count);
    return 0;
}