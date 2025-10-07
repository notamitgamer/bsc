/* WAP to accept  diagonal of a square and calculate area, parimeter */
/* Author - Amit Dutta, Date - 18th SEP, 2025 */

#include <stdio.h>
#include <math.h>
int main()
{
    double dia, side, area, peri;
    printf("Enter the diagonal of the square : ");
    scanf("%lf", &dia);
    side = dia / sqrt(2);
    area = pow(side, 2);
    peri = 4 * side;
    printf("\nArea of the square      : %g"
           "\nPerimeter of the square : %g",
           area, peri);
    return 0;
}