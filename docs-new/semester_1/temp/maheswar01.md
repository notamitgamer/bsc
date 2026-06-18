---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> maheswar01.c'
description: 'C program — maheswar01.c'
---

# maheswar01.c

## Source Code

<div style="display:flex;gap:12px;margin-bottom:12px;">
  <a href="https://github.com/notamitgamer/bsc/blob/main/semester_1/temp/maheswar01.c" target="_blank" rel="noopener noreferrer"   style="display:inline-flex;align-items:center;gap:6px;font-size:0.85rem;          text-decoration:none;color:var(--vp-c-brand);">
    <svg xmlns="http://www.w3.org/2000/svg" width="15" height="15" viewBox="0 0 24 24"         fill="currentColor" style="vertical-align:middle;">
      <path d="M12 0C5.37 0 0 5.373 0 12c0 5.303 3.438 9.8 8.205 11.387.6.113.82-.258             .82-.577v-2.234c-3.338.726-4.033-1.416-4.033-1.416-.546-1.387-1.333-1.757             -1.333-1.757-1.089-.745.083-.729.083-.729 1.205.084 1.84 1.236 1.84 1.236             1.07 1.835 2.809 1.305 3.495.998.108-.776.417-1.305.76-1.605-2.665-.3             -5.466-1.332-5.466-5.93 0-1.31.465-2.38 1.235-3.22-.135-.303-.54-1.523             .105-3.176 0 0 1.005-.322 3.3 1.23.96-.267 1.98-.399 3-.405 1.02.006             2.04.138 3 .405 2.28-1.552 3.285-1.23 3.285-1.23.645 1.653.24 2.873             .12 3.176.765.84 1.23 1.91 1.23 3.22 0 4.61-2.805 5.625-5.475 5.92             .42.36.81 1.096.81 2.22v3.293c0 .319.21.694.825.576C20.565 21.795             24 17.298 24 12c0-6.627-5.373-12-12-12z"/>
    </svg>
    View on GitHub
  </a>
  <a href="https://raw.usercontent.amit.is-a.dev/semester_1/temp/maheswar01.c" target="_blank" rel="noopener noreferrer"   style="display:inline-flex;align-items:center;gap:6px;font-size:0.85rem;          text-decoration:none;color:var(--vp-c-text-2);">
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
```c [maheswar01.c]
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 1000

/* ================= STACK FOR OPERATORS ================= */

typedef struct {
    char data[MAX];
    int top;
} CharStack;

void initCharStack(CharStack *s) {
    s->top = -1;
}

void pushChar(CharStack *s, char c) {
    s->data[++s->top] = c;
}

char popChar(CharStack *s) {
    return s->data[s->top--];
}

char peekChar(CharStack *s) {
    return s->data[s->top];
}

int isEmptyChar(CharStack *s) {
    return s->top == -1;
}

/* ================= STACK FOR NUMBERS ================= */

typedef struct {
    double data[MAX];
    int top;
} DoubleStack;

void initDoubleStack(DoubleStack *s) {
    s->top = -1;
}

void pushDouble(DoubleStack *s, double x) {
    s->data[++s->top] = x;
}

double popDouble(DoubleStack *s) {
    return s->data[s->top--];
}

/* ================= HELPER FUNCTIONS ================= */

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

int isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

/* ================= INFIX TO POSTFIX ================= */

void infixToPostfix(const char *infix, char *postfix) {
    CharStack stack;
    initCharStack(&stack);

    int i = 0, k = 0;

    while (infix[i]) {
        if (isspace(infix[i])) {
            i++;
            continue;
        }

        if (isdigit(infix[i]) || infix[i] == '.') {
            while (isdigit(infix[i]) || infix[i] == '.') {
                postfix[k++] = infix[i++];
            }
            postfix[k++] = ' ';
        }
        else if (infix[i] == '(') {
            pushChar(&stack, infix[i]);
            i++;
        }
        else if (infix[i] == ')') {
            while (!isEmptyChar(&stack) && peekChar(&stack) != '(') {
                postfix[k++] = popChar(&stack);
                postfix[k++] = ' ';
            }
            popChar(&stack); // remove '('
            i++;
        }
        else if (isOperator(infix[i])) {
            while (!isEmptyChar(&stack) &&
                   precedence(peekChar(&stack)) >= precedence(infix[i])) {
                postfix[k++] = popChar(&stack);
                postfix[k++] = ' ';
            }
            pushChar(&stack, infix[i]);
            i++;
        }
        else {
            printf("Invalid character: %c\n", infix[i]);
            exit(1);
        }
    }

    while (!isEmptyChar(&stack)) {
        postfix[k++] = popChar(&stack);
        postfix[k++] = ' ';
    }

    postfix[k] = '\0';
}

/* ================= POSTFIX EVALUATION ================= */

double evaluatePostfix(const char *postfix) {
    DoubleStack stack;
    initDoubleStack(&stack);

    int i = 0;

    while (postfix[i]) {
        if (isspace(postfix[i])) {
            i++;
            continue;
        }

        if (isdigit(postfix[i]) || postfix[i] == '.') {
            char number[50];
            int k = 0;

            while (isdigit(postfix[i]) || postfix[i] == '.') {
                number[k++] = postfix[i++];
            }
            number[k] = '\0';

            pushDouble(&stack, atof(number));
        }
        else if (isOperator(postfix[i])) {
            double b = popDouble(&stack);
            double a = popDouble(&stack);

            switch (postfix[i]) {
                case '+': pushDouble(&stack, a + b); break;
                case '-': pushDouble(&stack, a - b); break;
                case '*': pushDouble(&stack, a * b); break;
                case '/':
                    if (b == 0) {
                        printf("Error: Division by zero\n");
                        exit(1);
                    }
                    pushDouble(&stack, a / b);
                    break;
            }
            i++;
        }
    }

    return popDouble(&stack);
}

/* ================= MAIN ================= */

int main() {
    char infix[MAX];
    char postfix[MAX];

    printf("Enter expression: ");
    fgets(infix, MAX, stdin);

    infixToPostfix(infix, postfix);

    double result = evaluatePostfix(postfix);

    printf("Result = %.10g\n", result);

    return 0;
}
```
