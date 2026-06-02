---
title: R_Code-5.r
description: "R program source code for R_Code-5.r"
icon: lucide/file-code
---

# `R_Code-5.r`


!!! abstract "Problem Statement"
    You have a vector of numbers: x <- c(12, 9, 23, 14). Use R's shorthand ifelse() function to output "EVEN" if a number in the vector is divisible by 2 (x %% 2 == 0), and "ODD" if it is not.

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) |
| **Date** | 19 Mar 2026 |
| **License** | MIT |

## Actions

<div class="action-buttons-desktop">
<a href="https://raw.usercontent.amit.is-a.dev/semester_1/R/Code/R_Code-5.r" class="md-button" target="_blank" rel="noopener">Raw</a>
<a href="https://github.com/notamitgamer/bsc/blob/main/semester_1/R/Code/R_Code-5.r" class="md-button" target="_blank" rel="noopener">View on GitHub</a>
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
  <a href="https://raw.usercontent.amit.is-a.dev/semester_1/R/Code/R_Code-5.r" target="_blank" rel="noopener" onclick="closeActionSheet()">
    <span class="ti ti-file-code item-icon" aria-hidden="true"></span>
    <span class="item-label">Raw</span>
  </a>
  <a href="https://github.com/notamitgamer/bsc/blob/main/semester_1/R/Code/R_Code-5.r" target="_blank" rel="noopener" onclick="closeActionSheet()">
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
```r
# Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 19 Mar 2026
# Repo: https://github.com/notamitgamer/bsc
# License: MIT

# You have a vector of numbers: x <- c(12, 9, 23, 14). 
# Use R's shorthand ifelse() function to output "EVEN" if a number 
# in the vector is divisible by 2 (x %% 2 == 0), and "ODD" if it is not. 

x <- c(12, 9, 23, 14)
ifelse(x %% 2 == 0, "EVEN", "ODD")
```
</div>
