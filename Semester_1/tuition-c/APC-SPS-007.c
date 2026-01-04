/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc
 * License    : ESAL-1.0 ( https://amit.is-a.dev/license )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

/* WAP to check a number is even or odd using bitwise operator */

#include<stdio.h>
int main() {
	int x, res = 1;
	printf("Enter a number : ");
	scanf("%d", &x);
	res = res & x;
	if (res == 0) {
		printf("\nInput %d is a even number.", x);
	}
	else {
		printf("\nInput %d is a odd number.", x);
	}
	return 0;
}
