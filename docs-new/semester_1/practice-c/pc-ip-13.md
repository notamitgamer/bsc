---
title: pc-ip-13.c
description: "C program source code for pc-ip-13.c"
tags:
  - Beginner
---

# `pc-ip-13.c`


!!! abstract "Problem Statement"
    Question 13: Write a program to display the Fibonacci series using recursive function and iterative function.

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta <amitdutta4255@gmail.com> |
| **Date**       | 05 Jan 2026 |
| **License**    | MIT License (See the LICENSE file for details) |
| **Difficulty** | Beginner (index: 2 / 10) |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Recursion
- Sorting (possible)
- Iteration

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/practice-c/pc-ip-13.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/practice-c/pc-ip-13.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>

long long int fib_rec(int);
void fib_rec_print(int);
void fib_ite_print(int);

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fib_rec_print(n);
    fib_ite_print(n);
    return 0;
}

void fib_rec_print(int n)
{
    int i;
    printf("\nFibonacci Series (Recursion):");
    for (i = 0; i <= n; i++)
    {
        printf("  %lld", fib_rec(i));
    }
}

void fib_ite_print(int n)
{
    int i, t1 = 0, t2 = 1, t3;
    printf("\nFibonacci Series (iteration):");
    if (n > 0)
    {
        printf("  0");
    }
    if (n > 1)
    {
        printf("  1");
    }
    for (i = 2; i <= n; i++)
    {
        t3 = t1 + t2;
        printf("  %d", t3);
        t1 = t2;
        t2 = t3;
    }
}

long long int fib_rec(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fib_rec(n - 1) + fib_rec(n - 2);
    }
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
        
        CODE (pc-ip-13.c):
        
        #include <stdio.h>
        
        long long int fib_rec(int);
        void fib_rec_print(int);
        void fib_ite_print(int);
        
        int main()
        {
            int n;
            printf("Enter the number of terms: ");
            scanf("%d", &n);
            fib_rec_print(n);
            fib_ite_print(n);
            return 0;
        }
        
        void fib_rec_print(int n)
        {
            int i;
            printf("\nFibonacci Series (Recursion):");
            for (i = 0; i <= n; i++)
            {
                printf("  %lld", fib_rec(i));
            }
        }
        
        void fib_ite_print(int n)
        {
            int i, t1 = 0, t2 = 1, t3;
            printf("\nFibonacci Series (iteration):");
            if (n > 0)
            {
                printf("  0");
            }
            if (n > 1)
            {
                printf("  1");
            }
            for (i = 2; i <= n; i++)
            {
                t3 = t1 + t2;
                printf("  %d", t3);
                t1 = t2;
                t2 = t3;
            }
        }
        
        long long int fib_rec(int n)
        {
            if (n == 0 || n == 1)
            {
                return n;
            }
            else
            {
                return fib_rec(n - 1) + fib_rec(n - 2);
            }
        }
    ```

    </div>
