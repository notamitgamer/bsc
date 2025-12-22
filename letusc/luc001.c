/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc/tree/main/letusc
 * License    : ESAL-1.0 ( https://aranag.site/license )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

/* Temperature of a city in fahrenheit degrees is input through
the keyboard. WAP to convert this temperature into Centigrade
degrees. */
/* Author - Amit Dutta, Date - 13 sep, 2025 */
/* Chapter 1; Page 19; Question NO.: F(a) */

#include<stdio.h>
int main() {
	float f, c;
	printf("Enter the temperature of city in Fahrenheit : ");
	scanf("%f", &f);
	// formula (F - 32) 5/9
	c = ((f - 32) * 5) / 9;
	printf("\nTemperature in centigrade : %f", c);
	return 0;
}
