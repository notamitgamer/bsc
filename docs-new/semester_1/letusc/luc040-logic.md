---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> luc040-logic.c'
description: 'Ramanujan number (1729) is the smallest number that can be expressed as sum of cubes in two different ways - 1729 can be expressed as 1^3 + 12^3 and 9^3 + 10^3. Write a program to print all such numbers up to a reasonable limit.'
---

# luc040-logic.c

| Property | Details |
| :--- | :--- |
| **Author** | [Amit Dutta](mailto:amitdutta4255@gmail.com) |
| **Date** | 12 Dec 2025 |
| **License** | [MIT License (See the LICENSE file for details)](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
Ramanujan number (1729) is the smallest number that can be expressed as sum of cubes in two different ways - 1729 can be expressed as 1^3 + 12^3 and 9^3 + 10^3. Write a program to print all such numbers up to a reasonable limit.
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/letusc/luc040-logic.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/letusc/luc040-logic.c)

```c [luc040-logic.c]
#include <stdio.h> // Includes the standard input/output library, necessary for printf()

// 2. CONSTANT DEFINITIONS (MACROS)
// These define fixed values we can easily use and change later.
#define LIMIT 100000 // The maximum number we want to search up to.
// The maximum base value (a, b, c, or d) we need to check.
// Since 47^3 is greater than 100,000, checking bases up to 47 covers the LIMIT.
#define MAX_BASE_VAL 47

// 3. MAIN FUNCTION
int main()
{
    // 4. VARIABLE DECLARATION

    // sum1 and sum2 store the results of a^3 + b^3 and c^3 + d^3.
    // We use 'long long' because cubes (like 47^3) are large and can exceed
    // the capacity of a standard 'int', preventing errors.
    long long sum1, sum2;

    int count = 0; // Counter to keep track of how many Ramanujan numbers we find.

    // This flag is used to optimize the search. If we find the second way (c^3 + d^3)
    // to make sum1, we set this to 1 and immediately stop the inner loops.
    int found_match;

    // Print introductory message to the user.
    printf("Ramanujan Number Finder (a^3 + b^3 = c^3 + d^3)\n");
    printf("Searching up to %d (Max base value is %d)\n", LIMIT, MAX_BASE_VAL);
    printf("---------------------------------------------------\n");

    // 5. OUTER LOOPS: Establishing the FIRST SUM (a^3 + b^3 = sum1)

    // Loop for 'a' (the smaller base of the first pair)
    for (int a = 1; a <= MAX_BASE_VAL; a++)
    {

        // Loop for 'b' (the larger base of the first pair)
        // We start 'b' at 'a + 1' to enforce the rule a < b.
        // This prevents us from checking redundant pairs like (1, 12) and (12, 1).
        for (int b = a + 1; b <= MAX_BASE_VAL; b++)
        {

            // Calculate the first sum: sum1 = a^3 + b^3
            // (long long) is a cast to ensure the math is done using the 'long long' type.
            sum1 = (long long)a * a * a + (long long)b * b * b;

            // Optimization 1: Check if the sum exceeds the global limit.
            if (sum1 > LIMIT)
            {
                // Since 'b' is increasing, any further increase will also be over the limit.
                // We stop the 'b' loop and move to the next 'a'.
                break;
            }

            // Reset the flag for every new sum1.
            // We start searching for a second way for this new 'sum1', so we reset the flag to 0.
            found_match = 0;

            // 6. INNER LOOPS: Searching for the SECOND SUM (c^3 + d^3 = sum2)

            // Loop for 'c' (the smaller base of the second pair)
            // We start 'c' at 'a + 1' to enforce the rule a < c.
            // This ensures the two pairs {(a, b) and (c, d)} are truly distinct (e.g., 1729 = 1^3 + 12^3 and 9^3 + 10^3).
            for (int c = a + 1; c <= MAX_BASE_VAL; c++)
            {

                // Optimization 2: Check the flag to exit the 'c' loop early.
                if (found_match)
                {
                    // If we already found the second way (c, d) in a previous iteration of 'c', stop searching and move to the next (a, b) pair.
                    break;
                }

                // Loop for 'd' (the larger base of the second pair)
                // We start 'd' at 'c + 1' to enforce c < d.
                for (int d = c + 1; d <= MAX_BASE_VAL; d++)
                {

                    // Calculate the second sum: sum2 = c^3 + d^3
                    sum2 = (long long)c * c * c + (long long)d * d * d;

                    // Optimization 3: Check if the second sum has passed the first sum.
                    if (sum2 > sum1)
                    {
                        // Since 'd' is increasing, any further increase will also be greater than sum1.
                        // We stop the 'd' loop and move to the next 'c'.
                        break;
                    }

                    // 7. CONDITION CHECK: Have we found a Ramanujan number?
                    // Check if the two sums are equal.
                    if (sum1 == sum2)
                    {
                        count++; // Increment the counter

                        // Print the result in the required format.
                        printf("[%d] %lld = %d^3 + %d^3 = %d^3 + %d^3\n",
                               count, sum1, a, b, c, d);

                        // Set the flag to 1, confirming we found the second way.
                        found_match = 1;

                        // Stop the 'd' loop immediately, as we found the required second pair.
                        break;
                    }
                }
                // If found_match was set to 1, the 'break' in the d loop will execute,
                // then the 'if (found_match) break;' in the c loop will execute,
                // and the program will move to the next (a, b) pair.
            }
        }
    }

    // 8. CONCLUSION
    printf("---------------------------------------------------\n");
    printf("Search complete. Found %d Ramanujan-type numbers.\n", count);

    return 0; // Standard way to indicate successful program execution.
}
```
