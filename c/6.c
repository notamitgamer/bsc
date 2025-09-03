// WAP to compute the factors of a given number

#include<stdio.h>
#include<stdlib.h>

int main() {
	int inp, num, i;
	printf("Please enter the number to get the factors from it : ");
	scanf("%d", &inp);

	num = abs(inp);
	
	if (num == 0) {
		printf("\n\n0 has infinitely many factors (all integers).");
		return 0;
	}
	
	printf("\n\nThe factors of ' %d ' is :- ", inp);
	printf("\nPositive : ");
	for (i = 1; i <= num ; i++) if (num % i == 0) printf("  %d", i);
	printf("\nNegative : ");
	for (i = 1; i <= num ; i++) if (num % i == 0) printf("  %d", -i);
	return 0;
}
