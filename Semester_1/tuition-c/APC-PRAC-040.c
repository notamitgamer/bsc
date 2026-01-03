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

/*
Write a C program to count how many numbers between 100 and 999 have all distinct digits (e.g., 123, 709, 981).
*/
/* Author: Amit Dutta, Date: 21-11-2025 */

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>

int main()
{
    int i, count = 0, n1, n2, n3;
    printf("Distinct numbers between 100 and 999: ");
    for (i = 100; i <= 999; i++)
    {
        n1 = i / 100;
        n2 = (i % 100) / 10;
        n3 = i % 10;
        if (n1 != n2 && n2 != n3 && n1 != n3)
        {
            printf("%d  ", i);
            count++;
        }
    }
    printf("\nCount: %d\n", count);
    return 0;
}