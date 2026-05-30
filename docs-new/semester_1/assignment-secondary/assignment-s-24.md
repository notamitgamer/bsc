---
title: assignment-s-24.c
description: "C program source code for assignment-s-24.c"
icon: lucide/file-code
---

# `assignment-s-24.c`


!!! abstract "Problem Statement"
    Write a program to calculate the difference between two time periods using structures.

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 18 Jan 2026 |
| **License** | MIT |

## Actions

<div class="action-buttons-desktop">
<a href="https://raw.usercontent.amit.is-a.dev/semester_1/assignment-secondary/assignment-s-24.c" class="md-button" target="_blank" rel="noopener">Raw</a>
<a href="https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-secondary/assignment-s-24.c" class="md-button" target="_blank" rel="noopener">View on GitHub</a>
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
  <a href="https://raw.usercontent.amit.is-a.dev/semester_1/assignment-secondary/assignment-s-24.c" target="_blank" rel="noopener" onclick="closeActionSheet()">
    <span class="ti ti-file-code item-icon" aria-hidden="true"></span>
    <span class="item-label">Raw</span>
  </a>
  <a href="https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-secondary/assignment-s-24.c" target="_blank" rel="noopener" onclick="closeActionSheet()">
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

struct time_dif
{
    int hour;
    int min;
    int sec;
};

int main()
{
    struct time_dif tpA, tpB;
    long int tfA, tfB, tdif;
    printf("Enter the start time in this 24 hours clock format (HH MM SS): ");
    scanf("%d %d %d", &tpA.hour, &tpA.min, &tpA.sec);
    printf("Enter the end time in this 24 hours clock format (HH MM SS): ");
    scanf("%d %d %d", &tpB.hour, &tpB.min, &tpB.sec);

    tfA = tpA.hour * 3600 + tpA.min * 60 + tpA.sec;
    tfB = tpB.hour * 3600 + tpB.min * 60 + tpB.sec;
    tdif = tfB - tfA;
    if (tdif < 0)
    {
        printf("\nWrong information, End time should be later than Start time.");
        return 1;
    }
    printf("\nTime difference: %ld Hour(s) %ld Minutes(s) %ld Second(s).", tdif / 3600, (tdif % 3600) / 60, (tdif % 3600) % 60);

    return 0;
}
```
</div>
