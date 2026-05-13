---
label: maheswar02.c
description: "C program source code for maheswar02.c"
---

# `maheswar02.c`

## Metadata
| Property | Detail |
|---|---|

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/temp/maheswar02.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/temp/maheswar02.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include<stdio.h>
#include<stdlib.h>

int main() {
    FILE *fIn, *fEven, *fOdd;
    int n;

    fIn = fopen("input.txt", "r");
    fEven = fopen("EVENFile.txt", "w");
    fOdd = fopen("ODDFile.txt", "w");

    // Check if files opened successfully
    if ((fIn == NULL) || (fEven == NULL) || (fOdd == NULL)) {
        printf("ERROR : one or more file opening FAILED!");
        if (fIn != NULL) fclose(fIn);
        if (fEven != NULL) fclose(fEven);
        if (fOdd != NULL) fclose(fOdd);
        exit(1);
    }

    // Read numbers and separate them into even and odd files
    while (fscanf(fIn, "%d", &n) != EOF)
        (n % 2 == 0) ? fprintf(fEven, "%d\n", n) : fprintf(fOdd, "%d\n", n);

    // Close all files
    fclose(fIn);
    fclose(fEven);
    fclose(fOdd);

    printf("OPERATION COMPLETED SUCCESSFULLY.");
    return 0;
}
```
