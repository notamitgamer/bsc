/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc/tree/main/letusc
 * License    : ESAL-1.0 ( https://aranag.site/license )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

/* A certain grade of steel is graded according to the following conditions:
    (i) Hardness must be greater than 50
    (ii) Carbon content must be less than 0.7
    (iii) Tensile strength must be greater than 5600

The grades are as follows:
    Grade is 10 if all three conditions are met
    Grade is 9 if conditions (i) and (ii) are met
    Grade is 8 if conditions (ii) and (iii) are met
    Grade is 7 if conditions (i) and (iii) are met
    Grade is 6 if only one condition is met
    Grade is 5 if none of the conditions are met

Write a program, which will require the user to give values of hardness,
carbon content and tensile strength of the steel under consideration and output
the grade of the steel. */

/* Author - Amit Dutta, Date - 4th OCT, 2025 */
/* Let Us C, Chap- 4, Page - 71, Qn No.: D(c) */

#include <stdio.h>
int main()
{
    double hardness, carbon_content, tensile_strength;
    printf("Enter the details of the steel below - \n");
    printf("1. Hardness         : ");
    scanf("%lf", &hardness);
    printf("2. Carbon Content   : ");
    scanf("%lf", &carbon_content);
    printf("3. Tensile Strength : ");
    scanf("%lf", &tensile_strength);

    // storing how many conditions are met as boolean result
    int condition_met, condition1, condition2, condition3;
    condition1 = hardness > 50;
    condition2 = carbon_content < 0.7;
    condition3 = tensile_strength > 5600;
    condition_met = condition1 + condition2 + condition3;

    // now grading according the result
    int grade;
    if (condition_met == 3)
        grade = 10;
    else if (condition_met == 2)
    {
        if (condition1 && condition2)
            grade = 9;
        else if (condition2 && condition3)
            grade = 8;
        else if (condition1 && condition3)
            grade = 7;
    }
    else if (condition_met == 1)
        grade = 6;
    else
        grade = 5;

    // printing the result
    printf("\n------------- Result -------------");
    printf("\n1. Hardness         : Condition %s", condition1 ? "MET" : "DID NOT MET");
    printf("\n2. Carbon Content   : Condition %s", condition2 ? "MET" : "DID NOT MET");
    printf("\n3. Tensile Strength : Condition %s", condition3 ? "MET" : "DID NOT MET");
    printf("\nTotal Condition Met : %d", condition_met);
    printf("\n\nGrade : %d\n\n", grade);
    return 0;
}

/* I did not used this long variable names. I used very short just the first letter of the word. 
After writting the whole program, I just renamed the valiables. This is possible in Visual Stdio Code. */