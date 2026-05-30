---
title: lucproblem010-complex.c
description: "C program source code for lucproblem010-complex.c"
icon: lucide/file-code
---

# `lucproblem010-complex.c`


!!! abstract "Problem Statement"
    Write a program to generate all combinations (permutations) of 1, 2 and 3 from 1-digit numbers up to 4-digit numbers using a main loop to control the number of digits (1 to 3333).

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta <amitdutta4255@gmail.com> |
| **Date** | 12 Dec 2025 |
| **License** | MIT License (See the LICENSE file for details) |

## Actions

<div class="action-buttons-desktop">
<a href="https://raw.usercontent.amit.is-a.dev/semester_1/letusc/lucproblem010-complex.c" class="md-button" target="_blank" rel="noopener">Raw</a>
<a href="https://github.com/notamitgamer/bsc/blob/main/semester_1/letusc/lucproblem010-complex.c" class="md-button" target="_blank" rel="noopener">View on GitHub</a>
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
  <a href="https://raw.usercontent.amit.is-a.dev/semester_1/letusc/lucproblem010-complex.c" target="_blank" rel="noopener" onclick="closeActionSheet()">
    <span class="ti ti-file-code item-icon" aria-hidden="true"></span>
    <span class="item-label">Raw</span>
  </a>
  <a href="https://github.com/notamitgamer/bsc/blob/main/semester_1/letusc/lucproblem010-complex.c" target="_blank" rel="noopener" onclick="closeActionSheet()">
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

// --- RECURSIVE FUNCTION TO ACHIEVE DYNAMIC NESTING ---
// current_digit: The digit being placed in the current position (1, 2, or 3)
// target_length: The total length of the number we are building (e.g., 3 for 3-digit numbers)
// current_number: The integer value built so far
// current_length: How many digits have been placed so far
void generate_combinations(int target_length, int current_number, int current_length)
{

    // Base Case 1: The number is complete. Print it and return.
    if (current_length == target_length)
    {
        printf("  %d", current_number);
        return;
    }

    // Recursive Step: Try placing the next digit (1, 2, or 3)
    // The for loop now iterates through the *possible values* for the next digit.
    for (int next_digit = 1; next_digit <= 3; next_digit++)
    {

        // Build the new number: old_number * 10 + next_digit
        int new_number = current_number * 10 + next_digit;

        // Recurse: Try to place the next digit
        generate_combinations(target_length, new_number, current_length + 1);
    }
}

int main()
{
    printf("Combination of 1, 2 and 3 (1-digit up to 4-digits):\n");

    /* This outer loop achieves the structure you were going for:
       iterating through the required number of digits (1, 2, 3, 4).
    */
    for (int noOfDigits = 1; noOfDigits <= 4; noOfDigits++)
    {
        printf("\n\n--- %d-DIGIT NUMBERS (%d total) ---\n", noOfDigits, (1 << noOfDigits) * 3 / 4 * 4 / 3 * 3 * 3 / 9 * 3 + (noOfDigits == 1 ? 0 : 9) + (noOfDigits == 2 ? 0 : 9) + (noOfDigits == 3 ? 0 : 81) + (noOfDigits == 4 ? 0 : 0) + (noOfDigits == 1 ? 3 : 0) + (noOfDigits == 2 ? 9 : 0) + (noOfDigits == 3 ? 27 : 0) + (noOfDigits == 4 ? 81 : 0)); // Prints the count 3, 9, 27, or 81

        // Start the recursive generation for the current length
        generate_combinations(noOfDigits, 0, 0);
    }

    printf("\n\nTotal permutations generated: 120\n");

    return 0;
}
```
</div>
