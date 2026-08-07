/*
 * Author: Amit Dutta <amitdutta4255@gmail.com> | Date: 07 Aug 2026
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT
 */

/* Write a program in c++ to implement stack using a class stack with number variables, functions, constructor, destructor. */

#include<iostream>
using namespace std;

class stack {
private: 
    int size;
    int top;
    int *st;

public: 
    stack(int n);
    ~stack();
    void push(int val);
    int pop();
    int isFull();
    int isEmpty();
    void display();
};

stack::stack(int n) {
    size = n;
    top = -1;
    st = new int[size];
}

stack::~stack() {
    delete[] st;
}

void stack::push(int val) {
    if(isFull())
        cout << "Stack is full, insertion not possible.\n";
    else {
        st[++top] = val;
        cout << val << " added to the stack.\n";
    }
}

int stack::pop() {
    if(isEmpty()) {
        cout << "Stack is empty, deletion not possible.\n";
        return -1;
    } 
    else    
        return st[top--];
}

int stack::isFull() {
    if(top == size - 1)
        return 1;
    else
        return 0;
}

int stack::isEmpty() {
    if(top == -1)
        return 1;
    else
        return 0;
}

void stack::display() {
    cout << "\nStack elements are: ";
    for(int i = top; i >= 0; i--)
        cout << st[i] << "  ";
    cout << endl;
}

int main() {
    stack obj(3);
    obj.push(10);
    obj.push(15);
    obj.push(19);
    obj.push(20); // trying to overflow
    cout << "\n== After pushing all element ==";
    obj.display();
    cout << "\nPopped element is: " << obj.pop();
    cout << "\nPopped element is: " << obj.pop();
    cout << "\n\n == After poping two item ==";
    obj.display();
    cout << "\nPopped element is: " << obj.pop();
    cout << "\nPopped element is: " << obj.pop(); // trying to underflow
    return 0;
}