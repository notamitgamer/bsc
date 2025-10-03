/* Given a point (x, y), write a program to find out if it lies on X-axis, Y-axis or origin. */
/* Author - Amit Dutta, Date - 1st OCT, 2025 */
/* Let Us C, Chap- 3, Page - 53, Qn No.: f(h) */

#include <stdio.h>
#include <math.h>
#define EPSILON 0.00001

int main()
{
    double x, y;
    printf("Enter the point P(x, y) : ");
    scanf("%lf %lf", &x, &y);
    if (fabs(x) < EPSILON && fabs(y) < EPSILON)
        printf("\nPoint P(%g, %g) lies on the origin.", x, y);
    else if (fabs(x) < EPSILON)
        printf("\nPoint P(%g, %g) lies on the Y-Axis.", x, y);
    else if (fabs(y) < EPSILON)
        printf("\nPoint P(%G, %g) lies on the X-Axis.", x, y);
    else
        printf("\nThe point P(%g, %g) lies in a QUADRANT (not on an axis or the origin).", x, y);
    return 0;
}