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
