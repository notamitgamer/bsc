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

/* A shopkeeper offers 10% discount on printed
price of a digital camera. However a customer has
to pay 6% GST on the remaining amount. WAP to
calculate and display the amount to paid by the
customer, taking the printed price as input. */
// Author - Amit Dutta, Date - Unknown

#include<stdio.h>
int main() {
	double mrp, final_price, temp;
	printf("Enter the printed price : ");
	scanf("%lf", &mrp);
	temp = mrp * 0.90;
	final_price = temp * 1.06;
	printf("\nCustomer have to pay : %lf", final_price);
	return 0;
}
