/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
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
