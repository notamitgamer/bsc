/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* Any year is entered through the keyboard. Write a function to
determine whether the year is aleap year or not. */
/* Author - Amit Dutta, Date - 17th November, 2025 */
/* Let Us C, Chap- 8, Page - 144, Qn No.: C(1) */

#include <stdio.h>

int leapYear(int);

int leapYear(int year)
{
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
        return 1;
    else
        return 0;
}

int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d", &year);
    if (leapYear(year))
        printf("\nYear %d is a Leap Year.", year);
    else
        printf("\nYear %d is not a Leap Year.", year);
    return 0;
}