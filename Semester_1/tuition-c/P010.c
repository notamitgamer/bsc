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

/* WAP to find and display the difference
between compound Interest and Simple Interest.
Take principle amount as input.
Hint :	si = (p * r * t) / 100
		a = p * ((1 + (r / 100)) ^ t)
		ci = a - p
*/
// Author - Amit Dutta, Date - Unknown

#include<stdio.h>
#include<math.h>
int main() {
	double p, r, t, si, a, ci, dif;
	printf("Enter the principle amount, rate of interest, time in year : ");
	scanf("%lf %lf %lf", &p, &r, &t);
	si = (p * r * t) / 100;
	a = p * pow((1 + (r / 100)), t);
	ci = a - p;
	dif = ci - si;
	printf("\nSimple Interest     : %lf"
		   "\nCompound Interest   : %lf"
		   "\nInterest Difference : %lf", si, ci, dif);
	return 0;
}
