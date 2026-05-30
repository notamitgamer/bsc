---
title: assignment-s-21.c
description: "C program source code for assignment-s-21.c"
icon: lucide/file-code
---

# `assignment-s-21.c`


!!! abstract "Problem Statement"
    Write a program to copy the contents of a text file to another file, after removing all white spaces (spaces, tabs, newlines).

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta <amitdutta4255@gmail.com> |
| **Date** | 21 Jan 2026 |
| **License** | MIT License (See the LICENSE file for details) |

## Actions

<div class="action-buttons-desktop">
<a href="https://raw.usercontent.amit.is-a.dev/semester_1/assignment-secondary/assignment-s-21.c" class="md-button" target="_blank" rel="noopener">Raw</a>
<a href="https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-secondary/assignment-s-21.c" class="md-button" target="_blank" rel="noopener">View on GitHub</a>
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
  <a href="https://raw.usercontent.amit.is-a.dev/semester_1/assignment-secondary/assignment-s-21.c" target="_blank" rel="noopener" onclick="closeActionSheet()">
    <span class="ti ti-file-code item-icon" aria-hidden="true"></span>
    <span class="item-label">Raw</span>
  </a>
  <a href="https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-secondary/assignment-s-21.c" target="_blank" rel="noopener" onclick="closeActionSheet()">
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
#include <stdlib.h>
#include <string.h>

#define NEW_FILE_PREFIX "cleaned_"

int cleaning(FILE *);

int main()
{
    char filename[50];
    char *newFilename = NULL;
    FILE *givenFile = NULL;
    FILE *cleanedFile = NULL;
    int len, temp;

    printf("Enter the filename (Max: 50 character): ");
    fgets(filename, sizeof(filename), stdin);
    len = strlen(filename);
    if (filename[len - 1] == '\n')
    {
        filename[len - 1] = '\0';
    }

    givenFile = fopen(filename, "r");
    if (givenFile == NULL)
    {
        printf("\nCouldn't opened the file \"%s\""
               "\nPlease ensure that \"%s\" is in the same folder.",
               filename, filename);
        return 1;
    }

    len += strlen(NEW_FILE_PREFIX);
    newFilename = (char *)malloc((len + 1) * sizeof(char));
    if (newFilename == NULL)
    {
        printf("\nMemory allocation failed.");
        fclose(givenFile);
        return 1;
    }
    newFilename[0] = '\0';
    strcat(newFilename, NEW_FILE_PREFIX);
    strcat(newFilename, filename);

    cleanedFile = fopen(newFilename, "w");
    if (cleanedFile == NULL)
    {
        printf("\nCUnable to create the file \"%s\"", newFilename);
        free(newFilename);
        return 1;
    }

    while ((temp = fgetc(givenFile)) != EOF)
    {
        if (temp != ' ' && temp != '\n' && temp != '\t')
        {
            fputc(temp, cleanedFile);
        }
    }

    printf("\nSuccessfully cleaned: \"%s\"", filename);
    printf("\nGenerated file: \"%s\"", newFilename);

    fclose(givenFile);
    fclose(cleanedFile);
    free(newFilename);

    return 0;
}
```
</div>
