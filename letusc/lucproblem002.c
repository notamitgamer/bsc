/* A year is entered through the keyboard, write a program to
determine whether the year is leap or not. Use the logical operators
&& and || . */
/* Author - Amit Dutta, Date - 02th OCT, 2025 */
/* Let Us C, Chap - 4, Page - 64, Problem 4.1 */

#include <stdio.h>
int main()
{
    int year;
    printf("Enter year : ");
    scanf("%d", &year);
    if (year % 4 == 0 && year & 100 != 0 || year % 400 == 0)
        printf("\nYear %d is a leapyear.", year);
    else
        printf("\nYear %d is not a leapyear.", year);
    return 0;
}