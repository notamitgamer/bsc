/*
Pattern:
	1    2    3    4    5
	2    3    4    5
	3    4    5
	4    5
	5
*/
/* Author = Amit Dutta, Date - 13th November, 2025 */
// File Name - amit1311202504.c (LAB), APC-PRAC-027.c (Local)

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include<stdio.h> 
int main() {
	int n, i, j;
	printf("Enter the n : ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++) {
		for(j = i; j <= n; j++) {
			printf("%d    ", j);
		}
		printf("\n");
	}
	return 0;
}
