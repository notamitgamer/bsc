/* WAP to calculate and display radius of a circle by taking the area as input. */
/* Author - Amit Dutta, Date - 18th SEP, 2025 */

#include <stdio.h>
#include <math.h>
int main()
{
    double r, area;
    printf("Enter the area of the circle : ");
    scanf("%lf", &area);
    r = sqrt(area / M_PI);
    printf("\nRadius of the circle : %g", r);
    return 0;
}