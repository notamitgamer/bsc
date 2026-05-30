---
title: pc-ip-11.c
description: "C program source code for pc-ip-11.c"
icon: lucide/file-code
---

# `pc-ip-11.c`


!!! abstract "Problem Statement"
    Question 11: Write a program to merge two sorted integer arrays to form a single sorted array.

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta <amitdutta4255@gmail.com> |
| **Date** | 05 Jan 2026 |
| **License** | MIT License (See the LICENSE file for details) |

## Actions

<div class="action-buttons-desktop">
<a href="https://raw.usercontent.amit.is-a.dev/semester_1/practice-c/pc-ip-11.c" class="md-button" target="_blank" rel="noopener">Raw</a>
<a href="https://github.com/notamitgamer/bsc/blob/main/semester_1/practice-c/pc-ip-11.c" class="md-button" target="_blank" rel="noopener">View on GitHub</a>
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
  <a href="https://raw.usercontent.amit.is-a.dev/semester_1/practice-c/pc-ip-11.c" target="_blank" rel="noopener" onclick="closeActionSheet()">
    <span class="ti ti-file-code item-icon" aria-hidden="true"></span>
    <span class="item-label">Raw</span>
  </a>
  <a href="https://github.com/notamitgamer/bsc/blob/main/semester_1/practice-c/pc-ip-11.c" target="_blank" rel="noopener" onclick="closeActionSheet()">
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

void merge(int[], int, int[], int);
void inputArray(int[], int);
void printArray(int[], int);

int main()
{
    int a, b, *arra = NULL, *arrb = NULL;
    printf("Enter the number of element for array A and B: ");
    scanf("%d %d", &a, &b);
    arra = (int *)malloc(a * sizeof(int));
    if (arra == NULL)
    {
        printf("\nMemory Allocation failed.");
        return 1;
    }
    arrb = (int *)malloc(b * sizeof(int));
    if (arrb == NULL)
    {
        printf("\nMemory Allocation failed.");
        return 1;
    }
    printf("\nEnter element for array A:\n");
    inputArray(arra, a);
    printf("\nEnter element for array B:\n");
    inputArray(arrb, b);
    printf("\nGiven array A: ");
    printArray(arra, a);
    printf("\nGiven array b: ");
    printArray(arrb, b);
    merge(arra, a, arrb, b);
    free(arra);
    free(arrb);
    return 0;
}

void inputArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int n)
{
    int i;
    printf("[");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if (i < n - 1)
        {
            printf(", ");
        }
    }
    printf("]");
}

void merge(int arra[], int a, int arrb[], int b)
{
    int i, j, k, *arr = NULL, n = a + b;
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("\nMemory Allocation failed.");
        return;
    }
    i = j = k = 0;
    while (i < a && j < b)
    {
        if (arra[i] < arrb[j])
        {
            arr[k++] = arra[i++];
        }
        else
        {
            arr[k++] = arrb[j++];
        }
    }
    while (i < a)
    {
        arr[k++] = arra[i++];
    }
    while (j < b)
    {
        arr[k++] = arrb[j++];
    }
    printf("\nMerged Array: ");
    printArray(arr, n);
    free(arr);
}
```
</div>
