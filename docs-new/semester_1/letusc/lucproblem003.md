---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> lucproblem003.c'
description: 'If a character is entered through the keyboard, Write a program to determine whether the character is a capital letter, a small case letter, a digit or a speacial symbol. The following table shows the range of ASCII values for various characters : Characters              ASCII Values A - Z                   65 - 90 a - z                   97 - 122 0 - 9                   48 - 57 special symbols         0 - 47, 58 - 64, 91 - 96, 123 - 127'
---

# lucproblem003.c

### Metadata

- **Author** — Amit Dutta (amitdutta4255@gmail.com)
- **Last updated** — 12 Dec 2025
- **License** — [MIT](https://github.com/notamitgamer/bsc/blob/main/LICENSE)


### Problem Statement

::: tip Problem Statement
If a character is entered through the keyboard, Write a program to determine whether the character is a capital letter, a small case letter, a digit or a speacial symbol. The following table shows the range of ASCII values for various characters : Characters              ASCII Values A - Z                   65 - 90 a - z                   97 - 122 0 - 9                   48 - 57 special symbols         0 - 47, 58 - 64, 91 - 96, 123 - 127
:::

## Source Code

<div style="display:flex;gap:12px;margin-bottom:12px;">
  <a href="https://github.com/notamitgamer/bsc/blob/main/semester_1/letusc/lucproblem003.c" target="_blank" rel="noopener noreferrer"   style="display:inline-flex;align-items:center;gap:6px;font-size:0.85rem;          text-decoration:none;color:var(--vp-c-brand);">
    <svg xmlns="http://www.w3.org/2000/svg" width="15" height="15" viewBox="0 0 24 24"         fill="currentColor" style="vertical-align:middle;">
      <path d="M12 0C5.37 0 0 5.373 0 12c0 5.303 3.438 9.8 8.205 11.387.6.113.82-.258             .82-.577v-2.234c-3.338.726-4.033-1.416-4.033-1.416-.546-1.387-1.333-1.757             -1.333-1.757-1.089-.745.083-.729.083-.729 1.205.084 1.84 1.236 1.84 1.236             1.07 1.835 2.809 1.305 3.495.998.108-.776.417-1.305.76-1.605-2.665-.3             -5.466-1.332-5.466-5.93 0-1.31.465-2.38 1.235-3.22-.135-.303-.54-1.523             .105-3.176 0 0 1.005-.322 3.3 1.23.96-.267 1.98-.399 3-.405 1.02.006             2.04.138 3 .405 2.28-1.552 3.285-1.23 3.285-1.23.645 1.653.24 2.873             .12 3.176.765.84 1.23 1.91 1.23 3.22 0 4.61-2.805 5.625-5.475 5.92             .42.36.81 1.096.81 2.22v3.293c0 .319.21.694.825.576C20.565 21.795             24 17.298 24 12c0-6.627-5.373-12-12-12z"/>
    </svg>
    View on GitHub
  </a>
  <a href="https://raw.usercontent.amit.is-a.dev/semester_1/letusc/lucproblem003.c" target="_blank" rel="noopener noreferrer"   style="display:inline-flex;align-items:center;gap:6px;font-size:0.85rem;          text-decoration:none;color:var(--vp-c-text-2);">
    <svg xmlns="http://www.w3.org/2000/svg" width="14" height="14" viewBox="0 0 24 24"         fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round"         stroke-linejoin="round" style="vertical-align:middle;">
      <path d="M21 15v4a2 2 0 0 1-2 2H5a2 2 0 0 1-2-2v-4"/>
      <polyline points="7 10 12 15 17 10"/>
      <line x1="12" y1="15" x2="12" y2="3"/>
    </svg>
    Download Raw
  </a>
</div>

::: info Printing the code
To print this file, open it on GitHub and click **Raw** before printing, or use the **Download Raw** button above and print directly from that page.
:::
```c [lucproblem003.c]
#include <stdio.h>
int main()
{
    char inp;
    printf("Enter one character : ");
    scanf(" %c", &inp);
    if (inp >= 64 && inp <= 90)
        printf("\nInput '%c' is a CAPITAL LETTER.", inp);
    if (inp >= 97 && inp <= 122)
        printf("\nInput '%c' is a SMALL CASE LETTER.", inp);
    if (inp >= 48 && inp <= 57)
        printf("\nInput '%c' is a DIGIT.", inp);
    if (inp >= 0 && inp <= 47 || inp >= 58 && inp <= 64 
        || inp >= 91 && inp <= 96 || inp >= 123 && inp <= 127)
        printf("\nInput '%c' is a SPECIAL SYMBOL.", inp);
    return 0;
}
```
