/* Write a Function power(a, b), to calculate the value of a raised to b */
/* Author - Amit Dutta, Date - 17th November, 2025 */
/* Let Us C, Chap - 8, Page - 141, Problem 8.2 */

#include <stdio.h>

double power(double, int);

double power(double a, int b)
{
    if (b == 0)
        return 1;
    double res = 1;
    int i;
    if (b > 0)
        for (i = 1; i <= b; i++)
            res *= a;
    return res;
}

int main()
{
    double a, result;
    int b;
    printf("Enter the value and the power (Format A^B) : ");
    scanf("%lf^%d", &a, &b);
    result = power(a, b);
    printf("Result of %g^%d = %g", a, b, result);
    return 0;
}