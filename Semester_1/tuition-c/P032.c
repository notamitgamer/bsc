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

/* WAP to input a number and check whether it is a Niven number
or not. (When a number is divisible by its sum of digit) e.g. : n = 126*/
/* Author - Amit Dutta, Date - 11th OCT, 2025 */

#include <stdio.h>
int main()
{
    int n, temp, sod = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0)
    {
        sod = sod + (temp % 10);
        temp = temp / 10;
    }
    if (n % sod == 0)
        printf("\nIt is Niven number.");
    else
        printf("\nIt is not a Niven number.");
    return 0;
}