// 3. Write a program to compute the sum of the first n terms of: S = 1 - 2 + 3 - 4 + 5…

#include<stdio.h>

int sum(int);

int main() {
	int n;
	printf("Enter the value for n: ");
	scanf("%d", &n);
	printf("\nSum of the first n terms= %d", sum(n));
	return 0;
}

int sum(int n) {
	int i, res = 0;
	for(i = 1; i <= n; i++) {
		if(i % 2 == 0) {
			res -= i;
			continue;
		}
		res += i;
	}
	return res;
}
