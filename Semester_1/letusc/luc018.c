/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* According to Gregorian calender, it was Monday on the date 01/01/01.
if any year is input through the keyboard write a program to find out
what is the day on 1st January of this year. */
/* Let Us C, Chap- 3, Page - 53, Qn No.: f(i) */

#include <stdio.h>

int is_leap(int year) {
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        return 1;
    }
    return 0;
}

int main() {
    long long year; // long long for year input if years far in the future/past are tested
    int i;
    long long total_days = 0;
    int day_index;
    
    // Day names array for output
    const char *day_names[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    printf("Enter the year (e.g., 2025): ");
    if (scanf("%lld", &year) != 1 || year < 1) {
        printf("Invalid year input. Please enter a positive integer year (>= 1).\n");
        return 1;
    }
    int years_passed = year - 1;
    long long leap_years = years_passed / 4 - years_passed / 100 + years_passed / 400;
    total_days = years_passed * 365 + leap_years;
    day_index = (total_days + 1) % 7;
    printf("\nOn January 1st, %lld, the day was: %s.\n", year, day_names[day_index]);
    return 0;
}