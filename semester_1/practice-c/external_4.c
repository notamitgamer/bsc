// 4. Write a function to find whether a given number is prime or not. Use it to generate prime numbers less than 100.

#include<stdio.h>

int isPrime(int);

int main() {
	int num, i;
    printf("Enter the number: ");
    scanf("%d", &num);
    if(isPrime(num)) printf("\n%d is a prime number.", num);
    else printf("\n%d is not a prime number.", num);
    
    // generate prime numbers upto 100
    printf("\n\nPrime number upto 100: ");
    for(i = 1; i <= 100; i++) {
        if(isPrime(i)) printf("\n%d  ", i);
    }
    return 0;
}

int isPrime(int n) {
    int i;
    if(n == 2) return 1;
    if(n <= 1 || n % 2 == 0) return 0;
    for(i = 3; i * i <= n; i = i+2) if(n % i == 0) return 0;
    return 1;
}