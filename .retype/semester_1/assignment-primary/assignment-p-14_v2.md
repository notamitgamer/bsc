# `assignment-p-14_v2.c`

## Problem Statement
!!!
Write a C program that opens its own source code file, reads its contents, and then prints the contents to the console.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta <amitdutta4255@gmail.com> |
| **Date** | 12 Dec 2025 |
| **License** | MIT License (See the LICENSE file for details) |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/assignment-primary/assignment-p-14_v2.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/assignment-primary/assignment-p-14_v2.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
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
