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

/*  Purchase        Discount on     Discount on
     Amount            Laptop         Desktop
    --------        -----------     -----------
    Upto 20k            3.0%            5.0%
    20001 - 50k         5.0%            7.5%
    50001 - 75k         7.5%           10.5%
    more than 75k      10.0%           15.0%
WAP to input amount of purchase and type of purchase ('L' : laptop, 'D' : desktop)
and display the discount amount and the discounted price (Net Amount).
*/
/* Author - Amit Dutta, Date - 8th OCT, 2025 */
// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.

#include <stdio.h>
#include <ctype.h>
int main()
{
    double principal_amount, desktop_discount, laptop_discount, discount_amount, discounted_price;
    char choice;
    printf("Enter the purchase amount : ");
    scanf("%lf", &principal_amount);
    printf("Type of purchase ('L' : Laptop, 'D' : Desktop) : ");
    scanf(" %c", &choice);
    choice = toupper(choice);
    if (principal_amount <= 20000)
    {
        laptop_discount = 0.03;
        desktop_discount = 0.05;
    }
    else if (principal_amount > 20000 && principal_amount <= 50000)
    {
        laptop_discount = 0.05;
        desktop_discount = 0.075;
    }
    else if (principal_amount > 50000 && principal_amount <= 75000)
    {
        laptop_discount = 0.075;
        desktop_discount = 0.105;
    }
    else if (principal_amount > 75000)
    {
        laptop_discount = 0.1;
        desktop_discount = 0.15;
    }
    switch (choice)
    {
    case 'L':
        discount_amount = principal_amount * laptop_discount;
        discounted_price = principal_amount - discount_amount;
        printf("\nDiscount Amount : %g"
               "\nDiscounted Price : %g",
               discount_amount, discounted_price);
        break;
    case 'D':
        discount_amount = principal_amount * desktop_discount;
        discounted_price = principal_amount - discount_amount;
        printf("\nDiscount Amount : %g"
               "\nDiscounted Price : %g",
               discount_amount, discounted_price);
        break;
    default:
        printf("\nInvalid Input.");
        return 1;
    }
    return 0;
}