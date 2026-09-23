#include <iostream>
using namespace std;

class Stack {
private:
    int *arr;
    int top;
    int capacity;

public:
    Stack(int size) {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }

    // Disable copy constructor and assignment operator
    Stack(const Stack&) = delete;
    Stack& operator=(const Stack&) = delete;

    bool isFull() const { return (top == capacity - 1); }
    bool isEmpty() const { return (top == -1); }

    void push(int val) {
        if (isFull()) { cout << "Stack Overflow!\n"; return; }
        arr[++top] = val;
    }

    int pop() {
        if (isEmpty()) { cout << "Stack Underflow!\n"; return -1; }
        return arr[top--];
    }

    void display() const {
        if (isEmpty()) { cout << "Stack is empty!\n"; return; }
        for (int i = top; i >= 0; i--) cout << arr[i] << " ";
        cout << endl;
    }

    void reverseUsingAdditionalStacks() {
        if (isEmpty()) { cout << "Stack is empty! Nothing to reverse.\n"; return; }

        Stack s1(capacity);
        Stack s2(capacity);

        while (!isEmpty()) s1.push(pop());
        while (!s1.isEmpty()) s2.push(s1.pop());
        while (!s2.isEmpty()) push(s2.pop());
    }

    ~Stack() { delete[] arr; }
};

int main() {
    int size, choice, val;
    cout << "Enter the capacity of the stack: ";
    cin >> size;
    if (size <= 0) { cout << "Invalid stack size!\n"; return 0; }

    Stack s(size);

    while (true) {
        cout << "1.push 2.pop 3.reverse 0.display -1.Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> val;
                s.push(val);
                break;
            case 2: {
                int v = s.pop();
                if (v != -1) cout << "Popped element: " << v << endl;
                break;
            }
            case 3:
                s.reverseUsingAdditionalStacks();
                cout << "Stack reversed.\n"; // Added feedback
                break;
            case 0:
                s.display();
                break;
            case -1:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Wrong choice.\n";
        }
    }
}