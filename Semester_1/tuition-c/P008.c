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

/* A shopkeeper offers 30% discount on purchasing an
item whereas the other shopkeeper offers 2 successive
discount of 20% and 10% for purchasing the same item.
WAP to caompute and display the discounted price of the
item by taking the price as input. */
// Author - Amit Dutta, Date - Unknown

#include<stdio.h>
int main() {
	double mrp, shop1, shop2, temp;
	printf("Enter the price : ");
	scanf("%lf", &mrp);
	shop1 = mrp * 0.70;
	temp = mrp * 0.80;
	shop2 = temp * 0.90;
	printf("\nShopkeeper 1 price : %lf"
			"\nShopkeeper 2 price : %lf",shop1,shop2);
	return 0;
}
