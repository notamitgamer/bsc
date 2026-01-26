/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

//WAP to perform addtion and multiplication of two integer numbers

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
