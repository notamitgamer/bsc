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

/* The Body Mass Index (BMI) is defined as ratio of  weight of the
person (in Kilograms) to square of the height (in meters).
Write a program that receives weight and height, calculate the BMI, and reports
the BMI catagory as per the following table.
    BMI Catagory            BMI
    Starvation              < 15
    Anorexic                15.1 to 17.5
    Underweight             17.6 to 18.5
    Ideal                   18.6 to 24.9
    Overweight              25 to 25.9
    Obese                   30 to 39.9
    Morbidly Obese          >= 40
*/
/* Author - Amit Dutta, Date - 4th OCT, 2025 */
/* Let Us C, Chap- 4, Page - 72, Qn No.: D(d) */

#include <stdio.h>

int main()
{
    double weight, height, bmi;
    printf("Enter your Weight (in Kilograms) and Height (in Meters) : ");
    scanf("%lf %lf", &weight, &height);
    bmi = weight / (height * height);
    printf("\nCalculated BMI : %g", bmi);
    if (bmi < 15)
        printf("\nBMI Catagory : Starvation");
    else if (bmi >= 15.1 && bmi <= 17.5)
        printf("\nBMI Catagory : Anorexic");
    else if (bmi >= 17.6 && bmi <= 18.5)
        printf("\nBMI Catagory : Underweight");
    else if (bmi >= 18.6 && bmi <= 24.9)
        printf("\nBMI Catagory : Ideal");
    else if (bmi >= 25 && bmi <= 25.9)
        printf("\nBMI Catagory : Overweight");
    else if (bmi >= 30 && bmi <= 39.9)
        printf("\nBMI Catagory : Obese");
    else if (bmi >= 40)
        printf("\nBMI Catagory : Morbidly Obese");
    else
        printf("\nBMI Catagory : Unclassified");
    return 0;
}