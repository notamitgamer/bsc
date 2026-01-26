/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
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
