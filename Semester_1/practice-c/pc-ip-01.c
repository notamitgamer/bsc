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
 * Question 1:
 * Write a program to compute the sum and product of digits of an integer using user-defined functions.
 */

#include <stdio.h>

int sum(int);
int product(int);

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("\nSum of digit: %d", sum(num));
    printf("\nProduct of digit: %d", product(num));
    return 0;
}

int sum(int num)
{
    int result = 0;
    while (num > 0)
    {
        result += num % 10;
        num /= 10;
    }
    return result;
}

int product(int num)
{
    int result = 1;
    if (num == 0)
    {
        return 0;
    }
    while (num > 0)
    {
        result *= num % 10;
        num /= 10;
    }
    return result;
}