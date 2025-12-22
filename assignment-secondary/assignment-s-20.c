/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc/tree/main/assignment-secondary
 * License    : ESAL-1.0 ( https://aranag.site/license )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

/*  Write a menu-driven program to perform the following matrix operations using 2-D
    arrays and functions:
        a. Sum
        b. Difference
        c. Product
        d. Transpose
*/

#include <stdio.h>
#include <stdlib.h>

#define COL_MAX 10
#define COL_MIN 0
#define ROW_MAX 10
#define ROW_MIN 0
#define TRUE 1
#define FALSE 0

void input(int ***, int *, int *);
void display(int **, int, int);
void clear(int **, int);
void sum(int **, int **, int, int);
void difference(int **, int **, int, int);
void product(int **, int **, int, int, int);
void transpose(int **, int, int);

int main()
{
    int **a = NULL, **b = NULL;
    int rows_a, rows_b, cols_a, cols_b;
    int choice;

    while (TRUE)
    {
        printf("\n === MENU ===\n"
               "1. Sum\n"
               "2. Difference\n"
               "3. Product\n"
               "4. Transpose\n"
               "0. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            input(&a, &rows_a, &cols_a);
            if (a == NULL)
                break;

            input(&b, &rows_b, &cols_b);
            if (b == NULL)
            {
                clear(a, rows_a);
                a = NULL;
                break;
            }

            printf("\nMatrix A = \n");
            display(a, rows_a, cols_a);
            printf("\nMatrix B = \n");
            display(b, rows_b, cols_b);

            if (rows_a != rows_b || cols_a != cols_b)
            {
                printf("\nOrder of both matrix should be same to calculate sum.");
                printf("\nInput : Matrix A = [%d x %d]"
                       "          Matrix B = [%d x %d]",
                       rows_a, cols_a, rows_b, cols_b);

                clear(a, rows_a);
                clear(b, rows_b);
                a = NULL;
                b = NULL;
                break;
            }
            printf("\nResult = \n");
            sum(a, b, rows_a, cols_a);

            clear(a, rows_a);
            clear(b, rows_b);
            a = NULL;
            b = NULL;

            break;

        case 2:
            input(&a, &rows_a, &cols_a);
            if (a == NULL)
                break;

            input(&b, &rows_b, &cols_b);
            if (b == NULL)
            {
                clear(a, rows_a);
                a = NULL;
                break;
            }

            printf("\nMatrix A = \n");
            display(a, rows_a, cols_a);
            printf("\nMatrix B = \n");
            display(b, rows_b, cols_b);

            if (rows_a != rows_b || cols_a != cols_b)
            {
                printf("\nOrder of both matrix should be same to calculate difference.");
                printf("\nInput : Matrix A = [%d x %d]"
                       "          Matrix B = [%d x %d]",
                       rows_a, cols_a, rows_b, cols_b);

                clear(a, rows_a);
                clear(b, rows_b);
                a = NULL;
                b = NULL;
                break;
            }
            printf("\nResult = \n");
            difference(a, b, rows_a, cols_a);

            clear(a, rows_a);
            clear(b, rows_b);
            a = NULL;
            b = NULL;

            break;

        case 3:
            input(&a, &rows_a, &cols_a);
            if (a == NULL)
                break;

            input(&b, &rows_b, &cols_b);
            if (b == NULL)
            {
                clear(a, rows_a);
                a = NULL;
                break;
            }

            printf("\nMatrix A = \n");
            display(a, rows_a, cols_a);
            printf("\nMatrix B = \n");
            display(b, rows_b, cols_b);

            if (cols_a != rows_b)
            {
                printf("\nColumn count of matrix A should be same as Row count of matrix B.");
                printf("\nInput : Matrix A = [%d x %d]"
                       "          Matrix B = [%d x %d]",
                       rows_a, cols_a, rows_b, cols_b);

                clear(a, rows_a);
                clear(b, rows_b);
                a = NULL;
                b = NULL;
                break;
            }
            printf("\nResult = \n");
            product(a, b, rows_a, cols_b, cols_a);

            clear(a, rows_a);
            clear(b, rows_b);
            a = NULL;
            b = NULL;

            break;

        case 4:
            input(&a, &rows_a, &cols_a);
            if (a == NULL)
                break;

            printf("\nMatrix = \n");
            display(a, rows_a, cols_a);

            printf("\nResult = \n");
            transpose(a, rows_a, cols_a);

            clear(a, rows_a);
            a = NULL;

            break;

        case 0:
            printf("\n\nExiting program...\n");
            return 0;

        default:
            printf("\nInvalid choice. Please pick a choice from the menu.\n");
        }
    }
}

void input(int ***matrix, int *rows, int *cols)
{
    int i, j;
    printf("\nEnter row and column count (Max : 10 x 10): ");
    scanf("%d %d", rows, cols);

    if (*rows > ROW_MAX || *cols > COL_MAX || *rows <= ROW_MIN || *cols <= COL_MIN)
    {
        printf("\nInvalid dimensions. Limit is 1 to 10.\n");
        *matrix = NULL;
        return;
    }

    *matrix = (int **)malloc(*rows * sizeof(int *));

    for (i = 0; i < *rows; i++)
    {
        (*matrix)[i] = (int *)malloc(*cols * sizeof(int));
        for (j = 0; j < *cols; j++)
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &((*matrix)[i][j]));
        }
    }
}

void display(int **matrix, int rows, int cols)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void clear(int **matrix, int rows)
{
    int i;
    for (i = 0; i < rows; i++)
    {
        free(matrix[i]);
    }
    free(matrix);
}

void sum(int **a, int **b, int rows, int cols)
{
    int i, j;

    int **r = (int **)malloc(rows * sizeof(int *));
    for (i = 0; i < rows; i++)
    {
        r[i] = (int *)malloc(cols * sizeof(int));
        for (j = 0; j < cols; j++)
        {
            r[i][j] = a[i][j] + b[i][j];
        }
    }
    display(r, rows, cols);
    clear(r, rows);
}

void difference(int **a, int **b, int rows, int cols)
{
    int i, j;

    int **r = (int **)malloc(rows * sizeof(int *));
    for (i = 0; i < rows; i++)
    {
        r[i] = (int *)malloc(cols * sizeof(int));
        for (j = 0; j < cols; j++)
        {
            r[i][j] = a[i][j] - b[i][j];
        }
    }
    display(r, rows, cols);
    clear(r, rows);
}

void product(int **a, int **b, int rows_a, int cols_b, int common)
{
    int i, x, y, z, temp;

    int **r = (int **)malloc(rows_a * sizeof(int *));
    for (i = 0; i < rows_a; i++)
    {
        r[i] = (int *)malloc(cols_b * sizeof(int));
    }

    for (x = 0; x < rows_a; x++)
    {
        for (y = 0; y < cols_b; y++)
        {
            temp = 0;
            for (z = 0; z < common; z++)
            {
                temp += a[x][z] * b[z][y];
            }
            r[x][y] = temp;
        }
    }
    display(r, rows_a, cols_b);
    clear(r, rows_a);
}

void transpose(int **matrix, int rows, int cols)
{
    int i, j;

    int **r = (int **)malloc(cols * sizeof(int *));
    for (i = 0; i < cols; i++)
    {
        r[i] = (int *)malloc(rows * sizeof(int));
        for (j = 0; j < rows; j++)
        {
            r[i][j] = matrix[j][i];
        }
    }
    display(r, cols, rows);
    clear(r, cols);
}