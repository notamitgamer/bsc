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

/* The normal temperature of human body
is 98.6 Degree Fahrenheit. WAP to convert the temperature
to Degree Celcius and display the output. */
// Author - Amit Dutta, Date - Unknown

#include<stdio.h>
int main() {
	double f = 98.6, c;
	c = ((f - 32) * 5) / 9;
	printf("Temperature in Celcius is : %lf",c);
	return 0;
}
