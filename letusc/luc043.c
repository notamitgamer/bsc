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

/* Write a program to find the grace marks for a student using switch.
The user should enter the class obtained by the student and the
number of subjects he has failed in. Use the following logic.
    - If the student gets first class and he fails in more than 3
    subjects, he does not get any grace, Otherwise, he gets a grace
    of 5 marks per subject.
    - If the student gets second class and he fails in more than 2
    subjects, he does not get any grace. Otherwise, he gets a grace
    of 4 marks per subject.
    - If the student gets third class and he fails in more than 1
    subject, then he does not get any grace. Otherwise, he gets a
    grace of 5 marks.
*/
/* Author - Amit Dutta, Date - 28th OCT, 2025 */
/* Let Us C, Chap- 7, Page - 125, Qn No.: C */

#include <stdio.h>

int main()
{
    int studentClass, failedSubjectCount, graceMarks = 0;
    printf("Class obtained by the student (Enter 1 for First Class, 2 for Second Class, 3 for Third Class): ");
    scanf("%d", &studentClass);
    printf("Failed Subject Count: ");
    scanf("%d", &failedSubjectCount);

    if (failedSubjectCount < 0) {
        printf("\nFailed subject count cannot be negative.");
        return 1;
    }

    switch (studentClass)
    {
    case 1:
        if (failedSubjectCount <= 3)
        {
            graceMarks += 5 * failedSubjectCount;
        }
        break;

    case 2:
        if (failedSubjectCount <= 2)
        {
            graceMarks += 4 * failedSubjectCount;
        }
        break;

    case 3:
        if (failedSubjectCount <= 1)
        {
            graceMarks += 5 * failedSubjectCount;
        }
        break;

    default:
        printf("\nWrong Choice.");
        return 1;
    }

    printf("\nStudent will get %d grace marks.", graceMarks);
    return 0;
}