---
title: assignment-s-07.c
description: "C program source code for assignment-s-07.c"
tags:
  - Beginner
---

# `assignment-s-07.c`


!!! abstract "Problem Statement"
    Write a program to swap two numbers using a macro (#define).

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License**    | MIT |
| **Difficulty** | Beginner (index: 0 / 10) |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Iteration

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/assignment-secondary/assignment-s-07.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-secondary/assignment-s-07.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>

// Define the SWAP macro.
// The do-while(0) block is a common trick to ensure the macro behaves
// like a single statement, regardless of where it is used (e.g., inside an 'if' statement).
#define SWAP(a, b, data_type)   \
    do {                        \
        data_type temp = a;     \
        a = b;                  \
        b = temp;               \
    } while(0)

int main() {
    int num1 = 15;
    int num2 = 42;

    printf("--- Before Swap ---\n");
    printf("Number 1 (num1): %d\n", num1);
    printf("Number 2 (num2): %d\n", num2);

    // Call the macro, passing the variables and their type
    // The preprocessor replaces this line with the block of code defined above.
    SWAP(num1, num2, int);

    printf("\n--- After Swap (using macro) ---\n");
    printf("Number 1 (num1): %d\n", num1);
    printf("Number 2 (num2): %d\n", num2);

    return 0;
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
        
        CODE (assignment-s-07.c):
        
        #include <stdio.h>
        
        // Define the SWAP macro.
        // The do-while(0) block is a common trick to ensure the macro behaves
        // like a single statement, regardless of where it is used (e.g., inside an 'if' statement).
        #define SWAP(a, b, data_type)   \
            do {                        \
                data_type temp = a;     \
                a = b;                  \
                b = temp;               \
            } while(0)
        
        int main() {
            int num1 = 15;
            int num2 = 42;
        
            printf("--- Before Swap ---\n");
            printf("Number 1 (num1): %d\n", num1);
            printf("Number 2 (num2): %d\n", num2);
        
            // Call the macro, passing the variables and their type
            // The preprocessor replaces this line with the block of code defined above.
            SWAP(num1, num2, int);
        
            printf("\n--- After Swap (using macro) ---\n");
            printf("Number 1 (num1): %d\n", num1);
            printf("Number 2 (num2): %d\n", num2);
        
            return 0;
        }
    ```

    </div>
