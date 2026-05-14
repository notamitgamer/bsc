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
