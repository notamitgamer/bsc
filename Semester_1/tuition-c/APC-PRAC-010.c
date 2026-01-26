/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* WAP to calculate and display the valve of the given expression :
 (1/a^3) + (1/(b+2)^3) + (1/(c^4 + root(2)))
 take a, b, c as input.
*/
/* Author - Amit Dutta, Date - 19th SEP, 2025 */

#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, result;
    printf("Enter the value for a, b and c : ");
    scanf("%lf %lf %lf", &a, &b, &c);
    result = (1 / pow(a, 3)) + (1 / pow((b + 2), 3)) + (1 / (pow(c, 4) + sqrt(2)));
    printf("\nResult = %g", result);
    return 0;
}