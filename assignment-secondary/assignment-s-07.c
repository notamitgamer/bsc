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

/* Write a program to swap two numbers using a macro (#define). */

// IMPOSSIBLE
/* It is impossible to swap two literal numbers defined using the 
preprocessor directive #define. This is because #define performs simple 
text substitution and does not create variables in memory that can be 
manipulated or pointed to. */

// Using a Function-Like Macro

#include <stdio.h>

// Define the SWAP macro.
// The do-while(0) block is a common trick to ensure the macro behaves
// like a single statement, regardless of where it is used (e.g., inside an 'if' statement).
#define SWAP(a, b, data_type)   \
    do {                        \
        data_type temp = a;     \
        a = b;                  \
        b = temp;               \
    } while(0)

int main() {
    int num1 = 15;
    int num2 = 42;

    printf("--- Before Swap ---\n");
    printf("Number 1 (num1): %d\n", num1);
    printf("Number 2 (num2): %d\n", num2);

    // Call the macro, passing the variables and their type
    // The preprocessor replaces this line with the block of code defined above.
    SWAP(num1, num2, int);

    printf("\n--- After Swap (using macro) ---\n");
    printf("Number 1 (num1): %d\n", num1);
    printf("Number 2 (num2): %d\n", num2);

    return 0;
}