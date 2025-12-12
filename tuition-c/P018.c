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

/* WAP to input the cost price and selling price and
calculate profit, profit percentage, loss percentage or
display the manage nither profit nor loss. */
// Author - Amit Dutta, Date - Unknown

#include <stdio.h>
int main()
{
    double cost, sell, pro, prop, loss, lossp;
    printf("Enter the cost and selling price : ");
    scanf("%lf %lf", &cost, &sell);
    if (sell > cost)
    {
        pro = sell - cost;
        prop = (pro / cost) * 100;
        printf("Profit : RS %g, Profit Percentage : %g", pro, prop);
    }
    else if (sell < cost)
    {
        loss = cost - sell;
        lossp = (loss / cost) * 100;
        printf("Loss   : RS %g, Loss Percentage   : %g", loss, lossp);
    }
    else
        printf("Neither loss nor Profit.");
    return 0;
}