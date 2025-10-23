/* Write a program to print 24 hours of day with suitable suffixes like
AM, PM, Noon and Midnight. */
/* Author - Amit Dutta, Date - 23rd OCT, 2025 */
/* Let Us C, Chap- 6, Page - 106, Qn No.: B(h) */

#include <stdio.h>
int main()
{
    int hour, temp;
    printf("Time \tSuffix\n");
    for (int hour = 0; hour <= 23; hour++)
    {
        if (hour == 0)
            printf("12:00\tAM (Midnight)\n");
        else if (hour == 12)
            printf("12:00\tPM (Noon)\n");
        else if (hour >= 1 && hour <= 11)
            printf("%02d:00\tAM\n", hour);
        else if (hour >= 13 && hour <= 23)
            printf("%02d:00\tPM\n", hour - 12);
    }
    return 0;
}