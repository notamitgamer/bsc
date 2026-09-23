/* Perform Stack operations using Linked List implementation. */

#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

class Stack
{
private:
    node *top;

public:
    Stack() { top = nullptr; }

    bool isEmpty() { return (top == nullptr); }

    void push(int val)
    {
        node *newNode = new node;
        newNode->data = val;
        newNode->next = top;
        top = newNode;
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow!\n";
            return -1;
        }
        node *temp = top;
        int val = temp->data;
        top = top->next;
        delete temp;
        return val;
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty!\n";
            return -1;
        }
        return top->data;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is empty!\n";
            return;
        }
        node *temp = top;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    ~Stack()
    {
        node *temp;
        while (top != nullptr)
        {
            temp = top;
            top = top->next;
            delete temp;
        }
    }
};

int main()
{
    Stack s;
    int choice, val;

    while (true)
    {
        cout << "1.push 2.pop 3.peek 4.isEmpty 0.Display -1.Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> val;
            s.push(val);
            break;

        case 2:
        {
            int v = s.pop();
            if (v != -1)
                cout << "Popped value: " << v << endl;
            break;
        }

        case 3:
        {
            int v = s.peek();
            if (v != -1)
                cout << "Top element: " << v << endl;
            break;
        }

        case 4:
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
