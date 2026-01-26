/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* WAP to calculate area of circle by accepting radius as input */
/* Author : Amit Dutta, Date : 15th September, 2025 */

#include<stdio.h>
#include<math.h>
int main() {
	double r, area;
	printf("Enter the radius of circle : ");
	scanf("%lf", &r);
	area = M_PI * r * r;
	printf("\nArea : %lf", area);
	return 0;
}
