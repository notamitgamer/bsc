/*Write a function to find whether a given no. is prime or not. 
Use the same to generate the prime numbers less than 100.*/

#include<stdio.h>

int isPrime(int inp) {
	int i, is_prime = 1;
	
	if (inp < 2) is_prime = 0;
	
	for (i = 2; i <= inp / 2; i++) if (inp % i == 0) {
		is_prime = 0;
		break;
	}
	
	return is_prime;
}


int main() {
	int inp, i;
	printf("Enter the number you want to check : ");
	scanf("%d",&inp);
	printf("\n");
	
	if (isPrime(inp)) printf("\nGiven input '%d' is a Prime Number.",inp);
	else printf("\nGiven input '%d' is not a Prime Number.",inp);
	
	printf ("\nSeries of prime number upto 100 : ");
	for (i = 2; i < 100; i++) if (isPrime(i)) printf(" %d",i);
	
	return 0;
}
