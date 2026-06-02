// 1. Write a program to print the sum and product of digits of an integer.

#include<stdio.h>

int sum(int);
int product(int);

int main() {
	int num;
	printf("Enter a positive integer: ");
	scanf("%d", &num);
	printf("\nSum of the integer is %d", sum(num));
	printf("\nProduct of the integer is %d", product(num));
	return 0;
}

int sum(int num) {
	int s = 0;
	while (num != 0) {
		s += num % 10;
		num = num / 10;
	}
	return s;
}

int product(int num) {
	int pro = 1;
	while(num != 0) {
		pro *= num % 10;
		num /= 10;
	}
	return pro;
}
