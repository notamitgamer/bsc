---
label: lucproblem008.c
description: "C program source code for lucproblem008.c"
---

# `lucproblem008.c`

## Problem Statement
!!!
Write a problem to print all the prime numbers from 1 to 300.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/letusc/lucproblem008.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/letusc/lucproblem008.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define LIMIT 300

int main()
{
    printf("Prime numbers from 1 to 300 :  2"); // as 2 is the only even prime number
    for (int i = 3; i <= LIMIT; i += 2)  // skipping all other even number
    {
        int n = (int)sqrt(i);
        bool prime = true;

        for (int j = 3; j <= n; j += 2)
        // an odd number is only devisable by another odd number.
        // so, skipping even number.
        {
            if (i % j == 0)
            {
                prime = false;
                break;
            }
        }
        if (prime)
        {
            printf("  %d", i);
        }
    }
    return 0;
}
```
