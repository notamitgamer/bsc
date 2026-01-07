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

/* WAP to swap two integer variable without
using third  variable */
// using Approch Mode : simple, slow, time consuming
// Author - Amit Dutta, Date - Unknown

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
