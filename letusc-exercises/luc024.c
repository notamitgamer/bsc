/* Write a program using conditional operators to determine whether
a year entered through the keyboard is a leap year or not. */
/* Author - Amit Dutta, Date - 4rd OCT, 2025 */
/* Let Us C, Chap- 4, Page - 72, Qn No.: E(b) */

#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d", &year);
    printf("\nYear %d is %s a Leapyear.", year, (year % 400 == 0 || year % 4 == 0 && year % 100 != 0) ? "" : "NOT");
    return 0;
}