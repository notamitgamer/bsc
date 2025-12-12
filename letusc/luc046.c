/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * ======================================================================================
 * Repository: https://github.com/notamitgamer
 * Author    : Amit Dutta
 * License   : EDUCATIONAL SOURCE-AVAILABLE LICENSE (ESAL-1.0)
 * ======================================================================================
 *
 * [ IMPORTANT LEGAL NOTICE ]
 *
 * 1. PROPRIETARY STATUS:
 * This software ("The Software") is the intellectual property of Amit Dutta.
 * It is NOT "Open Source" in the traditional sense. It is "Source-Available"
 * for educational observation only.
 *
 * 2. ACADEMIC INTEGRITY & RESTRICTION:
 * The use of this code, in whole or in part, for the purpose of submitting
 * academic assignments, projects, lab reports, or examinations at
 * WEST BENGAL STATE UNIVERSITY (WBSU) or any other educational institution
 * is STRICTLY PROHIBITED.
 *
 * >>> VIOLATION OF THIS CLAUSE WILL BE REPORTED AS ACADEMIC MISCONDUCT. <<<
 *
 * 3. PERMISSIONS:
 * You are granted a revocable license to:
 * - Read and study the code to understand algorithms.
 * - Compile and run the code locally for personal testing.
 *
 * 4. NO WARRANTY:
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND.
 *
 * ======================================================================================
 */

/* Given three variables x, y, z, write a function to circularly shift their
values to right. In other words, if x = 5, y = 8, z = 10, after circular
shift y = 5, z = 8, x = 10. cal the function with variables a, b, c to
circularly shift values.
*/
/* Author - Amit Dutta, Date - 24th November, 2025 */
/* Let Us C, Chap- 9, Page - 163, Qn No.: C(a) */

#include <stdio.h>

void circularShift(int *, int *, int *);

int main()
{
    int x = 5, y = 8, z = 10;

    printf("--- Before Shift ---\n");
    printf("x: %d, y: %d, z: %d", x, y, z);

    circularShift(&x, &y, &z);

    printf("\n--- After Shift ---\n");
    printf("x: %d, y: %d, z: %d", x, y, z);

    return 0;
}

void circularShift(int *x, int *y, int *z)
{
    int temp = *z;
    *z = *y;
    *y = *x;
    *x = temp;
}