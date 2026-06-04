---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> assignment-p-14_v1.c'
description: 'Write a C program that opens its own source code file, reads its contents, and then prints the contents to the console.'
---

# assignment-p-14_v1.c

| Property | Details |
| :--- | :--- |
| **Author** | [Amit Dutta](mailto:amitdutta4255@gmail.com) |
| **Date** | 12 Dec 2025 |
| **License** | [MIT License (See the LICENSE file for details)](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
Write a C program that opens its own source code file, reads its contents, and then prints the contents to the console.
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-primary/assignment-p-14_v1.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/assignment-primary/assignment-p-14_v1.c)

```c [assignment-p-14_v1.c]
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
