/* Write a program to perform Stack operations (Array), reverse a string, and reverse stack using an additional stack. */

#include<iostream>
#include<string>
using namespace std;

template <class T>
class myStack {
private:
    T *arr;
    int top;
    int cap;

public:
    myStack(int size = 50) {
        cap = size;
        arr = new T[cap];
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    void push(T val) {
        if(top == cap - 1) {
            cout << "\nStack Overflow.";
            return;
        }
        arr[++top] = val;
    }

    T pop() {
        if(top == -1) {
            cout << "\nStack Underflow.";
            return T();
        }
        return arr[top--];
    }

    void display() {
        if(isEmpty()) {
            cout << " Empty";
            return;
        }
        for(int i = top; i >= 0; i--) {
            cout << "  " << arr[i];
        }
    }

    ~myStack() {
        delete[] arr;
    }
};

int main() {
    myStack<int> s1(10), s2(10);
    s1.push(10);
    s1.push(20);
    s1.push(30);

    cout << "Original Stack (top to bottom):";
    s1.display();

    while(!s1.isEmpty()) {
        s2.push(s1.pop());
    }

    cout << "\nReversed Stack (top to bottom):";
    s2.display();

    string str = "WBSU";
    myStack<char> charStack(str.length());
    for(int i = 0; i < str.length(); i++) {
        charStack.push(str[i]);
    }
    cout << "\n\nReversed String: ";
    while(!charStack.isEmpty()) {
        cout << charStack.pop();
    }

    return 0;
}
