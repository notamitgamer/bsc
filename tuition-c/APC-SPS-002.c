/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc/tree/main/tuition-c
 * License    : ESAL-1.0 ( https://aranag.site/license )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

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
