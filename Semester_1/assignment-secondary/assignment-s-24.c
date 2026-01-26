/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 18 Jan 2026
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2026 Amit Dutta
 */

/* Write a program to calculate the difference between two time periods using structures. */

#include <stdio.h>
#include <stdlib.h>

struct time_dif
{
    int hour;
    int min;
    int sec;
};

int main()
{
    struct time_dif tpA, tpB;
    long int tfA, tfB, tdif;
    printf("Enter the start time in this 24 hours clock format (HH MM SS): ");
    scanf("%d %d %d", &tpA.hour, &tpA.min, &tpA.sec);
    printf("Enter the end time in this 24 hours clock format (HH MM SS): ");
    scanf("%d %d %d", &tpB.hour, &tpB.min, &tpB.sec);

    tfA = tpA.hour * 3600 + tpA.min * 60 + tpA.sec;
    tfB = tpB.hour * 3600 + tpB.min * 60 + tpB.sec;
    tdif = tfB - tfA;
    if (tdif < 0)
    {
        printf("\nWrong information, End time should be later than Start time.");
        return 1;
    }
    printf("\nTime difference: %ld Hour(s) %ld Minutes(s) %ld Second(s).", tdif / 3600, (tdif % 3600) / 60, (tdif % 3600) % 60);

    return 0;
}