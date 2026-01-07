/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc
 * License    : ESAL-1.0 ( https://esal.amit.is-a.dev/ )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

/* Linear search */
/* Author: Amit Dutta, Date: 19-11-2025 */

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