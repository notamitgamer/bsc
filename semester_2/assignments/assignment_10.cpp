#include <iostream>
using namespace std;

class CircularQueue {
private:
    int *queue;
    int front, rear, size;

public:
    CircularQueue(int n) {
        size = n;
        queue = new int[size];
        front = -1;
        rear = -1;
    }

    bool isEmpty() { return front == -1; }
    bool isFull() { return (rear + 1) % size == front; }

    void enqueue(int val) {
        if (isFull()) { cout << "Queue is Full!\n"; return; }
        if (isEmpty()) { front = 0; rear = 0; }
        else rear = (rear + 1) % size;
        queue[rear] = val;
    }

    void dequeue() {
        if (isEmpty()) { cout << "Queue is Empty!\n"; return; }
        int val = queue[front];
        if (front == rear) { front = -1; rear = -1; }
        else front = (front + 1) % size;
        cout << "Removed: " << val << endl;
    }

    void peek() {
        if (isEmpty()) { cout << "Queue is Empty!\n"; return; }
        cout << "Front element: " << queue[front] << endl;
    }

    void display() {
        if (isEmpty()) { cout << "Queue is Empty!\n"; return; }
        int i = front;
        while (true) {
            cout << queue[i] << " ";
            if (i == rear) break;
            i = (i + 1) % size;
        }
        cout << endl;
    }

    ~CircularQueue() { delete[] queue; }
};

int main() {
    int n, choice, val;
    cout << "Enter queue size: ";
    cin >> n;
    if (n <= 0) { cout << "Invalid size!\n"; return 0; }

    CircularQueue q(n);
    while (true) {
        cout << "1.enqueue 2.dequeue 3.peek 4.isEmpty 5.isFull 6.Display 0.Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: cout << "Enter value: "; cin >> val; q.enqueue(val); break;
            case 2: q.dequeue(); break;
            case 3: q.peek(); break;
            case 4: cout << (q.isEmpty() ? "Empty\n" : "Not empty\n"); break;
            case 5: cout << (q.isFull() ? "Full\n" : "Not full\n"); break;
            case 6: q.display(); break;
            case 0: cout << "Exiting...\n"; return 0;
            default: cout << "Wrong choice.\n";
        }
    }
}