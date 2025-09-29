/* Write a program to receive values of latitude (L1, L2) and longitude
(G1, G2), in degrees, of two places on the earth and output the distance
(D) between them in nautical miles. The formula for distance in nautical
miles is :
    D = 3963 cos^-1(sin L1 sin L2 + cos L1 cos L2 * cos(G2 - G1))
*/
/* Author - Amit Dutta, Date - 29th SEP, 2025 */
/* Let Us C, Chap - 2, Page - 37, Qn no.: G(c) */

#include <stdio.h>
#include <math.h>
int main()
{
    double l1, l2, g1, g2, d;
    printf("Enter the Latitude in 'L1, L2' format : ");
    scanf("%lf, %lf", &l1, &l2);
    printf("Enter the Longitude in 'G1, G2' format : ");
    scanf("%lf, %lf", &g1, &g2);
    // Converting degree to radian because function from math.h use radian not degree
    l1 = l1 * (M_PI / 180);
    l2 = l2 * (M_PI / 180);
    g1 = g1 * (M_PI / 180);
    g2 = g2 * (M_PI / 180);
    d = 3963 * acos(sin(l1) * sin(l2) + cos(l1) * cos(l2) * cos(g2 - g1));
    printf("Distance in nautical miles : %g", d);
    return 0;
}