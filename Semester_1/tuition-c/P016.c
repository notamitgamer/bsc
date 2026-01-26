/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* WAP to calculate and display radius of a
circle by taking the area as input */

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
