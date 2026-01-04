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

/* Pattern :
    1
    1   2
    3   5   8
    13  21  34  55
    89  144 233 377 610
for n = 5
*/

#include <stdio.h>
int main()
{
    int i, j, n;
    long long temp1 = 0, temp2 = 1, temp3;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("1\n");
    for (i = 2; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            temp3 = temp1 + temp2;
            printf("%lld\t", temp3);
            temp1 = temp2;
            temp2 = temp3;
        }
        printf("\n");
    }
    return 0;
}