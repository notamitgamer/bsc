/* Given the coordiantes (x, y) of center of a circle and its radius,
write a program that will determine whether a point lies inside the circle,
on the circle or outside the circle. (Hint : Use sqrt() and pow() functions.) */
/* Author - Amit Dutta, Date - 1st OCT, 2025 */
/* Let Us C, Chap- 3, Page - 53, Qn No.: f(g) */

#include <stdio.h>
#include <math.h>
// Define a small tolerance value (EPSILON) for reliable floating-point comparison
#define EPSILON 0.0001

int main()
{
    double h, k;
    double R;
    double x, y;
    double distance_sq;
    printf("Enter the center coordinates (h, k) : ");
    scanf("%lf %lf", &h, &k);
    printf("Enter the radius (R) : ");
    scanf("%lf", &R);
    printf("Enter the point P coordinates (x, y) : ");
    scanf("%lf %lf", &x, &y);
    distance_sq = pow(x - h, 2) + pow(y - k, 2);
    double radius_sq = R * R;
    // Case 1: On the circle (D^2 = R^2) - Use EPSILON for safety!
    if (fabs(distance_sq - radius_sq) < EPSILON)
    {
        printf("The point P(%g, %g) lies ON THE CIRCLE.\n", x, y);
    }
    // Case 2: Inside the circle (D^2 < R^2)
    else if (distance_sq < radius_sq)
    {
        printf("The point P(%g, %g) lies INSIDE THE CIRCLE.\n", x, y);
    }
    // Case 3: Outside the circle (D^2 > R^2)
    else
    {
        printf("The point P(%g, %g) lies OUTSIDE THE CIRCLE.\n", x, y);
    }
    return 0;
}