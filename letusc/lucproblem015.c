/* Write a program that defines a function that calculates power of one
number reaised to another and factorial value of a number in one cell. */
/* Author - Amit Dutta, Date - 24th November, 2025 */
/* Let Us C, Chap - 9, Page 159, Problem 9.2 */

#include <stdio.h>

void bothPowerFactorial(double, int, int, double *, long long *);

int main()
{
    double a, resultPower;
    int b, factN;
    long long resultFactorial;
    printf("Enter a and b for calculating a raised to b: ");
    scanf("%lf %d", &a, &b);
    printf("Enter number to calculate the factorial: ");
    scanf("%d", &factN);
    if (b < 0 || factN < 0)
    {
        printf("\nOnly non-negative integer is allowed as input of b and factorial.");
        return 1;
    }
    bothPowerFactorial(a, b, factN, &resultPower, &resultFactorial);
    printf("\n%g Raised to %d: %g"
           "\nFactorial of %d: %lld",
           a, b, resultPower, factN, resultFactorial);
    return 0;
}

void bothPowerFactorial(double a, int b, int n, double *resultPower, long long *resultFactorial)
{
    double tempResultPower = 1;
    long long tempResultFactorial = 1;
    int i;

    for (i = 1; i <= b; i++)
        tempResultPower *= a;

    for (i = 1; i <= n; i++)
        tempResultFactorial *= i;

    *resultPower = tempResultPower;
    *resultFactorial = tempResultFactorial;
}