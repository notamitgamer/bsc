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

/*
Pattern:
	1       2       3       4       5
	6       7       8       9
	10      11      12
	13      14
	15
*/
/* Author = Amit Dutta, Date - 13th November, 2025 */
// File Name - amit1311202508.c (LAB), APC-PRAC-031.c (Local)

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include<stdio.h> 
int main() {
	int n, i, j, temp = 1;
	printf("Enter the n : ");
	scanf("%d", &n);
	for(i = n; i >= 1; i--) {
		for(j = 1; j <= i; j++) {
			printf("%d\t", temp);
			temp++;
		}
		printf("\n");
	}
	return 0;
}
