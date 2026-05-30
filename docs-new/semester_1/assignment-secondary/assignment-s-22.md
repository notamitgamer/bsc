---
title: assignment-s-22.c
description: "C program source code for assignment-s-22.c"
icon: lucide/file-code
---

# `assignment-s-22.c`


!!! abstract "Problem Statement"
    Write a program using structures to add two distances in meter-kilometer format.

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 18 Jan 2026 |
| **License** | MIT |

## Actions

<div class="action-buttons-desktop">
<a href="https://raw.usercontent.amit.is-a.dev/semester_1/assignment-secondary/assignment-s-22.c" class="md-button" target="_blank" rel="noopener">Raw</a>
<a href="https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-secondary/assignment-s-22.c" class="md-button" target="_blank" rel="noopener">View on GitHub</a>
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
  <a href="https://raw.usercontent.amit.is-a.dev/semester_1/assignment-secondary/assignment-s-22.c" target="_blank" rel="noopener" onclick="closeActionSheet()">
    <span class="ti ti-file-code item-icon" aria-hidden="true"></span>
    <span class="item-label">Raw</span>
  </a>
  <a href="https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-secondary/assignment-s-22.c" target="_blank" rel="noopener" onclick="closeActionSheet()">
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

struct distance
{
    int km;
    int m;
};

void total_distance(struct distance[]);

int main()
{
    struct distance dis[2] = {0};
    printf("Enter the 1st distance (KM M): ");
    scanf("%d %d", &dis[0].km, &dis[0].m);
    printf("Enter the 2nd distance: ");
    scanf("%d %d", &dis[1].km, &dis[1].m);
    total_distance(dis);
    return 0;
}

void total_distance(struct distance dis[])
{
    int result_km = dis[0].km + dis[1].km;
    int result_m = dis[0].m + dis[1].m;
    result_km += result_m / 1000;
    result_m = result_m % 1000;
    printf("Total distance: %d KM, %d M", result_km, result_m);
}
```
</div>
