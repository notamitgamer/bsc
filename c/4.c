//WAP to compute the sum of the first n terms of the following series,S =1-2+3-4+5......

#include<stdio.h>

int main() {
	int n, result = 0, temp, i;
	printf("Please enter the value for 'n' for this series 's = 1-2+3-4+5-....': ");
	scanf("%d",&n);
	printf("\n");
	
	if (n <= 0) {
		printf("\nPlease enter a positive integer.");
		return 1;
	}
	
	for (i = 1; i<= n; i++) {
		if (i % 2 == 0) {
			result = result - i;
		}
		else {
			result = result + i;
		}
	}
	
	printf("\nAns : %d", result);
}
