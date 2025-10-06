/* Rewrite the folowing program using conditional operations
    #include<stdio.h>
    int main()
    {
        float sal;
        printf("Enter the salary");
        scanf("%f", &sal);
        if(sal >= 25000 && sal <= 40000)
            printf("Manager\n");
        else
            if(sal >= 15000 && sal < 25000)
                printf("Accountant\n");
            else
                printf("Clerk\n");
        return 0;
    }
*/
/* Author - Amit Dutta, Date - 6th OCT, 2025 */
/* Let Us C, Chap- 4, Page - 73, Qn No.: E(e) */

#include <stdio.h>
int main()
{
    float sal;
    printf("Enter the salary");
    scanf("%f", &sal);
    (sal >= 25000 && sal <= 40000) ? printf("Manager\n") : 
    ((sal >= 15000 && sal < 25000) ? printf("Accountant\n") : printf("Clerk\n"));
    return 0;
}