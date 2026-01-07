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

/* Pattern :
    (a) 1, -3, 5, -7, 9, -11, ... upto n times
    (b) 0, 3, 8, 15, ... upto n times
*/
/* Author - Amit Dutta, Date - 07th November, 2025 */
// File Name - amit0711202505.c (LAB), APC-PRAC-023.c (Local)

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, i, temp = 1;
    bool isNegative = true;
    printf("Enter the n : ");
    scanf("%d", &n);
    printf("\nPattern A :");
    for (i = 1; i <= n; i++)
    {
        if (!isNegative)
        {
            printf("  %d", temp * -1);
            isNegative = true;
        }
        else
        {
            printf("  %d", temp);
            isNegative = false;
        }
        temp += 2;
    }
    printf("\nPattern B :");
    for (i = 1; i <= n; i++)
    {
        temp = (i * i) - 1;
        printf("  %d", temp);
    }
    return 0;
}