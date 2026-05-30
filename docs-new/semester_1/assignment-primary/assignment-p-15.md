---
title: assignment-p-15.c
description: "C program source code for assignment-p-15.c"
icon: lucide/file-code
---

# `assignment-p-15.c`


!!! abstract "Problem Statement"
    Write a C program that reads a sequence of integers from a file named 'input.txt'. This program should segregate the odd numbers from the even numbers and store the odd numbers in a new file named 'ODDFile.txt' while storing the even numbers in another file named 'EVENFile.txt'

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta <amitdutta4255@gmail.com> |
| **Date** | 12 Dec 2025 |
| **License** | MIT License (See the LICENSE file for details) |

## Actions

<div class="action-buttons-desktop">
<a href="https://raw.usercontent.amit.is-a.dev/semester_1/assignment-primary/assignment-p-15.c" class="md-button" target="_blank" rel="noopener">Raw</a>
<a href="https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-primary/assignment-p-15.c" class="md-button" target="_blank" rel="noopener">View on GitHub</a>
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
  <a href="https://raw.usercontent.amit.is-a.dev/semester_1/assignment-primary/assignment-p-15.c" target="_blank" rel="noopener" onclick="closeActionSheet()">
    <span class="ti ti-file-code item-icon" aria-hidden="true"></span>
    <span class="item-label">Raw</span>
  </a>
  <a href="https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-primary/assignment-p-15.c" target="_blank" rel="noopener" onclick="closeActionSheet()">
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

#define FILENAME "input.txt"
#define ODDFILE "ODDFile.txt"
#define EVENFILE "EVENFile.txt"

int main()
{
    FILE *input = NULL;
    FILE *oddfile = NULL;
    FILE *evenfile = NULL;
    int num;

    input = fopen(FILENAME, "r");
    if (input == NULL)
    {
        printf("\nCould not open the file: %s", FILENAME);
        return 1;
    }

    oddfile = fopen(ODDFILE, "w");
    if (oddfile == NULL)
    {
        printf("\nCould not open the file: %s", ODDFILE);
        return 1;
    }

    evenfile = fopen(EVENFILE, "w");
    if (evenfile == NULL)
    {
        printf("\nCould not open the file: %s", EVENFILE);
        return 1;
    }

    while (fscanf(input, "%d", &num) == 1)
    {
        if (num % 2 == 0)
        {
            fprintf(evenfile, "%d ", num);
        }
        else
        {
            fprintf(oddfile, "%d ", num);
        }
    }
    
    printf("Successfully processed numbers from %s.\n", FILENAME);
    printf("Odd numbers written to %s.\n", ODDFILE);
    printf("Even numbers written to %s.\n", EVENFILE);

    fclose(input);
    fclose(oddfile);
    fclose(evenfile);
    
    return 0;
}
```
</div>
