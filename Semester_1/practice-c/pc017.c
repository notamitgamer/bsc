/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 21 Apr 2026
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT
 */

/* Write a program to calculate the difference between two time periods using structures. */

#include <stdio.h>
#include <stdlib.h>

typedef struct time_reference
{
    int hour;
    int min;
    int sec;
} timeRef;

int main()
{
    timeRef a, b;
    long long int tSeconds_a, tSeconds_b, timeDiff;

    printf("== Note: Time should be entered in HH-MM-SS 24-hour clock format ==");
    printf("\nEnter the time reference a: ");
    scanf("%d-%d-%d", &a.hour, &a.min, &a.sec);
    printf("Enter the time reference b: ");
    scanf("%d-%d-%d", &b.hour, &b.min, &b.sec);

    tSeconds_a = (a.hour * 3600) + (a.min * 60) + a.sec;
    tSeconds_b = (b.hour * 3600) + (b.min * 60) + b.sec;

    timeDiff = tSeconds_a - tSeconds_b;
    timeDiff = abs(timeDiff);

    printf("\nTime Difference: %lld Hours, %lld Minutes, %lld Seconds.", timeDiff / 3600, (timeDiff % 3600) / 60, (timeDiff % 3600) % 60);
    return 0;
}
