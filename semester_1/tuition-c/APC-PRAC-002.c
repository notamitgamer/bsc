/* WAP to calculate area of a circle using math library
method. Take radius of the circle as input. */

#include <stdio.h>
#include <math.h>
int main()
{
    double r, area;
    printf("Enter the radius of the circle : ");
    scanf("%lf", &r);
    area = M_PI * pow(r, 2);
    printf("\nArea of the circle : %g", area);
    return 0;
}
