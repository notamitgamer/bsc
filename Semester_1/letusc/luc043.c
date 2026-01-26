/*
 * Author  : Amit Dutta <amitdutta4255@gmail.com>
 * Date    : 12 Dec 2025
 * Repo    : https://github.com/notamitgamer/bsc
 * License : MIT License (See the LICENSE file for details)
 * Copyright (c) 2025 Amit Dutta
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