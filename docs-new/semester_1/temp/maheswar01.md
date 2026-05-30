---
title: maheswar01.c
description: "C program source code for maheswar01.c"
icon: lucide/file-code
---

# `maheswar01.c`

## Actions

<div class="action-buttons-desktop">
<a href="https://raw.usercontent.amit.is-a.dev/semester_1/temp/maheswar01.c" class="md-button" target="_blank" rel="noopener">Raw</a>
<a href="https://github.com/notamitgamer/bsc/blob/main/semester_1/temp/maheswar01.c" class="md-button" target="_blank" rel="noopener">View on GitHub</a>
<button class="md-button" type="button" onclick="copyPageUrl()">Copy URL</button>
</div>

> You can print or save this file by opening Raw and using your browser.

<div class="action-buttons-mobile">
<button class="md-button" onclick="openActionSheet()">Actions</button>
</div>

<div class="dd-backdrop" id="actionBackdrop" onclick="closeActionSheet()"></div>
<div class="dd-sheet" id="actionSheet" role="dialog" aria-modal="true" aria-label="Actions">
  <div class="dd-sheet-handle"></div>
  <div class="dd-sheet-title"><span class="ti ti-bolt" aria-hidden="true"></span> Actions</div>
  <a href="https://raw.usercontent.amit.is-a.dev/semester_1/temp/maheswar01.c" target="_blank" rel="noopener" onclick="closeActionSheet()">
    <span class="ti ti-file-code item-icon" aria-hidden="true"></span>
    <span class="item-label">Raw</span>
  </a>
  <a href="https://github.com/notamitgamer/bsc/blob/main/semester_1/temp/maheswar01.c" target="_blank" rel="noopener" onclick="closeActionSheet()">
    <span class="ti ti-brand-github item-icon" aria-hidden="true"></span>
    <span class="item-label">View on GitHub</span>
  </a>
  <a href="javascript:void(0)" onclick="copyAndClose()">
    <span class="ti ti-copy item-icon" aria-hidden="true"></span>
    <span class="item-label">Copy URL</span>
  </a>
</div>

<script>
function openActionSheet(){var b=document.getElementById("actionBackdrop"),s=document.getElementById("actionSheet");b.style.display="block";s.style.display="block";document.body.style.overflow="hidden";requestAnimationFrame(function(){b.classList.add("visible");s.classList.add("visible");});}
function closeActionSheet(){var b=document.getElementById("actionBackdrop"),s=document.getElementById("actionSheet");b.classList.remove("visible");s.classList.remove("visible");document.body.style.overflow="";setTimeout(function(){b.style.display="none";s.style.display="none";},300);}
function copyPageUrl(){var btn=document.querySelector(".action-buttons-desktop .md-button:last-child");try{navigator.clipboard.writeText(window.location.href).then(function(){if(btn){var o=btn.textContent;btn.textContent="Copied!";setTimeout(function(){btn.textContent=o;},1800);}}).catch(function(){fallbackCopy();});}catch(e){fallbackCopy();}}
function fallbackCopy(){var ta=document.createElement("textarea");ta.value=window.location.href;ta.style.position="fixed";ta.style.opacity="0";document.body.appendChild(ta);ta.focus();ta.select();try{document.execCommand("copy");}catch(e){}document.body.removeChild(ta);}
function copyAndClose(){closeActionSheet();setTimeout(function(){copyPageUrl();},320);}
</script>

## Source Code
<div data-search-exclude="true">
```c
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
</div>
