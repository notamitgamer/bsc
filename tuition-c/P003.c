//WAP to perform addtion and multiplication of two integer numbers
// Author - Amit Dutta, Date - Unknown

#include<stdio.h>
int main() {
	int a, b, sum, multi;
	printf("Enter the 1st number : ");
	scanf("%d",&a);
	printf("Enter the 2nd number : ");
	scanf("%d",&b);
	sum = a + b;
	multi = a * b;
	printf("\nSum = %d"
		   "\nMultiplication = %d",sum,multi);
	return 0;
}
