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
