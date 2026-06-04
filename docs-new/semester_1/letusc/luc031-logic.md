---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> luc031-logic.c'
description: 'Write a program to enter numbers till the user wants. At the end it should display the count of positive, negative and zeros entered.'
---

# luc031-logic.c

| Property | Details |
| :--- | :--- |
| **Author** | [Amit Dutta](mailto:amitdutta4255@gmail.com) |
| **Date** | 12 Dec 2025 |
| **License** | [MIT License (See the LICENSE file for details)](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
Write a program to enter numbers till the user wants. At the end it should display the count of positive, negative and zeros entered.
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/letusc/luc031-logic.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/letusc/luc031-logic.c)

```c [luc031-logic.c]
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
