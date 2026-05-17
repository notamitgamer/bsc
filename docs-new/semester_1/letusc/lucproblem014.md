---
title: lucproblem014.c
description: "C program source code for lucproblem014.c"
tags:
  - Beginner
---

# `lucproblem014.c`


!!! abstract "Problem Statement"
    Write a function that receives integers and returns the sum, average and standard deviation of these numbers. Call this function from main() and print the result in main()

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta <amitdutta4255@gmail.com> |
| **Date**       | 12 Dec 2025 |
| **License**    | MIT License (See the LICENSE file for details) |
| **Difficulty** | Beginner (index: 3 / 10) |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Pointers
- Recursion
- Sorting (possible)
- Iteration

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/letusc/lucproblem014.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/letusc/lucproblem014.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>
#include <math.h>

// Function prototype: Using pointers for 'call by reference' to return 3 values.
void stats(double *, double *, double *);

int main()
{
    double sum, average, standardDeviation;
    // Passing addresses of variables to receive results from the function.
    stats(&sum, &average, &standardDeviation);

    printf("\n--- Stats ---"
           "\nSum: %g"
           "\nAverage: %g"
           "\nStandard Deviation: %g",
           sum, average, standardDeviation);
    return 0;
}

// Function to calculate statistics on user-provided numbers.
void stats(double *sum, double *average, double *standardDeviation)
{
    int n;
    // Input Validation Loop for N
    do
    {
        printf("How many numbers you want to give input: ");

        if (scanf("%d", &n) == 1)
        {
            break;
        }
        else
        {
            printf("\nPlease enter a valid number.\n");
            // Clearing input buffer to handle invalid input
            while (getchar() != '\n' && !feof(stdin))
                ;
        }
    } while (1);

    // Variable-Length Array (VLA) to store the input numbers.
    double inputNumber[n];
    int i = 0;

    printf("\n--- Enter Numbers ---\n");

    // Input Loop for numbers
    while (i < n)
    {
        printf("Enter number %d: ", i + 1);

        if (scanf("%lf", &inputNumber[i]) == 1)
        {
            // Clearing input buffer after successful read
            while (getchar() != '\n')
                ;
            i++;
        }
        else
        {
            printf("Invalid input. Only integers are allowed. Please try again.\n");
            // Clearing input buffer to handle invalid input
            while (getchar() != '\n' && !feof(stdin))
                ;
        }
    }

    // 1. Sum Calculation
    double tempSum = 0;
    for (i = 0; i < n; i++)
        tempSum += inputNumber[i];

    // 2. Average (Mean) calculation
    double tempAverage = tempSum / n;

    // 3. Standard Deviation (Sample SD formula used)
    double tempStandardDeviation = 0.0;

    // Preventing division by zero if n is 1. SD is 0 for a single number.
    if (n > 1)
    {
        double tempSumation = 0;
        // calculating the sum of squared differences from the mean
        for (i = 0; i < n; i++)
            tempSumation += pow((inputNumber[i] - tempAverage), 2.0);

        // Calculating sample standard deviation
        tempStandardDeviation = sqrt(tempSumation / (n - 1));
    }

    // Assigning final values back to the variables in main().
    *sum = tempSum;
    *average = tempAverage;
    *standardDeviation = tempStandardDeviation;
}
```
</div>

## Explanation

??? info "Explain with AI"

    Copy the prompt below and paste it into any AI assistant.

    <div data-search-exclude="true">

    ```text
        You are explaining a C programming code to a beginner.
        
        STRICT RULES:
        
        - Only use the given code. Do NOT assume anything not present.
        
        - Do NOT add extra examples.
        
        - Keep explanation clear and short.
        
        - If something is unclear, say "Not clear from code".
        
        - Follow the exact format below. Do NOT change headings.
        
        FORMAT:
        
        [START]
        
        ## What it does
        
        (Explain the overall purpose in 1-2 sentences)
        
        ## Step-by-step
        
        (Explain how the code works in steps, simple language)
        
        ## Key Concepts
        
        (List concepts like loop, condition, function, etc.)
        
        ## Notes
        
        (Mention any limitations, errors, or assumptions)
        
        [END]
        
        CODE (lucproblem014.c):
        
        #include <stdio.h>
        #include <math.h>
        
        // Function prototype: Using pointers for 'call by reference' to return 3 values.
        void stats(double *, double *, double *);
        
        int main()
        {
            double sum, average, standardDeviation;
            // Passing addresses of variables to receive results from the function.
            stats(&sum, &average, &standardDeviation);
        
            printf("\n--- Stats ---"
                   "\nSum: %g"
                   "\nAverage: %g"
                   "\nStandard Deviation: %g",
                   sum, average, standardDeviation);
            return 0;
        }
        
        // Function to calculate statistics on user-provided numbers.
        void stats(double *sum, double *average, double *standardDeviation)
        {
            int n;
            // Input Validation Loop for N
            do
            {
                printf("How many numbers you want to give input: ");
        
                if (scanf("%d", &n) == 1)
                {
                    break;
                }
                else
                {
                    printf("\nPlease enter a valid number.\n");
                    // Clearing input buffer to handle invalid input
                    while (getchar() != '\n' && !feof(stdin))
                        ;
                }
            } while (1);
        
            // Variable-Length Array (VLA) to store the input numbers.
            double inputNumber[n];
            int i = 0;
        
            printf("\n--- Enter Numbers ---\n");
        
            // Input Loop for numbers
            while (i < n)
            {
                printf("Enter number %d: ", i + 1);
        
                if (scanf("%lf", &inputNumber[i]) == 1)
                {
                    // Clearing input buffer after successful read
                    while (getchar() != '\n')
                        ;
                    i++;
                }
                else
                {
                    printf("Invalid input. Only integers are allowed. Please try again.\n");
                    // Clearing input buffer to handle invalid input
                    while (getchar() != '\n' && !feof(stdin))
                        ;
                }
            }
        
            /
        ... (truncated for brevity)
    ```

    </div>
