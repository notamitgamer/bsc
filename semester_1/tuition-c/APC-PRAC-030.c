/*
Pattern:
	#
	@   @
	#   #   #
	@   @   @   @
	#   #   #   #   #
*/
/* Author = Amit Dutta, Date - 13th November, 2025 */
// File Name - amit1311202507.c (LAB), APC-PRAC-030.c (Local)

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include<stdio.h> 
int main() {
	int n, i, j;
	printf("Enter the n : ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++) {
		for(j = 1; j <= i; j++) {
			if(i % 2 == 0) printf("@   ");
			else printf("#   ");
		}
		printf("\n");
	}
	return 0;
}
