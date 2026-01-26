/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
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
