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

/* Make this pattern for input n.
    Pattern :
    1
    2   1
    3   2   1
    4   3   2   1
    5   4   3   2   1
*/
/* Author - Amit Dutta, Date - 01st NOVEMBER, 2025 */

#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Enter n : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = i; j >= 1; j--)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
}