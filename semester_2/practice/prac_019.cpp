/* Write a program to transform an infix expression to postfix expression. */

#include<iostream>
#include<string>
using namespace std;

template <class T>
class charStack {
private:
    T arr[100];
    int top = -1;

public:
    bool isEmpty() { return top == -1; }
    void push(T x) { arr[++top] = x; }
    T pop() { return arr[top--]; }
    T peek() { return arr[top]; }
};

int precedence(char op) {
    if(op == '^') return 3;
    if(op == '*' || op == '/') return 2;
    if(op == '+' || op == '-') return 1;
    return 0;
}

string infixToPostfix(string infix) {
    charStack<char> s;
    string postfix = "";

    for(int i = 0; i < infix.length(); i++) {
        char ch = infix[i];

        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            postfix += ch;
        } else if(ch == '(') {
            s.push(ch);
        } else if(ch == ')') {
            while(!s.isEmpty() && s.peek() != '(') {
                postfix += s.pop();
            }
            if(!s.isEmpty()) s.pop();
        } else {
            while(!s.isEmpty() && precedence(s.peek()) >= precedence(ch)) {
                postfix += s.pop();
            }
            s.push(ch);
        }
    }

    while(!s.isEmpty()) {
        postfix += s.pop();
    }

    return postfix;
}

int main() {
    string exp;
    cout << "Enter Infix expression: ";
    cin >> exp;
    cout << "Postfix expression: " << infixToPostfix(exp) << "\n";
    return 0;
}
