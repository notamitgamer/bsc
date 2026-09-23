/* WAP to reverse the order of the elements in the stack using additional Queue. */

#include <iostream>
using namespace std;

class Queue {
private:
    int *arr;
    int front;
    int rear;
    int capacity;

public:
    Queue(int size) {
        capacity = size;
        arr = new int[capacity];
        front = -1;
        rear = -1;
    }

    bool isEmpty() { return (front == -1 || front > rear); }
    bool isFull() { return (rear == capacity - 1); }

    void enqueue(int val) {
        if (isFull()) return;
        if (front == -1) front = 0;
        arr[++rear] = val;
    }

    int dequeue() {
        if (isEmpty()) return -1;
        int val = arr[front++];
        if (front > rear) { front = -1; rear = -1; }
        return val;
    }

    ~Queue() { delete[] arr; }
};

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

    bool isFull() { return (top == capacity - 1); }
    bool isEmpty() { return (top == -1); }

    void push(int val) {
        if (isFull()) { cout << "Stack Overflow!\n"; return; }
        arr[++top] = val;
    }

    int pop() {
        if (isEmpty()) { cout << "Stack Underflow!\n"; return -1; }
        return arr[top--];
    }

    void display() {
        if (isEmpty()) { cout << "Stack is empty!\n"; return; }
        for (int i = top; i >= 0; i--) cout << arr[i] << " ";
        cout << endl;
    }

    void reverseUsingQueue() {
        if (isEmpty()) { cout << "Stack is empty! Nothing to reverse.\n"; return; }

        Queue q(capacity);
        while (!isEmpty()) q.enqueue(pop());
        while (!q.isEmpty()) push(q.dequeue());
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
                s.reverseUsingQueue();
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