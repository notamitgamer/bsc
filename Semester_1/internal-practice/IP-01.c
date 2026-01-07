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

/* Write a program to compute the sum and product of digits of an integer using user
defined functions. */

#include <stdio.h>

int sum_of_digits(int);
int product_of_digits(int);

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("\nSum of digits of %d = %d", num, sum_of_digits(num));
    printf("\nProduct of digits of %d = %d", num, product_of_digits(num));
    return 0;
}

int sum_of_digits(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int product_of_digits(int num)
{
    int product = 1;
    while (num > 0)
    {
        product *= num % 10;
        num /= 10;
    }
    return product;
}