/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc/tree/main/letusc
 * License    : ESAL-1.0 ( https://aranag.site/license )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

/* Write a program to print out all Armstrong numbers between 100
and 500. If sum of cubes of each digit of the number is equal to the
number itself, then the number is called an Armstrong number. For
example, 153 = (1 * 1 * 1) + (5 * 5 * 5) + (3 * 3 * 3) */
/* Author - Amit Dutta, Date - 7th OCT, 2025 */
/* Let Us C, Chap- 5, Page - 87, Qn No.: B(b) */

#include <stdio.h>
#include <math.h>
int main()
{
    int num = 100, temp1, temp2, res;
    printf("Armstrong numbers between 100 and 500 :");
    while (num <= 500)
    {
        temp1 = num;
        res = 0;
        while (temp1 != 0)
        {
            temp2 = temp1 % 10;
            res = res + pow(temp2, 3);
            temp1 = temp1 / 10;
        }
        if (num == res)
            printf("  %d", num);
        num++;
    }
    return 0;
}