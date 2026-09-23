/* Perform Queues operations using linklist. */

#include <iostream>
using namespace std;

struct node {
    int data;
    node *next = nullptr;
};

class Queue {
private:
    node *front, *rear;

public:
    Queue() { front = nullptr; rear = nullptr; }
    bool isEmpty() { return (front == nullptr); }

    void enqueue() {
        node *newNode = new node;
        cout << "Enter the value: ";
        cin >> newNode->data;
        newNode->next = nullptr;
        if (isEmpty()) front = rear = newNode;
        else { rear->next = newNode; rear = newNode; }
    }

    void dequeue() {
        if (isEmpty()) { cout << "Queue Underflow!\n"; return; }
        node *temp = front;
        int val = temp->data;
        front = front->next;
        if (front == nullptr) rear = nullptr;
        delete temp;
        cout << "Dequeued: " << val << endl;
    }

    void peek() {
        if (isEmpty()) { cout << "Queue is empty!\n"; return; }
        cout << "Front element: " << front->data << endl;
    }

    void display() {
        if (isEmpty()) { cout << "Queue is empty!\n"; return; }
        node *temp = front;
        while (temp != nullptr) { cout << temp->data << " "; temp = temp->next; }
        cout << endl;
    }

    ~Queue() {
        node *temp;
        while (front != nullptr) { temp = front; front = front->next; delete temp; }
    }
};

int main() {
    Queue q;
    int choice;

    while (true) {
        cout << "1.enqueue 2.dequeue 3.peek 4.isEmpty 0.Display -1.Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: q.enqueue(); break;
            case 2: q.dequeue(); break;
            case 3: q.peek(); break;
            case 4: cout << (q.isEmpty() ? "Empty\n" : "Not empty\n"); break;
            case 0: q.display(); break;
            case -1: cout << "Exiting...\n"; return 0;
            default: cout << "Wrong choice.\n";
        }
    }
}