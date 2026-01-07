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

/* The time period of a simple pendulam is
given by the formula :
	t = 2 * pi * square_root(l / g)
WAP to calculate T take length(L) and gravity
as input
*/
// Author - Amit Dutta, Date - Unknown

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
