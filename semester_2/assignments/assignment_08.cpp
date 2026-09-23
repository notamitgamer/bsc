/* Perform Stack operations using Array implementation. */

#include <iostream>
using namespace std;

class Stack
{
private:
    int *arr;
    int top;
    int capacity;

public:
    Stack(int size)
    {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }

    bool isFull() { return (top == capacity - 1); }
    bool isEmpty() { return (top == -1); }

    void push()
    {
        if (isFull())
        {
            cout << "Stack Overflow!\n";
            return;
        }
        int val;
        cout << "Enter the value: ";
        cin >> val;
        arr[++top] = val;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow!\n";
            return;
        }
        int val = arr[top--];
        cout << "Popped value: " << val << endl;
    }

    void peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty!\n";
            return;
        }
        cout << "Top element: " << arr[top] << endl;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is empty!\n";
            return;
        }
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";
        cout << endl;
    }

    ~Stack() { delete[] arr; }
};

int main()
{
    int size, choice;
    cout << "Enter stack capacity: ";
    cin >> size;
    if (size <= 0)
    {
        cout << "Invalid size!\n";
        return 0;
    }

    Stack s(size);
    while (true)
    {
        cout << "1.push 2.pop 3.peek 4.isFull 5.isEmpty 0.Display -1.Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            s.push();
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.peek();
            break;
        case 4:
            cout << (s.isFull() ? "Full\n" : "Not full\n");
            break;
        case 5:
            cout << (s.isEmpty() ? "Empty\n" : "Not empty\n");
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