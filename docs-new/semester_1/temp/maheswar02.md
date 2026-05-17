---
title: maheswar02.c
description: "C program source code for maheswar02.c"
tags:
  - Beginner
---

# `maheswar02.c`

## Metadata
| Property | Detail |
|---|---|
| **Difficulty** | Beginner (index: 2 / 10) |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Pointers

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/temp/maheswar02.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/temp/maheswar02.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include<stdio.h>
#include<stdlib.h>

int main() {
    FILE *fIn, *fEven, *fOdd;
    int n;

    fIn = fopen("input.txt", "r");
    fEven = fopen("EVENFile.txt", "w");
    fOdd = fopen("ODDFile.txt", "w");

    // Check if files opened successfully
    if ((fIn == NULL) || (fEven == NULL) || (fOdd == NULL)) {
        printf("ERROR : one or more file opening FAILED!");
        if (fIn != NULL) fclose(fIn);
        if (fEven != NULL) fclose(fEven);
        if (fOdd != NULL) fclose(fOdd);
        exit(1);
    }

    // Read numbers and separate them into even and odd files
    while (fscanf(fIn, "%d", &n) != EOF)
        (n % 2 == 0) ? fprintf(fEven, "%d\n", n) : fprintf(fOdd, "%d\n", n);

    // Close all files
    fclose(fIn);
    fclose(fEven);
    fclose(fOdd);

    printf("OPERATION COMPLETED SUCCESSFULLY.");
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
        
        CODE (maheswar02.c):
        
        #include<stdio.h>
        #include<stdlib.h>
        
        int main() {
            FILE *fIn, *fEven, *fOdd;
            int n;
        
            fIn = fopen("input.txt", "r");
            fEven = fopen("EVENFile.txt", "w");
            fOdd = fopen("ODDFile.txt", "w");
        
            // Check if files opened successfully
            if ((fIn == NULL) || (fEven == NULL) || (fOdd == NULL)) {
                printf("ERROR : one or more file opening FAILED!");
                if (fIn != NULL) fclose(fIn);
                if (fEven != NULL) fclose(fEven);
                if (fOdd != NULL) fclose(fOdd);
                exit(1);
            }
        
            // Read numbers and separate them into even and odd files
            while (fscanf(fIn, "%d", &n) != EOF)
                (n % 2 == 0) ? fprintf(fEven, "%d\n", n) : fprintf(fOdd, "%d\n", n);
        
            // Close all files
            fclose(fIn);
            fclose(fEven);
            fclose(fOdd);
        
            printf("OPERATION COMPLETED SUCCESSFULLY.");
            return 0;
        }
    ```

    </div>
