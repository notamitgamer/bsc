---
title: sudiptoown01.c
description: "C program source code for sudiptoown01.c"
tags:
  - Beginner
---

# `sudiptoown01.c`

## Metadata
| Property | Detail |
|---|---|
| **Difficulty** | Beginner (index: 2 / 10) |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Pointers
- Recursion
- Array

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/temp/sudiptoown01.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/temp/sudiptoown01.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>

int casekey(int door, int window, int motion, int glass) {
    int key = (door << 3) | (window << 2) | (motion << 1) | glass;
    return key;
}

int main() {
    int door, window, motion, glass, key;
    char choice;

    static const char *action[16] = {
        "IDLE", "CHECK WINDOW", "WARN MOTION", "WARN MOTION WINDOW",
        "CHECK DOOR", "WARN DOOR WINDOW", "INTRUSION SUSPECTED", "INTRUSION CONFIRMED",
        "GLASS ONLY", "DOOR GLASS", "MOTION GLASS", "MOTION WINDOW GLASS",
        "DOOR WINDOW", "DOOR WINDOW GLASS", "DOOR MOTION GLASS", "ALL SENSORS"
    };

    do {
        printf("Sensors: Door, Window, Motion, Glass\n");
        printf("Enter the state of each sensor in binary (0 or 1): ");
        scanf("%d %d %d %d", &door, &window, &motion, &glass);

        key = casekey(door, window, motion, glass);
        printf("Action: %s\n", action[key]);

        printf("Want to continue? (y/n): ");
        scanf(" %c", &choice);
        printf("\n");
    } while (choice == 'y' || choice == 'Y');

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
        
        CODE (sudiptoown01.c):
        
        #include <stdio.h>
        
        int casekey(int door, int window, int motion, int glass) {
            int key = (door << 3) | (window << 2) | (motion << 1) | glass;
            return key;
        }
        
        int main() {
            int door, window, motion, glass, key;
            char choice;
        
            static const char *action[16] = {
                "IDLE", "CHECK WINDOW", "WARN MOTION", "WARN MOTION WINDOW",
                "CHECK DOOR", "WARN DOOR WINDOW", "INTRUSION SUSPECTED", "INTRUSION CONFIRMED",
                "GLASS ONLY", "DOOR GLASS", "MOTION GLASS", "MOTION WINDOW GLASS",
                "DOOR WINDOW", "DOOR WINDOW GLASS", "DOOR MOTION GLASS", "ALL SENSORS"
            };
        
            do {
                printf("Sensors: Door, Window, Motion, Glass\n");
                printf("Enter the state of each sensor in binary (0 or 1): ");
                scanf("%d %d %d %d", &door, &window, &motion, &glass);
        
                key = casekey(door, window, motion, glass);
                printf("Action: %s\n", action[key]);
        
                printf("Want to continue? (y/n): ");
                scanf(" %c", &choice);
                printf("\n");
            } while (choice == 'y' || choice == 'Y');
        
            return 0;
        }
    ```

    </div>
