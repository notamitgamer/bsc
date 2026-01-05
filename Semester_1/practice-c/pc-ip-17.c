/*
 * ======================================================================================
 * COPYRIGHT (C) 2026 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc
 * License    : ESAL-1.0 ( https://aranag.site/license )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

/*
 * Question 17:
 * Write a C program that includes a user-defined function named isPerfect with the signature int isPerfect(int num);.
 */

#include <stdio.h>

int isPerfect(int);

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    if (isPerfect(num))
    {
        printf("\nInput '%d' is a perfect number.", num);
    }
    else
    {
        printf("\nInput '%d' is not a perfect number.", num);
    }
    return 0;
}

int isPerfect(int n)
{
    int i, sum = 0;
    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum == n;
}