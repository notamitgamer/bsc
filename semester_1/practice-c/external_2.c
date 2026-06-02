// 2. Write a program to reverse a non-negative integer.

#include<stdio.h>

int reverse(int);

int main() {
	int num;
	printf("\nEnter a non-negative integer: ");
	scanf("%d", &num);
	if(num < 0) num = -num;
	printf("\nReverse number: %d", reverse(num));
	return 0;
}

int reverse(int num) {
	int rev = 0;
	while(num > 0) {
		rev = (rev * 10) + num % 10;
		num/= 10;
	}
	return rev;
}
