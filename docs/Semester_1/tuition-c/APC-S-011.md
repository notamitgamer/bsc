# `APC-S-011.c`

## Problem Statement
!!!
Linear search
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/tuition-c/APC-S-011.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/tuition-c/APC-S-011.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>

int main()
{
    int elementCount, i, keyElement;

    printf("Enter the number of element you want to add: ");
    scanf("%d", &elementCount);

    int elements[elementCount];

    for (i = 0; i < elementCount; i++)
    {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &elements[i]);
    }

    printf("\nEnter the Key Element you want to search: ");
    scanf("%d", &keyElement);
    for (i = 0; i < elementCount; i++)
        if (elements[i] == keyElement)
        {
            printf("\nKey Element %d is found in %d position.", keyElement, i);
            return 0;
        }
    printf("\nKey Element %d is not found.", keyElement);
    return 0;
}
```
