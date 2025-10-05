/* Write a program to check whether a triangle is valid or not,
if three angles of the triangle are entered through the keyboard.
A triangle is valid if the sum of all the three angles is equal to 180 degrees. */
/* Author - Amit Dutta, Date - 1st OCT, 2025 */
/* Let Us C, Chap- 3, Page - 53, Qn No.: f(c) */

#include <stdio.h>
int main()
{
    double angle1, angle2, angle3, sum;
    printf("Enter the value of the three angle of the triangle : ");
    scanf("%lf %lf %lf", &angle1, &angle2, &angle3);
    sum = angle1 + angle2 + angle3;
    if (sum == 180.0)
        printf("\nThis Triangle is a valid one.");
    else
        printf("\nThis Triangle is not valid. Sum of the angles : %g", sum);
    return 0;
}