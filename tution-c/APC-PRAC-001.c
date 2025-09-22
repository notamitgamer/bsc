

#include<stdio.h>
int main() {
    double length, breadth, area, perimeter;
    printf("Enter the length and breadth of the Rectangle : ");
    scanf("%lf %lf", &length, &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("\nArea of the Rectangle : %g"
           "\nPerimeter of the Rectangle : %g", area, perimeter);
    return 0;

}
