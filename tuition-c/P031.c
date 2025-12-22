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

/* Find the sum of the series */
/* Author - Amit Dutta, Date - 11th OCT, 2025 */

#include <stdio.h>
#include <math.h>

int main()
{
    double a, res, n;
    int i;

    // s = (a ^ 2) + (a ^ 2 / 2) + (a ^ 2 / 3) + ... + (a ^ 2 / 10)
    {
        res = 0, i = 1;
        printf("--- s = (a ^ 2) + (a ^ 2 / 2) + (a ^ 2 / 3) + ... + (a ^ 2 / 10) ---");
        printf("\nEnter the number : ");
        scanf("%lf", &a);
        while (i <= 10)
        {
            res = res + ((a * a) / i);
            i++;
        }
        printf("S = %g", res);
    }

    // s = 1 + (2 ^ 2 / a) + (3 ^ 3 / a ^ 2) + ... + n
    {
        res = 0, i = 0;
        printf("\n--- // s = 1 + (2 ^ 2 / a) + (3 ^ 3 / a ^ 2) + ... + n ---");
        printf("\nEnter the value for a and n : ");
        scanf(" %lf %lf", &a, &n);
        while (i <= n - 1)
        {
            res = res + (pow(i + 1, i + 1) / pow(a, i));
            i++;
        }
        printf("S = %g", res);
    }

    return 0;
}