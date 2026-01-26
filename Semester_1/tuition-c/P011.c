/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* The time period of a simple pendulam is
given by the formula :
	t = 2 * pi * square_root(l / g)
WAP to calculate T take length(L) and gravity
as input
*/

#include<stdio.h>
#include<math.h>
int main() {
	double l, g, t;
	printf("Enter the Length and Gravity measures : ");
	scanf("%lf %lf", &l, &g);
	t = 2 * M_PI * sqrt(l / g);
	// using M_PI variable for PI value from math.h header file
	printf("\nTime Period : %lf", t);
	return 0;
}
