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

/* Armstrong number check only for three digit */
/* Author - Amit Dutta, Date - 03rd NOVEMBER, 2025 */

#include <stdio.h>

int main()
{
    int num, temp1, armstrongCheck = 0;
    printf("Enter a three digit number : ");
    if (scanf("%d", &num) != 1)
    {
        printf("\nOnly positive number allowed.");
        return 1;
    }
    if (num < 100 || num > 999)
    {
        printf("\nOnly Three digit postive number allowed.");
        return 1;
    }
    temp1 = num;
    while (temp1 > 0)
    {
        armstrongCheck += (temp1 % 10) * (temp1 % 10) * (temp1 % 10);
        temp1 /= 10;
    }
    if (armstrongCheck == num)
        printf("\nInput %d is a armstrong number.", num);
    else
        printf("\nInput %d is not a armstrong number.", num);
    return 0;
}