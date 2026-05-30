---
title: luc031-logic.c
description: "C program source code for luc031-logic.c"
icon: lucide/file-code
---

# `luc031-logic.c`


!!! abstract "Problem Statement"
    Write a program to enter numbers till the user wants. At the end it should display the count of positive, negative and zeros entered.

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta <amitdutta4255@gmail.com> |
| **Date** | 12 Dec 2025 |
| **License** | MIT License (See the LICENSE file for details) |

## Actions

<div class="action-buttons-desktop">
<a href="https://raw.usercontent.amit.is-a.dev/semester_1/letusc/luc031-logic.c" class="md-button" target="_blank" rel="noopener">Raw</a>
<a href="https://github.com/notamitgamer/bsc/blob/main/semester_1/letusc/luc031-logic.c" class="md-button" target="_blank" rel="noopener">View on GitHub</a>
<button class="md-button" type="button" onclick="copyPageUrl()">Copy URL</button>
</div>

> You can print or save this file by opening Raw and using your browser.

<div class="action-buttons-mobile">
<button class="md-button" onclick="openActionSheet()">Actions</button>
</div>

<div class="dd-backdrop" id="actionBackdrop" onclick="closeActionSheet()"></div>
<div class="dd-sheet" id="actionSheet" role="dialog" aria-modal="true" aria-label="Actions">
  <div class="dd-sheet-handle"></div>
  <div class="dd-sheet-title"><span class="ti ti-bolt" aria-hidden="true"></span> Actions</div>
  <a href="https://raw.usercontent.amit.is-a.dev/semester_1/letusc/luc031-logic.c" target="_blank" rel="noopener" onclick="closeActionSheet()">
    <span class="ti ti-file-code item-icon" aria-hidden="true"></span>
    <span class="item-label">Raw</span>
  </a>
  <a href="https://github.com/notamitgamer/bsc/blob/main/semester_1/letusc/luc031-logic.c" target="_blank" rel="noopener" onclick="closeActionSheet()">
    <span class="ti ti-brand-github item-icon" aria-hidden="true"></span>
    <span class="item-label">View on GitHub</span>
  </a>
  <a href="javascript:void(0)" onclick="copyAndClose()">
    <span class="ti ti-copy item-icon" aria-hidden="true"></span>
    <span class="item-label">Copy URL</span>
  </a>
</div>

<script>
function openActionSheet(){var b=document.getElementById("actionBackdrop"),s=document.getElementById("actionSheet");b.style.display="block";s.style.display="block";document.body.style.overflow="hidden";requestAnimationFrame(function(){b.classList.add("visible");s.classList.add("visible");});}
function closeActionSheet(){var b=document.getElementById("actionBackdrop"),s=document.getElementById("actionSheet");b.classList.remove("visible");s.classList.remove("visible");document.body.style.overflow="";setTimeout(function(){b.style.display="none";s.style.display="none";},300);}
function copyPageUrl(){var btn=document.querySelector(".action-buttons-desktop .md-button:last-child");try{navigator.clipboard.writeText(window.location.href).then(function(){if(btn){var o=btn.textContent;btn.textContent="Copied!";setTimeout(function(){btn.textContent=o;},1800);}}).catch(function(){fallbackCopy();});}catch(e){fallbackCopy();}}
function fallbackCopy(){var ta=document.createElement("textarea");ta.value=window.location.href;ta.style.position="fixed";ta.style.opacity="0";document.body.appendChild(ta);ta.focus();ta.select();try{document.execCommand("copy");}catch(e){}document.body.removeChild(ta);}
function copyAndClose(){closeActionSheet();setTimeout(function(){copyPageUrl();},320);}
</script>

## Source Code
<div data-search-exclude="true">
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
</div>
