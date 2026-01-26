/*
 * Author  : Amit Dutta <amitdutta4255@gmail.com>
 * Date    : 12 Dec 2025
 * Repo    : https://github.com/notamitgamer/bsc
 * License : MIT License (See the LICENSE file for details)
 * Copyright (c) 2025 Amit Dutta
 */

/* Define a function to compute the distance between two points and
use it to develop another function that will compute the area of the
triangle whose vertices are A(x1, y1), B(x2, y2), and C(x3, y3). Use
these functions to develop a function which returns a value 1 if the
point (x, y) lines inside the triangle ABC, otherwise returns a value
0. Would you get any advantage if you develop these functions to
work on call by reference principle?
*/
/* Let Us C, Chap- 9 (Pointers), Page - 163, Qn No.: C(c) */

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

void distance(double, double, double, double, double *);
void area(double, double, double, double, double, double, double *);
int is_inside(double, double, double, double, double, double, double, double);

int main()
{

    // Variables
    double x, y, x1, x2, y1, y2, x3, y3, result_Distance, result_Area;
    char choice;

    /* ********** Requirement: 1 ********** */

    // Calculate the length of the line segment between two points, P1(x1, y1) and P2(x2, y2).
    // Function Used: distance()

    printf("--- Compute the distance between two points ---\n\n");
    printf("Enter the co-ordinates of Point 1 (Ex.: 5,6): ");
    scanf("%lf,%lf", &x1, &y1);
    printf("Enter the co-ordinates of Point 2 (Ex.: 3,4): ");
    scanf("%lf,%lf", &x2, &y2);

    distance(x1, y1, x2, y2, &result_Distance);
    printf("\nDistance between P1(%g, %g) and P2(%g, %g) = %g",
           x1, y1, x2, y2, result_Distance);

    /* ********** Requirement: 2 ********** */

    // Calculate the area of a triangle ABC using its three vertices A(x1, y1), B(x2, y2), and C(x3, y3).
    // Fuction Used: distance(), area()

    printf("\n\n--- Compute the area of a triangle ABC ---\n\n");
    printf("Enter the co-ordinates of Point A (Ex.: 5,6): ");
    scanf("%lf,%lf", &x1, &y1);
    printf("Enter the co-ordinates of Point B (Ex.: 3,4): ");
    scanf("%lf,%lf", &x2, &y2);
    printf("Enter the co-ordinates of Point C (Ex.: 6,7): ");
    scanf("%lf,%lf", &x3, &y3);

    area(x1, y1, x2, y2, x3, y3, &result_Area);
    printf("\nArea of the A(%g, %g), B(%g, %g), C(%g, %g) = %g",
           x1, y1, x2, y2, x3, y3, result_Area);

    /* ********** Requirement: 3 ********** */

    // Check if a test point P(x, y) lies strictly inside the triangle ABC.
    // Function Used: distance(), area(), is_inside()

    printf("\n\n--- Check if a test point P(x, y) lies strictly inside the triangle ABC ---\n\n");
    printf("Do you wish to use previous entered triangle?"
           "\nIf Yes, type 'Y'; If No, type 'N': ");
    scanf(" %c", &choice);
    choice = toupper(choice);
    switch (choice)
    {
    case 'Y':
        break;
    case 'N':
        printf("Enter the co-ordinates of Point A (Ex.: 5,6): ");
        scanf("%lf,%lf", &x1, &y1);
        printf("Enter the co-ordinates of Point B (Ex.: 3,4): ");
        scanf("%lf,%lf", &x2, &y2);
        printf("Enter the co-ordinates of Point C (Ex.: 6,7): ");
        scanf("%lf,%lf", &x3, &y3);
        break;
    default:
        printf("\nYou entered invalid choice.");
        break;
    }
    printf("Enter the co-ordinates of Test Point (Ex.: 3,5): ");
    scanf("%lf,%lf", &x, &y);

    if (is_inside(x, y, x1, y1, x2, y2, x3, y3))
        printf("\nTest Point (%g, %g) is inside ABC.", x, y);
    else
        printf("\nTest Point (%g, %g) is not inside ABC.", x, y);

    /*  ANSWER TO THE QUESTION:
    Qn.:
        Would you get any advantage if you develop these functions to
        work on call by reference principle?

    Ans:
        NO, there is no advantage, and moreover, that would be a disadvantage.
        It introduces unnecessary dereferencing overhead for every operation,
        Which is less efficient than reading the simple value copy supplied by Call by Value.
    */

    // End of Program
    return 0;
}

void distance(double x1, double y1, double x2, double y2, double *result_Distance)
{
    *result_Distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

void area(double x1, double y1, double x2, double y2, double x3, double y3, double *result_Area)
{
    double s, ab, bc, ac;

    distance(x1, y1, x2, y2, &ab);
    distance(x2, y2, x3, y3, &bc);
    distance(x1, y1, x3, y3, &ac);

    s = (ab + bc + ac) / 2.0;
    double area_sq = s * (s - ab) * (s - bc) * (s - ac);

    if (area_sq < 0)
        // Handle cases where area_sq is slightly negative due to floating-point errors
        *result_Area = 0.0;
    else
        *result_Area = sqrt(area_sq);
}

int is_inside(double x, double y, double x1, double y1, double x2, double y2, double x3, double y3)
{
    double area_ABC, area_PAB, area_PBC, area_PAC;

    const double EPSILON = 0.000001;

    area(x1, y1, x2, y2, x3, y3, &area_ABC);
    area(x, y, x1, y1, x2, y2, &area_PAB);
    area(x, y, x2, y2, x3, y3, &area_PBC);
    area(x, y, x1, y1, x3, y3, &area_PAC);

    double sum_of_sub_areas = area_PAB + area_PBC + area_PAC;

    if (fabs(area_ABC - sum_of_sub_areas) < EPSILON)
        return 1;
    else
        return 0;
}

/*
    *************** SAMPLE OUTPUT ***************

PS G:\bsc\letusc> ./*.exe
--- Compute the distance between two points ---

Enter the co-ordinates of Point 1 (Ex.: 5,6): 1234.56,7890.12
Enter the co-ordinates of Point 2 (Ex.: 3,4): 1234.56,7891.12

Distance between P1(1234.56, 7890.12) and P2(1234.56, 7891.12) = 1

--- Compute the area of a triangle ABC ---

Enter the co-ordinates of Point A (Ex.: 5,6): 100.10,200.20
Enter the co-ordinates of Point B (Ex.: 3,4): 105.10,200.20
Enter the co-ordinates of Point C (Ex.: 6,7): 100.10,205.20

Area of the A(100.1, 200.2), B(105.1, 200.2), C(100.1, 205.2) = 12.5

--- Check if a test point P(x, y) lies strictly inside the triangle ABC ---

Do you wish to use previous entered triangle?
If Yes, type 'Y'; If No, type 'N': y
Enter the co-ordinates of Test Point (Ex.: 3,5): 101.10,201.20

Test Point (101.1, 201.2) is inside ABC.

*/