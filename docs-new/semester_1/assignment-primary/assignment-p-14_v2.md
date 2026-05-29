---
title: assignment-p-14_v2.c
description: "C program source code for assignment-p-14_v2.c"
icon: lucide/file-code
---

# `assignment-p-14_v2.c`


!!! abstract "Problem Statement"
    Write a C program that opens its own source code file, reads its contents, and then prints the contents to the console.

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta <amitdutta4255@gmail.com> |
| **Date** | 12 Dec 2025 |
| **License** | MIT License (See the LICENSE file for details) |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/assignment-primary/assignment-p-14_v2.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-primary/assignment-p-14_v2.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>

#define FILENAME "assignment-p-14_v2.c"

int main()
{
    FILE *code = NULL;
    char temp;

    code = fopen(FILENAME, "r");
    if (code == NULL)
    {
        printf("\nCould not open the source file: %s", FILENAME);
        return 1;
    }

    printf("\nReading file: %s", FILENAME);
    printf("\n========== %s ==========\n\n", FILENAME);

    while ((temp = fgetc(code)) != EOF)
    {
        printf("%c", temp);
    }

    printf("\n\n========== End of %s ==========\n", FILENAME);

    fclose(code);

    return 0;
}
```
</div>
