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

/* Write a program to produce the following output :
            1
        2       3
    4       5       6
7       8       9       10
*/

/* Author - Amit Dutta, Date - 23rd OCT, 2025 */
/* Let Us C, Chap- 6, Page - 106, Qn No.: B(i) */

#include <stdio.h>
int main()
{
    int starter = 1;
    int tab = 3;
    printf("The pattern : \n");
    for (int i = 1; i <= 4; i++)
    {
        int count = 0;
        for (int k = 1; k <= tab; k++)
        {
            printf("    ");
        }
        tab = tab - 1;
        for (int j = starter; j <= 10; j++)
        {
            if (count >= i)
            {
                break;
            }
            printf("%d       ", j);
            count++;
            starter++;
        }
        printf("\n");
    }
    return 0;
}