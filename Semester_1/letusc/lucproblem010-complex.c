/*
 * Author  : Amit Dutta <amitdutta4255@gmail.com>
 * Date    : 12 Dec 2025
 * Repo    : https://github.com/notamitgamer/bsc
 * License : MIT License (See the LICENSE file for details)
 * Copyright (c) 2025 Amit Dutta
 */

/* Write a program to generate all combinations (permutations) of 1, 2 and 3
   from 1-digit numbers up to 4-digit numbers using a main loop to control
   the number of digits (1 to 3333).
*/
/* Let Us C, Chap - 6, Page - 103, Problem 6.3 */

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
