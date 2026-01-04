/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc
 * License    : ESAL-1.0 ( https://amit.is-a.dev/license )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
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