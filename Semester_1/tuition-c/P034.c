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

/* Get sum of even position digit and odd position digit */
/* Counting starts from the rightmost digit as position 1 (Odd). */
/* Author - Amit Dutta, Date - 18th OCT, 2025 */

#include <stdio.h>
int main()
{
    int inp, temp, index = 1, even = 0, odd = 0;
    printf("Enter the numebr : ");
    scanf("%d", &inp);
    temp = inp;
    while (temp > 0)
    {
        if (index % 2 == 0)
            even += temp % 10;
        else
            odd += temp % 10;
        temp /= 10;
        index++;
    }
    printf("\nSum of even position digits : %d"
           "\nSum of odd position digits : %d",
           even, odd);
    return 0;
}