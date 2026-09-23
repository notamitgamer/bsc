/* Create and perform different operations on Double-ended Queues using Linked List implementation. */

#include <iostream>
using namespace std;

struct node {
    int data;
    node *prev = nullptr;
    node *next = nullptr;
};

class Deque {
private:
    node *front, *rear;

public:
    Deque() { front = nullptr; rear = nullptr; }
    bool isEmpty() { return (front == nullptr); }

    void insertFront() {
        node *newNode = new node;
        cout << "Enter the value: ";
        cin >> newNode->data;
        newNode->prev = nullptr;
        newNode->next = front;
        if (isEmpty()) front = rear = newNode;
        else { front->prev = newNode; front = newNode; }
    }

    void insertRear() {
        node *newNode = new node;
        cout << "Enter the value: ";
        cin >> newNode->data;
        newNode->next = nullptr;
        newNode->prev = rear;
        if (isEmpty()) front = rear = newNode;
        else { rear->next = newNode; rear = newNode; }
    }

    void deleteFront() {
        if (isEmpty()) { cout << "Deque Underflow!\n"; return; }
        node *temp = front;
        int val = temp->data;
        front = front->next;
        if (front == nullptr) rear = nullptr;
        else front->prev = nullptr;
        delete temp;
        cout << "Deleted from front: " << val << endl;
    }

    void deleteRear() {
        if (isEmpty()) { cout << "Deque Underflow!\n"; return; }
        node *temp = rear;
        int val = temp->data;
        rear = rear->prev;
        if (rear == nullptr) front = nullptr;
        else rear->next = nullptr;
        delete temp;
        cout << "Deleted from rear: " << val << endl;
    }

    void getFront() {
        if (isEmpty()) { cout << "Deque is empty!\n"; return; }
        cout << "Front element: " << front->data << endl;
    }

    void getRear() {
        if (isEmpty()) { cout << "Deque is empty!\n"; return; }
        cout << "Rear element: " << rear->data << endl;
    }

    void display() {
        if (isEmpty()) { cout << "Deque is empty!\n"; return; }
        node *temp = front;
        while (temp != nullptr) { cout << temp->data << " "; temp = temp->next; }
        cout << endl;
    }

    ~Deque() {
        node *temp;
        while (front != nullptr) { temp = front; front = front->next; delete temp; }
    }
};

int main() {
    Deque dq;
    int choice;

    while (true) {
        cout << "1.insertFront 2.insertRear 3.deleteFront 4.deleteRear\n"
             << "5.getFront 6.getRear 7.isEmpty 0.Display -1.Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: dq.insertFront(); break;
            case 2: dq.insertRear(); break;
            case 3: dq.deleteFront(); break;
            case 4: dq.deleteRear(); break;
            case 5: dq.getFront(); break;
            case 6: dq.getRear(); break;
            case 7: cout << (dq.isEmpty() ? "Empty\n" : "Not empty\n"); break;
            case 0: dq.display(); break;
            case -1: cout << "Exiting...\n"; return 0;
            default: cout << "Wrong choice.\n";
        }
    }
}