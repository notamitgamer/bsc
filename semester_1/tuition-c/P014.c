/* WAP to accept the diagonal of
square. Find and display the area and
perimeter of the square. */

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
