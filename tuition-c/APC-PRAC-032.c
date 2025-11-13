/* Author = Amit Dutta, Date - 13th November, 2025 */

#include<stdio.h> 
int main() {
	int n, i, j; char temp = 'A';
	printf("Enter the n : ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++) {
		for(j = 1; j <= i; j++) {
			printf("%c", temp);
		}
		temp++;
		printf("\n");
	}
	return 0;
}
