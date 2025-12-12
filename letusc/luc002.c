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

/* The length and breadth of a rectangle and radius of a circle
are input through the keyboard. Write a program to calculate the
area and perimeter of the rectangle, and the area and circumference
of the circle. */
/* Author - Amit Dutta, Date - 16th SEP, 2025 */
/* Let Us C; Page - 19; Chap- 1; QNo.: F(b) */

#include <stdio.h>
#include <math.h>
int main()
{
	double len, bre, r, area_r, per, area_c, cir;
	printf("Enter the length and breadth of the rectangle : ");
	scanf("%lf %lf", &len, &bre);
	printf("Enter the Radius of the circle : ");
	scanf("%lf", &r);
	area_r = len * bre;
	per = 2 * (len + bre);
	area_c = M_PI * r * r;
	cir = 2 * M_PI * r;
	printf("\nArea of Rectangle       : %lf"
		   "\nPerimeter of Rectangle  : %lf"
		   "\nArea of Circle          : %lf"
		   "\nCircumference of Circle : %lf",
		   area_r, per, area_c, cir);
	return 0;
}
