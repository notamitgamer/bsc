/* algo_101: Write a program to evaluate a postfix expression using a stack. */

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

template <class T>
class numStack {
private:
    T arr[100];
    int top = -1;

public:
    bool isEmpty() { return top == -1; }
    void push(T x) { arr[++top] = x; }
    T pop() { return arr[top--]; }
};

int evaluatePostfix(string postfix) {
    numStack<int> s;

    for(int i = 0; i < postfix.length(); i++) {
        char ch = postfix[i];

        if(ch >= '0' && ch <= '9') {
            s.push(ch - '0');
        } else {
            int op2 = s.pop();
            int op1 = s.pop();

            switch(ch) {
                case '+': s.push(op1 + op2); break;
                case '-': s.push(op1 - op2); break;
                case '*': s.push(op1 * op2); break;
                case '/': s.push(op1 / op2); break;
                case '^': s.push(pow(op1, op2)); break;
            }
        }
    }

    return s.pop();
}

int main() {
    string exp;
    cout << "Enter single-digit Postfix expression (e.g. 23*54*+): ";
    cin >> exp;
    cout << "Evaluated Result: " << evaluatePostfix(exp) << "\n";
    return 0;
}
