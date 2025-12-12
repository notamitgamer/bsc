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

/* Rewrite the folowing program using conditional operations
    #include<stdio.h>
    int main()
    {
        float sal;
        printf("Enter the salary");
        scanf("%f", &sal);
        if(sal >= 25000 && sal <= 40000)
            printf("Manager\n");
        else
            if(sal >= 15000 && sal < 25000)
                printf("Accountant\n");
            else
                printf("Clerk\n");
        return 0;
    }
*/
/* Author - Amit Dutta, Date - 6th OCT, 2025 */
/* Let Us C, Chap- 4, Page - 73, Qn No.: E(e) */

#include <stdio.h>
int main()
{
    float sal;
    printf("Enter the salary");
    scanf("%f", &sal);
    (sal >= 25000 && sal <= 40000) ? printf("Manager\n") : 
    ((sal >= 15000 && sal < 25000) ? printf("Accountant\n") : printf("Clerk\n"));
    return 0;
}