/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc
 * License    : ESAL-1.0 ( https://esal.amit.is-a.dev/ )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

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
