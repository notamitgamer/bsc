#include <iostream>
using namespace std;

class Queue {
private:
    int *arr;
    int front, rear, capacity;

public:
    Queue(int size) {
        capacity = size;
        arr = new int[capacity];
        front = -1;
        rear = -1;
    }

    bool isFull() { return (rear == capacity - 1); }
    bool isEmpty() { return (front == -1 || front > rear); }

    void enqueue() {
        if (isFull()) { cout << "Queue Overflow!\n"; return; }
        int val;
        cout << "Enter the value: ";
        cin >> val;
        if (front == -1) front = 0;
        arr[++rear] = val;
    }

    void dequeue() {
        if (isEmpty()) { cout << "Queue Underflow!\n"; return; }
        int val = arr[front++];
        if (front > rear) { front = -1; rear = -1; }
        cout << "Dequeued value: " << val << endl;
    }

    void peek() {
        if (isEmpty()) { cout << "Queue is empty!\n"; return; }
        cout << "Front element: " << arr[front] << endl;
    }

    void display() {
        if (isEmpty()) { cout << "Queue is empty!\n"; return; }
        for (int i = front; i <= rear; i++) cout << arr[i] << " ";
        cout << endl;
    }

    ~Queue() { delete[] arr; }
};

int main() {
    int size, choice;
    cout << "Enter queue capacity: ";
    cin >> size;
    if (size <= 0) { cout << "Invalid size!\n"; return 0; }

    Queue q(size);
    while (true) {
        cout << "1.enqueue 2.dequeue 3.peek 4.isFull 5.isEmpty 0.Display -1.Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: q.enqueue(); break;
            case 2: q.dequeue(); break;
            case 3: q.peek(); break;
            case 4: cout << (q.isFull() ? "Full\n" : "Not full\n"); break;
            case 5: cout << (q.isEmpty() ? "Empty\n" : "Not empty\n"); break;
            case 0: q.display(); break;
            case -1: cout << "Exiting...\n"; return 0;
            default: cout << "Wrong choice.\n";
        }
    }
}