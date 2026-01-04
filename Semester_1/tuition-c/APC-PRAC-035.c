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

/* Print all the 3 and 4 digit palindrome number. */
/* Auhtor: Amit Dutta, Date: 20-11-2025 */

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>

int palindromeCheck(int);

int palindromeCheck(int n)
{
    int temp = n, rev = 0;
    while (temp > 0)
    {
        rev = (rev * 10) + (temp % 10);
        temp /= 10;
    }
    if (rev == n)
        return 1;
    else
        return 0;
}

int main()
{
    int i;
    printf("Palindrome number of 3 and 4 digits:  ");
    for (i = 100; i <= 9999; i++)
        if (palindromeCheck(i))
            printf("%d  ", i);
    return 0;
}