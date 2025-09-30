// WAP to compute the sum of the first n terms of the following series S =1+1/2+1/3+1/4+...... 
// Author - Amit Dutta, Date - 13th SEP, 2025

#include<stdio.h>

int main() {
	int n, i;
	float result = 0;
	printf("Please enter the value for 'n' : ");
	scanf("%d", &n);
	printf("\n");
	
	if (n <= 0) {
		printf("\nPlease enter a positve number greater than ZERO.");
		return 1;
	}
	
	for (i = 1; i <= n; i++) {
		result = result + (1.0 / i);
 	}
	
	printf("\nSum of the first %d terms of the following series S =1+1/2+1/3+1/4+...... is : %f",n,result);
	return 0;
}
