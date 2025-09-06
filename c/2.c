//WAP to reverse a non-negative integer.

#include<stdio.h>

int main() {
	int inp, result = 0, temp;
	printf("PLease enter the number you want to reverse : ");
	scanf("%d",&inp);
	printf("\n");
	
	if (inp < 0) {
		printf("\nPlease enter a non negetive integer.");
		return 1;
	}
	
	temp = inp;
	while ( temp != 0) {
		result = (result * 10) + (temp % 10);
		temp = temp / 10;
	}
	
	printf("\nReverse of the input '%d' is : %d", inp, result);
	return 0;
}

