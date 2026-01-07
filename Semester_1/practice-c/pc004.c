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
                    5   4   3   2   1
                4   3   2   1
            3   2   1
        2   1
    1
for n = 5
*/

#include <stdio.h>
int main()
{
    int i, j, k, n;
    printf("Enter n : ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i - 1; j++)
        {
            printf("\t");
        }
        for (k = i; k >= 1; k--)
        {
            printf("%d\t", k);
        }
        printf("\n");
    }
    return 0;
}