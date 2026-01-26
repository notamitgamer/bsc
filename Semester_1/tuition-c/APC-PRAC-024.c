/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/*
Pattern:
	1
	2	1
	3	2	1
	4	3	2	1
	5	4	3	2	1
*/
/* Author = Amit Dutta, Date - 13th November, 2025 */
// File Name - amit1311202501.c (LAB), APC-PRAC-024.c (Local)

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include<stdio.h> 
int main() {
	int n, i, j;
	printf("Enter the n : ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++) {
		for(j = i; j >= 1; j--) {
			printf("%d    ", j);
		}
		printf("\n");
	}
	return 0;
}
