---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> luc018-logic.c'
description: 'According to Gregorian calender, it was Monday on the date 01/01/01. Write a program to find out what is the day on 1st January of any input year.'
---

# luc018-logic.c

| Property | Details |
| :--- | :--- |
| **Author** | [Amit Dutta](mailto:amitdutta4255@gmail.com) |
| **Date** | 12 Dec 2025 |
| **License** | [MIT License (See the LICENSE file for details)](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
According to Gregorian calender, it was Monday on the date 01/01/01. Write a program to find out what is the day on 1st January of any input year.
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/letusc/luc018-logic.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/letusc/luc018-logic.c)

```c [luc018-logic.c]
#include <stdio.h>

/**
 * @brief Determines if a given year is a leap year.
 * * The rule: A year is a leap year if it is divisible by 4, UNLESS it is 
 * divisible by 100 but NOT by 400.
 * * @param year The year to check.
 * @return 1 if it is a leap year, 0 otherwise.
 */
int is_leap(int year) {
    // Check if divisible by 400 OR (divisible by 4 AND not divisible by 100)
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        return 1;
    }
    return 0;
}

/**
 * @brief Calculates the day of the week for January 1st of the given year.
 * * The base date is 01/01/01, which was a Monday (index 1).
 * * Day Mapping: 0:Sunday, 1:Monday, 2:Tuesday, 3:Wednesday, 4:Thursday, 5:Friday, 6:Saturday
 */
int main() {
    long long year; // Use long long for year input if years far in the future/past are tested
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

    // --- Core Logic: Calculate Total Days ---
    
    // We only need to consider the years that have *passed* before the target year.
    // So, we count days from the end of year 0 up to the end of year (year - 1).
    int years_passed = year - 1;
    
    // 1. Calculate the number of leap days up to the end of year (year - 1)
    // Formula based on Gregorian calendar rules for years Y-1:
    // (Y-1)/4 - (Y-1)/100 + (Y-1)/400
    long long leap_years = years_passed / 4 - years_passed / 100 + years_passed / 400;

    // 2. Total days = (Number of years * 365) + (Number of leap years)
    // Note: The loop method (below) is more intuitive but the formula is faster.
    // We will use the direct formula for efficiency.
    total_days = years_passed * 365 + leap_years;

    // --- Alternate Loop Method (for conceptual simplicity) ---
    /*
    for (i = 1; i < year; i++) {
        total_days += 365;
        if (is_leap(i)) {
            total_days += 1; // Add 1 for the leap day
        }
    }
    */
    
    // --- Determine the Day of the Week ---
    
    // Since 01/01/01 was Monday (index 1), we use the following setup:
    // Index 1 corresponds to Monday.
    // The calculation gives the number of days *past* the Monday start (01/01/01).
    // The modulo operation gives the remainder (0-6).
    
    // 0 days elapsed (Year 1): total_days=0. (0 + 1) % 7 = 1 (Monday). Correct.
    // 365 days elapsed (Year 2): total_days=365. (365 + 1) % 7 = 2 (Tuesday). Correct. (365 mod 7 = 1, 1+1 = 2)
    
    day_index = (total_days + 1) % 7;
    
    // Correct the Day Index to match the array (0:Sun, 1:Mon, ..., 6:Sat)
    // The +1 adjusts for the Monday starting point (index 1).
    
    printf("\nOn January 1st, %lld, the day was: **%s**.\n", year, day_names[day_index]);

    return 0;
}
```
