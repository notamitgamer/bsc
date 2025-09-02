#include<stdio.h>
#include<conio.h>
int main() {
	int inp, reverse_inp = 0;
	printf("Enter a Number : ");
	scanf("%d",&inp);
	
	if (inp <= 0) {
		printf("\nInput cannot be Zero or Below Zero. \nYour Input was  : %d",inp);
	}
	
	else {
		int temp1 = inp, temp2, temp3;
		while (temp1 != 0) {
			temp2 = temp1 / 10;
			temp3 = temp1 % 10;
			temp1 = temp2;

			reverse_inp = (reverse_inp * 10) + temp3;
		}
		printf("\nReverse of the input %d is : %d",inp,reverse_inp);
	}
	
	if (inp == reverse_inp) {
		printf("\nInput number %d is a Palindrome number.",inp);
	}
	
	else {
		printf("\nInput number %d is not a Palindrome number.",inp);
	}
}
