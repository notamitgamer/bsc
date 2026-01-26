/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* WAP to calculate area and perimeter of a rectangle 
by accepting length and breadth as input. */
// Author - Amit Dutta, Date - 18th SEP, 2025

#include<stdio.h>
int main() {
    double length, breadth, area, perimeter;
    printf("Enter the length and breadth of the Rectangle : ");
    scanf("%lf %lf", &length, &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("\nArea of the Rectangle : %g"
           "\nPerimeter of the Rectangle : %g", area, perimeter);
    return 0;

}

