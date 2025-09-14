/* WAP to swap two integer variable without
using third  variable */
// using Approch Mode : simple, slow, time consuming

#include<stdio.h>
int main() {
	int a = 4, b = 6;
	printf("Before Swap : A = %d, B = %d", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("\nAfter Swap : A = %d, B = %d", a, b);
	return 0;
}
