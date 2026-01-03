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

/* The length and breadth of a rectangle and radius of a circle
are input through the keyboard. Write a program to calculate the
area and perimeter of the rectangle, and the area and circumference
of the circle. */
/* Author - Amit Dutta, Date - 16th SEP, 2025 */
/* Let Us C; Page - 19; Chap- 1; QNo.: F(b) */

#include <stdio.h>
#include <math.h>
int main()
{
	double len, bre, r, area_r, per, area_c, cir;
	printf("Enter the length and breadth of the rectangle : ");
	scanf("%lf %lf", &len, &bre);
	printf("Enter the Radius of the circle : ");
	scanf("%lf", &r);
	area_r = len * bre;
	per = 2 * (len + bre);
	area_c = M_PI * r * r;
	cir = 2 * M_PI * r;
	printf("\nArea of Rectangle       : %lf"
		   "\nPerimeter of Rectangle  : %lf"
		   "\nArea of Circle          : %lf"
		   "\nCircumference of Circle : %lf",
		   area_r, per, area_c, cir);
	return 0;
}
