---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> maheswar02.c'
description: 'C program — maheswar02.c'
---

# maheswar02.c

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/temp/maheswar02.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/temp/maheswar02.c)

```c [maheswar02.c]
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
