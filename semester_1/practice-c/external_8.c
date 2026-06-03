// 8. Write a program to print a triangle of stars (take number of lines from user).

#include <stdio.h>

int main() {
    int rows, i, j, k;

    printf("Enter the number of lines: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
    	for(j = 1; j <= rows - i; j++) {
    		printf(" ");
		}
        for (k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
