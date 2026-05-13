# `assignment-p-04.c`

## Problem Statement
!!!
Write a C program that takes an integer input representing a month (1 to 12) and a year. Use a switch statement to display the number of days in that month, considering leap years.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta <amitdutta4255@gmail.com> |
| **Date** | 12 Dec 2025 |
| **License** | MIT License (See the LICENSE file for details) |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/assignment-primary/assignment-p-04.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/assignment-primary/assignment-p-04.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>

int main()
{
    int month, year, days;
    printf("Enter the month (1 to 12) and year: ");
    scanf("%d %d", &month, &year);

    switch (month)
    {
    case 1:  // jan
    case 3:  // mar
    case 5:  // may
    case 7:  // july
    case 8:  // aug
    case 10: // oct
    case 12: // dec
        days = 31;
        break;
    case 4:  // apr
    case 6:  // jun
    case 9:  // sep
    case 11: // nov
        days = 30;
        break;
    case 2: // feb
        if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
        {
            days = 29;
        }
        else
        {
            days = 28;
        }
        break;
    default:
        printf("\nYou entered something wrong.");
        return 0;
    }

    printf("\nNumber of days: %d", days);
    return 0;
}
```
