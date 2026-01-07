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

/* WAP to accept the diagonal of
square. Find and display the area and
perimeter of the square. */
// Author - Amit Dutta, Date - Unknown

#include<stdio.h>
#include<math.h>
int main() {
	double d, side, area, per;
	printf("Enter the diagonal : ");
	scanf("%lf", &d);
	side =  d / sqrt (2);
	area = side * side;
	per = 4 * side;
	printf("\nArea of the Square      : %lf"
		   "\nPerimeter of the Square : %lf", area, per);
	return 0;
}
