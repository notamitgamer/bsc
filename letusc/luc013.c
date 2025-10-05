/* Write a program to find the absolute value
of a number entered through the keyboard. */
/* Author - Amit Dutta, Date - 1st OCT, 2025 */
/* Let Us C, Chap- 3, Page - 53, Qn No.: f(d) */

#include <stdio.h>
#include <math.h>
int main()
{
    double num;
    printf("Enter the number : ");
    scanf("%lf", &num);
    num = abs(num);
    printf("\nAbsolute value of the input is : %g", num);
    return 0;
}