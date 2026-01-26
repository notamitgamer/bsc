/*
 * Author  : Amit Dutta <amitdutta4255@gmail.com>
 * Date    : 12 Dec 2025
 * Repo    : https://github.com/notamitgamer/bsc
 * License : MIT License (See the LICENSE file for details)
 * Copyright (c) 2025 Amit Dutta
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