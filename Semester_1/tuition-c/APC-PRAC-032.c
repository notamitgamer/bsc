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

/*
Pattern:
	A
	B       B
	C       C       C
	D       D       D       D
	E       E       E       E       E
*/
/* Author = Amit Dutta, Date - 13th November, 2025 */
// File Name - amit1311202509.c (LAB), APC-PRAC-032.c (Local)

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include<stdio.h> 
int main() {
	int n, i, j; char temp = 'A';
	printf("Enter the n : ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++) {
		for(j = 1; j <= i; j++) {
			printf("%c\t", temp);
		}
		temp++;
		printf("\n");
	}
	return 0;
}
