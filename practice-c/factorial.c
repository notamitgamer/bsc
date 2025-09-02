#include<stdio.h>

int main() {
	int inp, result = 1, i;
	printf("Enter the number to get the factorial : ");
	scanf("%d",&inp);
	
	if (inp < 0 ) {
		printf("\nPlease enter a valid integer. (eg. 1,5)");
		return 0;
	}
	
	if (inp == 0) {
		printf("\nFactorial of 0 : 1");
		return 0;
	}
	
	for (i = 1; i <= inp; i++) {
		result = result * i;
	}
	
	printf("\nFactorial of %d : %d",inp, result);
	return 0;
}
