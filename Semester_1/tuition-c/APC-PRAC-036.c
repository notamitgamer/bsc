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

/* Check krishnamurty number. */
/* Auhtor: Amit Dutta, Date: 20-11-2025 */

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>

int factorial(int);
int checkKrishnamurty(int);

int factorial(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int checkKrishnamurty(int n)
{
    int temp1 = n, temp2 = 0;
    while (temp1 > 0)
    {
        temp2 += factorial(temp1 % 10);
        temp1 /= 10;
    }
    if (temp2 == n)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (checkKrishnamurty(n))
        printf("\nInput %d is a Krishnamurty number.", n);
    else
        printf("\ninput %d is not a Krishnamurty number.", n);
    return 0;
}