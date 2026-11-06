/* Write a program in C++ to implement Array Representation of Linear Queue using
class, constructor, member variables, member functions, and destructor. */

#include<iostream>
using namespace std;

template <class T>
class queue {
private: 
    T *arr;
    int front = -1, rear = -1;
    int n;
public: 
    queue(int size) {
        n = size;
        arr = new T[n];
        cout << "Array created successfully with capacity: " << n;
    }

    bool isEmpty() {
        if(front == -1 || front > rear) {
            return true;
        }
        return false;
    }

    bool isFull() {
        if(rear == n - 1) {
            return true;
        }
        return false;
    }

    void enqueue(T elem) {
        if(isFull()) {
            cout << "Queue Overflow.";
        }
        else {
            if(front == -1) {
                front = 0;
            }
            arr[++rear] = elem;
            cout << elem << " inserted to queue.";
        }
    }

    void dequeue() {
        if(isEmpty()) {
            cout << "Queue is empty.";
        }
        else {
            cout << arr[front++] << " removed from the queue";
        }
    }

    void display() {
        if(isEmpty()) {
            cout << "Queue is empty.";
        }
        else {
            cout << "\nCurrent queue: ";
            for(int i = front; i <= rear; i++) {
                cout << arr[i] << "  ";
            }
        }
    }

    ~queue() {
        delete[] arr;
        cout << "\nMemory cleared.";
    }
};

int main() {
    int size, elem, choice;
    cout << "Enter the size: ";
    cin >> size;

    queue<int> obj(size);

    while(true) {
        cout << "\n1. Enqueue, 2. Dequeue, 3. Display, 4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: 
                cout << "Enter the element: ";
                cin >> elem;
                obj.enqueue(elem);
                break;
            case 2: 
                obj.dequeue();
                break;
            case 3: 
                obj.display();
                break;
            case 4: 
                return 0;
            default: 
                cout << "\nWrong Choice.";
        }
    }
}