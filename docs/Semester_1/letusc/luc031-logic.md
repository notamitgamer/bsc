---
label: luc031-logic.c
description: "C program source code for luc031-logic.c"
---

# `luc031-logic.c`

## Problem Statement
!!!
Write a program to enter numbers till the user wants. At the end it should display the count of positive, negative and zeros entered.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta <amitdutta4255@gmail.com> |
| **Date** | 12 Dec 2025 |
| **License** | MIT License (See the LICENSE file for details) |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/letusc/luc031-logic.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/letusc/luc031-logic.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
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
```
