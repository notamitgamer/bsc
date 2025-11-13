/* Author = Amit Dutta, Date - 13th November, 2025 */

#include<stdio.h> 
int main() {
	int n, i, j, temp = 1;
	printf("Enter the n : ");
	scanf("%d", &n);
	for(i = n; i >= 1; i--) {
		for(j = 1; j <= i; j++) {
			printf("%d\t", temp);
			temp++;
		}
		printf("\n");
	}
	return 0;
}
