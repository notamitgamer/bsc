// 6. Write a program to compute the factors of a given number.

#include<stdio.h>

void factor(int);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    factor(n);
    return 0;
}

void factor(int n) {
    int i;
    printf("\nThe factors of %d = ", n);
    if(n == 0) {
        printf("Infinite.");
        return;
    }
    if (n < 0) n = -n;
    for(i = 1; i <= n; i++) {
        if(n % i == 0) {
            printf("%d  %d  ", i, -i);
        }
    }
}