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

/* WAP to calculate the sum of even digits and odd digits. Number will be provided by user. */
/* Author - Amit Dutta, Date - 18th OCT, 2025 */

#include <stdio.h>
int main()
{
    int inp, odd = 0, even = 0, temp;
    printf("Enter the number : ");
    scanf("%d", &inp);
    temp = inp;
    while (temp > 0)
    {
        if ((temp % 10) % 2 == 0)
            even += temp % 10;
        else
            odd += temp % 10;
        temp /= 10;
    }
    printf("\nSum of even : %d"
           "\nSum of odd : %d",
           even, odd);
    return 0;
}