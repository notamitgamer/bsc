/* WAP to input the cost price and selling price and
calculate profit, profit percentage, loss percentage or
display the manage nither profit nor loss. */

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