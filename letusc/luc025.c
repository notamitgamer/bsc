/* Write a program to find the greates of the three numbers entered
through the keyboard. Use conditional operators. */
/* Author - Amit Dutta, Date - 6th OCT, 2025 */
/* Let Us C, Chap- 4, Page - 72, Qn No.: E(c) */

#include <stdio.h>
int main()
{
    double num1, num2, num3, max;
    printf("Enter three number : ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);
    printf("\nGreatest of the three number '%g', '%g' and '%g' is : '%g'", num1, num2, num3, 
        (num1 > num2 && num1 > num3) ? num1 : ((num2 > num1 && num2 > num3) ? num2 : num3));
    return 0;
}