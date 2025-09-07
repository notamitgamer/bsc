// Write a program (WAP) to print the sum and product of digits of an integer.

#include<stdio.h>

int main() {
	int inp, result_sum = 0, result_product = 1, temp;
	printf("Please enter the number : ");
	scanf("%d",&inp);
	printf("\n");
	
	if (inp < 0) {
		printf("\nPlease enter a valid non negetive integer.");
		return 1;
	}
	
	temp = inp;
	while (temp != 0 ) {
		result_sum = result_sum + (temp % 10);
		result_product = result_product * (temp % 10);
		temp = temp / 10;
	}
	
	printf("\nSum of the digits of the input number '%d' is : %d"
		"\nProduct of the digits of the input number '%d' is : %d",
		inp, result_sum, inp, result_product);
	return 0;
}

