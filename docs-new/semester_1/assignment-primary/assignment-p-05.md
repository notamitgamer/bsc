---
title: assignment-p-05.c
description: "C program source code for assignment-p-05.c"
icon: lucide/file-code
---

# `assignment-p-05.c`


!!! abstract "Problem Statement"
    Write a C program that defines an array of integers, and includes a user-defined function named reverseArray with the signature void reverseArray(int arr[], int size);. The function should reverse the elements of the array.

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta <amitdutta4255@gmail.com> |
| **Date** | 12 Dec 2025 |
| **License** | MIT License (See the LICENSE file for details) |

## Actions

<div class="action-buttons-desktop">
<a href="https://raw.usercontent.amit.is-a.dev/semester_1/assignment-primary/assignment-p-05.c" class="md-button" target="_blank" rel="noopener">Raw</a>
<a href="https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-primary/assignment-p-05.c" class="md-button" target="_blank" rel="noopener">View on GitHub</a>
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
  <a href="https://raw.usercontent.amit.is-a.dev/semester_1/assignment-primary/assignment-p-05.c" target="_blank" rel="noopener" onclick="closeActionSheet()">
    <span class="ti ti-file-code item-icon" aria-hidden="true"></span>
    <span class="item-label">Raw</span>
  </a>
  <a href="https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-primary/assignment-p-05.c" target="_blank" rel="noopener" onclick="closeActionSheet()">
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

void inputArray(int[], int);
void reverseArray(int[], int);

int main()
{
    int size;
    printf("How many element do you want to add: ");
    scanf("%d", &size);
    int arr[size];
    inputArray(arr, size);
    reverseArray(arr, size);
    return 0;
}

void inputArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void reverseArray(int arr[], int size)
{
    int i, j, temp;
    printf("\nBefore Reverse: \n");
    for (i = 0; i < size; i++)
    {
        printf("Position: %d, Value: %d\n", i, arr[i]);
    }
    for (i = 0, j = size - 1; i < j; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    printf("\nAfter Reverse: \n");
    for (i = 0; i < size; i++)
    {
        printf("Position: %d, Value: %d\n", i, arr[i]);
    }
}
```
</div>
