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