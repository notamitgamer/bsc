/* Write a program to check prime number */
/* Author - Amit Dutta, Date - 27th OCT, 2025 */

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int num, i, endCheckDigit;
    bool isPrime = true;
    printf("Enter the number : ");
    if (scanf("%d", &num) != 1)
    {
        printf("\nOnly a number is allowed, not a character.");
        return 1;
    }
    if (num <= 0)
    {
        printf("\nOnly postive number is allowed.");
        return 1;
    }
    if (num == 1)
    {
        printf("\nInput 1 is not a prime number."
               "\nHas only one positive divisor (itself), not exactly two."
               "\nRule: Prime number should have exactly two distinct positive divisors: 1 and itself");
        return 0;
    }
    if (num == 2)
    {
        printf("\nInput 2 is a prime number."
               "\n(Note: 2 is only Even Prime Number)");
        return 0;
    }
    if (num % 2 == 0)
    {
        printf("\nInput %d is not a prime number.", num);
        return 0;
    }
    endCheckDigit = sqrt(num);
    for (i = 3; i <= endCheckDigit; i += 2)
    {
        if (num % i == 0)
        {
            isPrime = false;
            printf("\nInput %d is not prime number.", num);
            return 0;
        }
    }
    if (isPrime)
    {
        printf("\nInput %d is a prime number.", num);
    }
    return 0;
}