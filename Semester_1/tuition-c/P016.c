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

/* WAP to calculate and display radius of a
circle by taking the area as input */
// Author - Amit Dutta, Date - Unknown

#include<stdio.h>
#include<math.h>
int main() {
	double area, r;
	printf("Enter the area of a circle : ");
	scanf("%lf", &area);
	r = sqrt((7 * area) / 22);
	printf("\nRadius : %lf", r);
	return 0;
}
