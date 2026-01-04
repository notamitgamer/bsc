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