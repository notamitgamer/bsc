---
title: APC-SPS-003.c
description: "C program source code for APC-SPS-003.c"
tags:
  - Beginner
---

# `APC-SPS-003.c`


!!! abstract "Problem Statement"
    Bitwise AND '&'

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License**    | MIT |
| **Difficulty** | Beginner (index: 1 / 10) |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-SPS-003.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-SPS-003.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include<stdio.h>
int main() {
	unsigned int a = 4, b = 5, c = 6;
	unsigned int x, y;
	x = a & b;
	y = b & c;
	printf("x = %u y = %u", x, y);
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
        
        CODE (APC-SPS-003.c):
        
        #include<stdio.h>
        int main() {
        	unsigned int a = 4, b = 5, c = 6;
        	unsigned int x, y;
        	x = a & b;
        	y = b & c;
        	printf("x = %u y = %u", x, y);
        	return 0;
        }
    ```

    </div>
