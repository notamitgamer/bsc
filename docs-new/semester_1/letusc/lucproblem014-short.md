---
title: lucproblem014-short.c
description: "C program source code for lucproblem014-short.c"
tags:
  - Beginner
---

# `lucproblem014-short.c`


!!! abstract "Problem Statement"
    Write a function that receives integers and returns the sum, average and standard deviation of these numbers. Call this function from main() and print the result in main()

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta <amitdutta4255@gmail.com> |
| **Date**       | 12 Dec 2025 |
| **License**    | MIT License (See the LICENSE file for details) |
| **Difficulty** | Beginner (index: 2 / 10) |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Pointers
- Recursion
- Sorting (possible)
- Iteration

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/letusc/lucproblem014-short.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/letusc/lucproblem014-short.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>
#include <math.h>

void stats(double *, double *, double *);

int main()
{
    double sum, average, standardDeviation;
    stats(&sum, &average, &standardDeviation);

    printf("\n--- Stats ---"
           "\nSum: %g"
           "\nAverage: %g"
           "\nStandard Deviation: %g",
           sum, average, standardDeviation);
    return 0;
}

void stats(double *sum, double *average, double *standardDeviation)
{
    int n;
    printf("How many numbers you want to give input: ");
    scanf("%d", &n);

    double inputNumber[n];
    int i;

    printf("\n--- Enter Numbers ---\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%lf", &inputNumber[i]);
    }

    double tempSum = 0;
    for (i = 0; i < n; i++)
        tempSum += inputNumber[i];

    double tempAverage = tempSum / n;

    double tempStandardDeviation = 0.0;

    if (n > 1)
    {
        double tempSumation = 0;
        for (i = 0; i < n; i++)
            tempSumation += pow((inputNumber[i] - tempAverage), 2.0);

        tempStandardDeviation = sqrt(tempSumation / (n - 1));
    }

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
        
        CODE (lucproblem014-short.c):
        
        #include <stdio.h>
        #include <math.h>
        
        void stats(double *, double *, double *);
        
        int main()
        {
            double sum, average, standardDeviation;
            stats(&sum, &average, &standardDeviation);
        
            printf("\n--- Stats ---"
                   "\nSum: %g"
                   "\nAverage: %g"
                   "\nStandard Deviation: %g",
                   sum, average, standardDeviation);
            return 0;
        }
        
        void stats(double *sum, double *average, double *standardDeviation)
        {
            int n;
            printf("How many numbers you want to give input: ");
            scanf("%d", &n);
        
            double inputNumber[n];
            int i;
        
            printf("\n--- Enter Numbers ---\n");
            for (i = 0; i < n; i++)
            {
                printf("Enter number %d: ", i + 1);
                scanf("%lf", &inputNumber[i]);
            }
        
            double tempSum = 0;
            for (i = 0; i < n; i++)
                tempSum += inputNumber[i];
        
            double tempAverage = tempSum / n;
        
            double tempStandardDeviation = 0.0;
        
            if (n > 1)
            {
                double tempSumation = 0;
                for (i = 0; i < n; i++)
                    tempSumation += pow((inputNumber[i] - tempAverage), 2.0);
        
                tempStandardDeviation = sqrt(tempSumation / (n - 1));
            }
        
            *sum = tempSum;
            *average = tempAverage;
            *standardDeviation = tempStandardDeviation;
        }
    ```

    </div>
