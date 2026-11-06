/* Write a program in C++ to implement Array Representation of Stack using class, constructor, member variables, member functions, and destructor. */

/* Only showing push, pop and display */

#include<iostream>
using namespace std;

template <class T>
class stack {
private: 
    T *arr;
    int n;
    int top = -1;
public: 
    stack(int size) {
        n = size;
        arr = new T[n];
        cout << "Array created with capacity " << n;
    }

    void push(T elem) {
        if(top == n - 1 ) {
            cout << "Stack overflow.";
        }
        else {
            arr[++top] = elem;
            cout << "Pushed: " << elem;
        }
    }

    void pop() {
        if(top == -1 ){
            cout << "Unable to delete, stack is empty.";
        }
        else {
            cout << "Popped: " << arr[top--];
        }
    }

    void display() {
        cout << "\nCurrent array: ";
        for(int i = 0; i <= top; i++) {
            cout << arr[i] << "  ";
        }
    }

    ~stack() {
        delete[] arr;
        cout << "\nMemory Cleared.";
    }
};

int main() {
    int size;
    int choice;
    int elem;
    cout << "Enter the size: ";
    cin >> size;

    stack<int> obj(size);

    while(true) {
        cout << "\n1. Push, 2. Pop, 3. Display, 0. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: 
                cout << "Enter the element: ";
                cin >> elem;
                obj.push(elem);
                break;
            case 2: 
                obj.pop();
                break;
            case 3: 
                obj.display();
                break;
            case 0: 
                return 0;
            default: 
                cout << "\nWrong choice.";
        }
    }
}