/* WAP to check a number is even or odd using bitwise operator */

#include<stdio.h>
int main() {
	int x, res = 1;
	printf("Enter a number : ");
	scanf("%d", &x);
	res = res & x;
	if (res == 0) {
		printf("\nInput %d is a even number.", x);
	}
	else {
		printf("\nInput %d is a odd number.", x);
	}
	return 0;
}
