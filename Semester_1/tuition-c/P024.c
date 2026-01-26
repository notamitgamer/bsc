/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* WAP to check whether a year is leapyear or not. */
/* Author - Amit Dutta, Date - 8th OCT, 2025 */
// This code has not been compiled. 
// If you find any issues, please create a new issue on GitHub regarding them.

#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0)
        printf("\nYear %d is a leapyear.", year);
    else if (year % 400 == 0)
        printf("\nYear %d is a leapyear (Century).", year);
    else
        printf("\nYear %d is not a leapyear.", year);
    return 0;
}