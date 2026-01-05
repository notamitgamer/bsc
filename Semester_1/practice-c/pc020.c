/*
 * ======================================================================================
 * COPYRIGHT (C) 2026 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc
 * License    : ESAL-1.0 ( https://aranag.site/license )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

/* ps3 */

#include <stdio.h>

int series(int);

int main()
{
    int n;
    printf("Enter the n: ");
    scanf("%d", &n);
    printf("\nSum of the series: %d", series(n));
    return 0;
}

int series(int n)
{
    int i, result = 0;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            result -= i;
        }
        else
        {
            result += i;
        }
    }
    return result;
}