/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
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
