/*
Pattern:
	5
	5    4
	5    4    3
	5    4    3    2
	5    4    3    2    1
*/
/* Author = Amit Dutta, Date - 13th November, 2025 */
// File Name - amit1311202503.c (LAB), APC-PRAC-026.c (Local)

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include<stdio.h> 
int main() {
	int n, i, j;
	printf("Enter the n : ");
	scanf("%d", &n);
	for(i = n; i >= 1; i--) {
		for(j = n; j >= i; j--) {
			printf("%d    ", j);
		}
		printf("\n");
	}
	return 0;
}
