---
title: lucproblem013.c
description: "C program source code for lucproblem013.c"
---

# `lucproblem013.c`


!!! abstract "Problem Statement"
    Define a function to convert any given year into its Roman equivalent. Use these roman equivalent for decimal numbers : 1 - I, 5 - V, 10 - X, 50 - L, 100 - C, 500 - D, 1000 - M

## Metadata
| Property | Detail |
|---|---|
| **Author**  | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/letusc/lucproblem013.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/letusc/lucproblem013.c){.md-button}

> 💡 You can print or save this file by opening **Raw** and using your browser.

## Source Code
```c
#include <stdio.h>

void romanise(int);

void romanise(int year)
{
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char *romanChar[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    // including the two-character subtractive pairs.
    int i = 0;

    printf("Year %d = ", year);
    while (year > 0)
    {
        if (year >= values[i])
        {
            printf("%s", romanChar[i]);
            year -= values[i];
        }
        else
            i++;
    }
}

int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d", &year);
    romanise(year);
    return 0;
}
```
