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

/* A shopkeeper offers 30% discount on purchasing an
item whereas the other shopkeeper offers 2 successive
discount of 20% and 10% for purchasing the same item.
WAP to caompute and display the discounted price of the
item by taking the price as input. */
// Author - Amit Dutta, Date - Unknown

#include<stdio.h>
int main() {
	double mrp, shop1, shop2, temp;
	printf("Enter the price : ");
	scanf("%lf", &mrp);
	shop1 = mrp * 0.70;
	temp = mrp * 0.80;
	shop2 = temp * 0.90;
	printf("\nShopkeeper 1 price : %lf"
			"\nShopkeeper 2 price : %lf",shop1,shop2);
	return 0;
}
