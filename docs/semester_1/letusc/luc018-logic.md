---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> luc018-logic.c'
description: 'According to Gregorian calender, it was Monday on the date 01/01/01. Write a program to find out what is the day on 1st January of any input year.'
source: 'semester_1/letusc/luc018-logic.c'
---

# luc018-logic.c

### Metadata

- **Author** — [Amit Dutta](mailto:amitdutta4255@gmail.com)
- **Last updated** — 12 Dec 2025
- **License** — [MIT License (See the LICENSE file for details)](https://github.com/notamitgamer/bsc/blob/main/LICENSE)


### Problem Statement

::: tip Problem Statement
According to Gregorian calender, it was Monday on the date 01/01/01. Write a program to find out what is the day on 1st January of any input year.
:::

## Source Code

<div style="display:flex;gap:12px;margin-bottom:12px;">
  <a href="https://github.com/notamitgamer/bsc/blob/main/semester_1/letusc/luc018-logic.c" target="_blank" rel="noopener noreferrer"   style="display:inline-flex;align-items:center;gap:6px;font-size:0.85rem;          text-decoration:none;color:var(--vp-c-brand);">
    <svg xmlns="http://www.w3.org/2000/svg" width="15" height="15" viewBox="0 0 24 24"         fill="currentColor" style="vertical-align:middle;">
      <path d="M12 0C5.37 0 0 5.373 0 12c0 5.303 3.438 9.8 8.205 11.387.6.113.82-.258             .82-.577v-2.234c-3.338.726-4.033-1.416-4.033-1.416-.546-1.387-1.333-1.757             -1.333-1.757-1.089-.745.083-.729.083-.729 1.205.084 1.84 1.236 1.84 1.236             1.07 1.835 2.809 1.305 3.495.998.108-.776.417-1.305.76-1.605-2.665-.3             -5.466-1.332-5.466-5.93 0-1.31.465-2.38 1.235-3.22-.135-.303-.54-1.523             .105-3.176 0 0 1.005-.322 3.3 1.23.96-.267 1.98-.399 3-.405 1.02.006             2.04.138 3 .405 2.28-1.552 3.285-1.23 3.285-1.23.645 1.653.24 2.873             .12 3.176.765.84 1.23 1.91 1.23 3.22 0 4.61-2.805 5.625-5.475 5.92             .42.36.81 1.096.81 2.22v3.293c0 .319.21.694.825.576C20.565 21.795             24 17.298 24 12c0-6.627-5.373-12-12-12z"/>
    </svg>
    View on GitHub
  </a>
  <a href="https://raw.usercontent.amit.is-a.dev/semester_1/letusc/luc018-logic.c" target="_blank" rel="noopener noreferrer"   style="display:inline-flex;align-items:center;gap:6px;font-size:0.85rem;          text-decoration:none;color:var(--vp-c-text-2);">
    <svg xmlns="http://www.w3.org/2000/svg" width="14" height="14" viewBox="0 0 24 24"         fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round"         stroke-linejoin="round" style="vertical-align:middle;">
      <path d="M21 15v4a2 2 0 0 1-2 2H5a2 2 0 0 1-2-2v-4"/>
      <polyline points="7 10 12 15 17 10"/>
      <line x1="12" y1="15" x2="12" y2="3"/>
    </svg>
    Download Raw
  </a>
</div>

::: info Printing the code
To print this file, open it on GitHub and click **Raw** before printing, or use the **Download Raw** button above and print directly from that page.
:::
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
