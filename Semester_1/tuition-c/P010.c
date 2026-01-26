/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* WAP to find and display the difference
between compound Interest and Simple Interest.
Take principle amount as input.
Hint :	si = (p * r * t) / 100
		a = p * ((1 + (r / 100)) ^ t)
		ci = a - p
*/

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
