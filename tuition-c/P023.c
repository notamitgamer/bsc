/* WAP to input the total cost and compute the amount to be paid
by the customer.  */
/* Author - Amit Dutta, Date - 8th OCT, 2025 */
// This code has not been compiled. 
// If you find any issues, please create a new issue on GitHub regarding them.

#include <stdio.h>
int main()
{
    double cost, amt;
    printf("Enter the total cost : ");
    scanf("%lf", &cost);
    if (cost <= 2000)
        amt = cost * 0.94;
    else if (cost > 2000 && cost <= 5000)
        amt = cost * 0.9;
    else if (cost > 5000 && cost <= 10000)
        amt = cost * 0.85;
    else if (cost > 10000)
        amt = cost * 0.8;
    printf("\nAmount to be paid : %g", amt);
    return 0;
}