---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> luc040-logic.c'
description: 'Ramanujan number (1729) is the smallest number that can be expressed as sum of cubes in two different ways - 1729 can be expressed as 1^3 + 12^3 and 9^3 + 10^3. Write a program to print all such numbers up to a reasonable limit.'
source: 'semester_1/letusc/luc040-logic.c'
---

# luc040-logic.c

### Metadata

- **Author** — [Amit Dutta](mailto:amitdutta4255@gmail.com)
- **Last updated** — 12 Dec 2025
- **License** — [MIT License (See the LICENSE file for details)](https://github.com/notamitgamer/bsc/blob/main/LICENSE)


### Problem Statement

::: tip Problem Statement
Ramanujan number (1729) is the smallest number that can be expressed as sum of cubes in two different ways - 1729 can be expressed as 1^3 + 12^3 and 9^3 + 10^3. Write a program to print all such numbers up to a reasonable limit.
:::

## Source Code

<div style="display:flex;gap:12px;margin-bottom:12px;">
  <a href="https://github.com/notamitgamer/bsc/blob/main/semester_1/letusc/luc040-logic.c" target="_blank" rel="noopener noreferrer"   style="display:inline-flex;align-items:center;gap:6px;font-size:0.85rem;          text-decoration:none;color:var(--vp-c-brand);">
    <svg xmlns="http://www.w3.org/2000/svg" width="15" height="15" viewBox="0 0 24 24"         fill="currentColor" style="vertical-align:middle;">
      <path d="M12 0C5.37 0 0 5.373 0 12c0 5.303 3.438 9.8 8.205 11.387.6.113.82-.258             .82-.577v-2.234c-3.338.726-4.033-1.416-4.033-1.416-.546-1.387-1.333-1.757             -1.333-1.757-1.089-.745.083-.729.083-.729 1.205.084 1.84 1.236 1.84 1.236             1.07 1.835 2.809 1.305 3.495.998.108-.776.417-1.305.76-1.605-2.665-.3             -5.466-1.332-5.466-5.93 0-1.31.465-2.38 1.235-3.22-.135-.303-.54-1.523             .105-3.176 0 0 1.005-.322 3.3 1.23.96-.267 1.98-.399 3-.405 1.02.006             2.04.138 3 .405 2.28-1.552 3.285-1.23 3.285-1.23.645 1.653.24 2.873             .12 3.176.765.84 1.23 1.91 1.23 3.22 0 4.61-2.805 5.625-5.475 5.92             .42.36.81 1.096.81 2.22v3.293c0 .319.21.694.825.576C20.565 21.795             24 17.298 24 12c0-6.627-5.373-12-12-12z"/>
    </svg>
    View on GitHub
  </a>
  <a href="https://raw.usercontent.amit.is-a.dev/semester_1/letusc/luc040-logic.c" target="_blank" rel="noopener noreferrer"   style="display:inline-flex;align-items:center;gap:6px;font-size:0.85rem;          text-decoration:none;color:var(--vp-c-text-2);">
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
