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

/* Using conditional operators determine :
    (1) Whether the character entered through the keyboard is a
        lower case alphabet or not.
    (2) Whether a character entered through the keyboard is a special
        symbol or not. */
/* Author - Amit Dutta, Date - 5th OCT, 2025 */
/* Let Us C, Chap- 4, Page - 72, Qn No.: E(a) */

#include <stdio.h>
int main()
{
    char inp;
    printf("Enter the character : ");
    scanf("%c", &inp);
    printf("\nInput Character '%c' is %s a LOWER CASE ALPHABET.", inp, 
        (inp >= 'a' && inp <= 'z') ? "" : "NOT");
    printf("\nInput Character '%c' is %s a SPECIAL SYMBOL.", inp, 
        (inp >= 'a' && inp <= 'z' || inp >= 'A' && inp <= 'Z' 
            || inp >= '0' && inp <= '9') ? "NOT" : "");
    return 0;
}