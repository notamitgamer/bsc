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

/* Write a program to input a number and check whether it is Disarium Number or not.
    Note : A number is said to Disarium if sum of its digit powered by with their
    respective position is equal to the original number. */
/* Author - Amit Dutta, Date - 08th November, 2025 */

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    int position = printf("%d", num);
    int temp = num;
    int res = 0;
    while (temp > 0)
    {
        res += (int)pow(temp % 10, position);
        position--;
        temp /= 10;
    }
    if (res == num)
        printf(" is a Disarium Number.");
    else
        printf(" is Not a Disarium Number.");
    return 0;
}