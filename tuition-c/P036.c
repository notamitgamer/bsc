/* sum = a + (a^2)/2 + (a^3)/3 + ... + (a^n)/n */
/* Author - Amit Dutta, Date - 18th OCT, 2025 */

#include <stdio.h>
#include <math.h>

int main()
{
    double a, sum = 0;
    int n, i;
    printf("Enter value for a and n : ");
    scanf("%lf %d", &a, &n);
    for (i = 1; i <= n; i++)
        sum += pow(a, i) / i;
    printf("\nSum = %g", sum);
    return 0;
}