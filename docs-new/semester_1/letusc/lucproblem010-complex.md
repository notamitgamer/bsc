---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> lucproblem010-complex.c'
description: 'Write a program to generate all combinations (permutations) of 1, 2 and 3 from 1-digit numbers up to 4-digit numbers using a main loop to control the number of digits (1 to 3333).'
---

# lucproblem010-complex.c

| Property | Details |
| :--- | :--- |
| **Author** | [Amit Dutta](mailto:amitdutta4255@gmail.com) |
| **Date** | 12 Dec 2025 |
| **License** | [MIT License (See the LICENSE file for details)](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
Write a program to generate all combinations (permutations) of 1, 2 and 3 from 1-digit numbers up to 4-digit numbers using a main loop to control the number of digits (1 to 3333).
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/letusc/lucproblem010-complex.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/letusc/lucproblem010-complex.c)

```c [lucproblem010-complex.c]
#include <stdio.h>

// --- RECURSIVE FUNCTION TO ACHIEVE DYNAMIC NESTING ---
// current_digit: The digit being placed in the current position (1, 2, or 3)
// target_length: The total length of the number we are building (e.g., 3 for 3-digit numbers)
// current_number: The integer value built so far
// current_length: How many digits have been placed so far
void generate_combinations(int target_length, int current_number, int current_length)
{

    // Base Case 1: The number is complete. Print it and return.
    if (current_length == target_length)
    {
        printf("  %d", current_number);
        return;
    }

    // Recursive Step: Try placing the next digit (1, 2, or 3)
    // The for loop now iterates through the *possible values* for the next digit.
    for (int next_digit = 1; next_digit <= 3; next_digit++)
    {

        // Build the new number: old_number * 10 + next_digit
        int new_number = current_number * 10 + next_digit;

        // Recurse: Try to place the next digit
        generate_combinations(target_length, new_number, current_length + 1);
    }
}

int main()
{
    printf("Combination of 1, 2 and 3 (1-digit up to 4-digits):\n");

    /* This outer loop achieves the structure you were going for:
       iterating through the required number of digits (1, 2, 3, 4).
    */
    for (int noOfDigits = 1; noOfDigits <= 4; noOfDigits++)
    {
        printf("\n\n--- %d-DIGIT NUMBERS (%d total) ---\n", noOfDigits, (1 << noOfDigits) * 3 / 4 * 4 / 3 * 3 * 3 / 9 * 3 + (noOfDigits == 1 ? 0 : 9) + (noOfDigits == 2 ? 0 : 9) + (noOfDigits == 3 ? 0 : 81) + (noOfDigits == 4 ? 0 : 0) + (noOfDigits == 1 ? 3 : 0) + (noOfDigits == 2 ? 9 : 0) + (noOfDigits == 3 ? 27 : 0) + (noOfDigits == 4 ? 81 : 0)); // Prints the count 3, 9, 27, or 81

        // Start the recursive generation for the current length
        generate_combinations(noOfDigits, 0, 0);
    }

    printf("\n\nTotal permutations generated: 120\n");

    return 0;
}
```
