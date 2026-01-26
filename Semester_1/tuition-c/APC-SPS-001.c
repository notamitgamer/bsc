/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

// WAP to perform arithmatic operation on integer data

#include<stdio.h>
int main() {
	int a, b, sum, sub, multi, div, mod;
	printf("Enter 1st number : ");
	scanf("%d", &a);
	printf("Enter 2nd number : ");
	scanf("%d", &b);
	sum = a + b;
	sub = a - b;
	multi = a * b;
	div = a / b;
	mod = a % b;
	printf("\nSum = %d", sum);
	printf("\nSubtraction = %d", sub);
	printf("\nMultiplication = %d", multi);
	printf("\nDivision = %d", div);
	printf("\nModulas = %d", div);
	return 0;
}
