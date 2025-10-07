/* WAP to swap two integers. Display both numbers
before and after swap */

#include<stdio.h>
int main() {
	int a = 10, b = 20, temp;
	printf("Before swap A : %d, B : %d", a, b);
	temp = a;
	a = b;
	b = temp;
	printf("\nAfter swap A : %d, B : %d", a, b);
	return 0;
}
