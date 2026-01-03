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

/* Print the factorial of the digits off a number */
/* Auhtor: Amit Dutta, Date: 20-11-2025 */

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>

int factorial(int);

int factorial(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main()
{
    int n, temp;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Only non-negetive number is allowed.");
        return 1;
    }
    temp = n;
    while (temp > 0)
    {
        printf("\nFactorial of %d: %d", temp % 10, factorial(temp % 10));
        temp /= 10;
    }
    return 0;
}