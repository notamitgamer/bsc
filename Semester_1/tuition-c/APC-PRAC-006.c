/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* WAP that accept seconds as input and represent it an hours, minutes and seconds. */

#include <stdio.h>
int main()
{
    int sec, hours, minutes, temp;
    printf("Enter the no of seconds : ");
    scanf("%d", &sec);
    temp = sec;
    hours = sec / 3600;
    sec = sec % 3600;
    minutes = sec / 60;
    sec = sec % 60;
    printf("\n%d Seconds = %d Hours, %d Minutes, %d Seconds.", temp, hours, minutes, sec);
    return 0;
}