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

/* Write a C program that defines a structure Rectangle with attributes length and width.
Include a user-defined function named calculateArea with the signature float
calculateArea(struct Rectangle r);. The function should calculate and return the area of
the rectangle. */

#include <stdio.h>

struct Rectangle
{
    float length;
    float width;
};

float calculateArea(struct Rectangle);

int main()
{
    struct Rectangle rectangle;
    printf("Enter the length of the Rectangle: ");
    scanf("%f", &rectangle.length);
    printf("Enter the width of the Rectangle: ");
    scanf("%f", &rectangle.width);
    printf("\nArea of the Rectangle = %g", calculateArea(rectangle));
}

float calculateArea(struct Rectangle r)
{
    return r.length * r.width;
}