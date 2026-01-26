/*
 * Author  : Amit Dutta <amitdutta4255@gmail.com>
 * Date    : 12 Dec 2025
 * Repo    : https://github.com/notamitgamer/bsc
 * License : MIT License (See the LICENSE file for details)
 * Copyright (c) 2025 Amit Dutta
 */

/* Write a program to enter numbers till the user wants. At the end it 
should display the count of positive, negative and zeros entered. */
/* Let Us C, Chap- 5, Page - 87, Qn No.: B(d) */

/*
 * DETAILED PROGRAM PLAN:
 * 1. INITIALIZATION: Set three counters (positive_count, negative_count, zero_count) to zero.
 * 2. INPUT LOOP: Start an infinite loop to continuously request user input.
 * 3. READ INPUT: Use fgets() to read the user's input as a generic string (char array). 
 * This allows the program to accept multi-digit numbers (e.g., "-500") or the command ('n').
 * 4. TERMINATION CHECK: Immediately check if the input string is exactly "n" using strcmp(). 
 * If true, the user wants to quit, so break the loop.
 * 5. VALIDATION & CONVERSION: If the input is not "n", use sscanf() to safely attempt to convert 
 * the string into an integer.
 * 6. COUNTING LOGIC: If sscanf() successfully reads an integer (sscanf returns 1):
 * - If the number is > 0, increment positive_count.
 * - If the number is < 0, increment negative_count.
 * - If the number is == 0, increment zero_count.
 * 7. ERROR HANDLING: If the input is neither "n" nor a valid number (sscanf returns 0), 
 * inform the user of invalid input and continue the loop.
 * 8. FINAL DISPLAY: After the loop terminates, print the final totals for positive, negative, and zero counts.
 */

#include <stdio.h>
#include <stdlib.h> // for strtol
#include <string.h> // for strcmp

// Maximum size of the input line
#define MAX_INPUT_LEN 15 

int main() {
    // Initialize counters
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;

    // Buffer to store the user's input as a string (e.g., "123", "-50", or "n")
    char input_buffer[MAX_INPUT_LEN];
    int number;

    printf("--- Number Analyzer ---\n");
    printf("Enter numbers one by one. Type 'n' and press Enter to finish.\n\n");

    // Loop until the user enters 'n'
    while (1) {
        printf("Enter number or 'n': ");

        // Read the entire line of input into the buffer
        if (fgets(input_buffer, MAX_INPUT_LEN, stdin) == NULL) {
            // Handle EOF (end of file) or reading error
            break;
        }

        // Remove the trailing newline character from the input_buffer
        // The last character will be '\n' if the input was shorter than MAX_INPUT_LEN
        size_t len = strlen(input_buffer);
        if (len > 0 && input_buffer[len - 1] == '\n') {
            input_buffer[len - 1] = '\0';
        }

        // 1. Check for the termination condition
        if (strcmp(input_buffer, "n") == 0) {
            printf("\n'n' received. Stopping input...\n");
            break; // Exit the while loop
        }

        // 2. Attempt to convert the input string to an integer
        // sscanf attempts to read the string according to the format "%d" (decimal integer)
        // It returns 1 if a number was successfully read.
        int conversions = sscanf(input_buffer, "%d", &number);

        if (conversions == 1) {
            // Conversion was successful, now check the number's sign
            if (number > 0) {
                positive_count++;
            } else if (number < 0) {
                negative_count++;
            } else {
                zero_count++;
            }
            printf("  -> Number recorded: %d\n", number);
        } else {
            // Conversion failed. The input was neither 'n' nor a valid integer.
            printf("  -> Invalid input. Please enter a valid number or 'n'.\n");
        }
    }

    // Display the final results
    printf("\n====================================\n");
    printf("   Analysis Complete\n");
    printf("====================================\n");
    printf("Positive numbers entered: %d\n", positive_count);
    printf("Negative numbers entered: %d\n", negative_count);
    printf("Zeroes entered:           %d\n", zero_count);
    printf("Total numbers recorded:   %d\n", positive_count + negative_count + zero_count);
    printf("====================================\n");

    return 0;
}