---
title: lucproblem014.c
description: "C program source code for lucproblem014.c"
icon: lucide/file-code
---

# `lucproblem014.c`


!!! abstract "Problem Statement"
    Write a function that receives integers and returns the sum, average and standard deviation of these numbers. Call this function from main() and print the result in main()

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta <amitdutta4255@gmail.com> |
| **Date** | 12 Dec 2025 |
| **License** | MIT License (See the LICENSE file for details) |

## Actions

<div class="action-buttons-desktop">
<a href="https://raw.usercontent.amit.is-a.dev/semester_1/letusc/lucproblem014.c" class="md-button" target="_blank" rel="noopener">Raw</a>
<a href="https://github.com/notamitgamer/bsc/blob/main/semester_1/letusc/lucproblem014.c" class="md-button" target="_blank" rel="noopener">View on GitHub</a>
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
  <a href="https://raw.usercontent.amit.is-a.dev/semester_1/letusc/lucproblem014.c" target="_blank" rel="noopener" onclick="closeActionSheet()">
    <span class="ti ti-file-code item-icon" aria-hidden="true"></span>
    <span class="item-label">Raw</span>
  </a>
  <a href="https://github.com/notamitgamer/bsc/blob/main/semester_1/letusc/lucproblem014.c" target="_blank" rel="noopener" onclick="closeActionSheet()">
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
