---
title: assignment-p-14_v1.c
description: "C program source code for assignment-p-14_v1.c"
icon: lucide/file-code
---

# `assignment-p-14_v1.c`


!!! abstract "Problem Statement"
    Write a C program that opens its own source code file, reads its contents, and then prints the contents to the console.

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta <amitdutta4255@gmail.com> |
| **Date** | 12 Dec 2025 |
| **License** | MIT License (See the LICENSE file for details) |

## Actions

<div class="action-buttons-desktop">
<a href="https://raw.usercontent.amit.is-a.dev/semester_1/assignment-primary/assignment-p-14_v1.c" class="md-button" target="_blank" rel="noopener">Raw</a>
<a href="https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-primary/assignment-p-14_v1.c" class="md-button" target="_blank" rel="noopener">View on GitHub</a>
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
  <a href="https://raw.usercontent.amit.is-a.dev/semester_1/assignment-primary/assignment-p-14_v1.c" target="_blank" rel="noopener" onclick="closeActionSheet()">
    <span class="ti ti-file-code item-icon" aria-hidden="true"></span>
    <span class="item-label">Raw</span>
  </a>
  <a href="https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-primary/assignment-p-14_v1.c" target="_blank" rel="noopener" onclick="closeActionSheet()">
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
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *code;
    int character, len_upto_dot;
    char *FILENAME;
    char *dot;

    FILENAME = strdup(argv[0]);

    if (FILENAME == NULL)
    {
        printf("\nMemory allocation failed.\n");
        return 1;
    }

    dot = strrchr(FILENAME, '.');

    if (dot != NULL)
    {
        len_upto_dot = dot - FILENAME;
        FILENAME[len_upto_dot] = '\0';
    }

    strcat(FILENAME, ".c");

    code = fopen(FILENAME, "r");

    if (code == NULL)
    {
        printf("\nCould not open the source file: %s", FILENAME);
        printf("\nPlease ensure the source file is in the same directory as the executable.\n");
        free(FILENAME);
        return 1;
    }

    printf("\nReading file: %s", FILENAME);
    printf("\n========== %s ==========\n\n", FILENAME);

    while ((character = fgetc(code)) != EOF)
    {
        putchar(character);
    }

    printf("\n\n========== End of %s ==========\n", FILENAME);

    fclose(code);
    free(FILENAME);

    return 0;
}
```
</div>
