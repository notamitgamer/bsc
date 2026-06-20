---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> assignment-s-20.c'
description: 'Write a menu-driven program to perform the following matrix operations using 2-D arrays and functions: a. Sum b. Difference c. Product d. Transpose'
source: 'semester_1/assignment-secondary/assignment-s-20.c'
---

# assignment-s-20.c

### Metadata

- **Author** — [Amit Dutta](mailto:amitdutta4255@gmail.com)
- **Last updated** — 22 Dec 2025
- **License** — [MIT License (See the LICENSE file for details)](https://github.com/notamitgamer/bsc/blob/main/LICENSE)


### Problem Statement

::: tip Problem Statement
Write a menu-driven program to perform the following matrix operations using 2-D arrays and functions: a. Sum b. Difference c. Product d. Transpose
:::

## Source Code

<div style="display:flex;gap:12px;margin-bottom:12px;">
  <a href="https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-secondary/assignment-s-20.c" target="_blank" rel="noopener noreferrer"   style="display:inline-flex;align-items:center;gap:6px;font-size:0.85rem;          text-decoration:none;color:var(--vp-c-brand);">
    <svg xmlns="http://www.w3.org/2000/svg" width="15" height="15" viewBox="0 0 24 24"         fill="currentColor" style="vertical-align:middle;">
      <path d="M12 0C5.37 0 0 5.373 0 12c0 5.303 3.438 9.8 8.205 11.387.6.113.82-.258             .82-.577v-2.234c-3.338.726-4.033-1.416-4.033-1.416-.546-1.387-1.333-1.757             -1.333-1.757-1.089-.745.083-.729.083-.729 1.205.084 1.84 1.236 1.84 1.236             1.07 1.835 2.809 1.305 3.495.998.108-.776.417-1.305.76-1.605-2.665-.3             -5.466-1.332-5.466-5.93 0-1.31.465-2.38 1.235-3.22-.135-.303-.54-1.523             .105-3.176 0 0 1.005-.322 3.3 1.23.96-.267 1.98-.399 3-.405 1.02.006             2.04.138 3 .405 2.28-1.552 3.285-1.23 3.285-1.23.645 1.653.24 2.873             .12 3.176.765.84 1.23 1.91 1.23 3.22 0 4.61-2.805 5.625-5.475 5.92             .42.36.81 1.096.81 2.22v3.293c0 .319.21.694.825.576C20.565 21.795             24 17.298 24 12c0-6.627-5.373-12-12-12z"/>
    </svg>
    View on GitHub
  </a>
  <a href="https://raw.usercontent.amit.is-a.dev/semester_1/assignment-secondary/assignment-s-20.c" target="_blank" rel="noopener noreferrer"   style="display:inline-flex;align-items:center;gap:6px;font-size:0.85rem;          text-decoration:none;color:var(--vp-c-text-2);">
    <svg xmlns="http://www.w3.org/2000/svg" width="14" height="14" viewBox="0 0 24 24"         fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round"         stroke-linejoin="round" style="vertical-align:middle;">
      <path d="M21 15v4a2 2 0 0 1-2 2H5a2 2 0 0 1-2-2v-4"/>
      <polyline points="7 10 12 15 17 10"/>
      <line x1="12" y1="15" x2="12" y2="3"/>
    </svg>
    Download Raw
  </a>
</div>

::: info Printing the code
To print this file, open it on GitHub and click **Raw** before printing, or use the **Download Raw** button above and print directly from that page.
:::
```c [assignment-s-20.c]
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
```
