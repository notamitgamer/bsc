/* Write a program to perform Queue operations using Circular Array and implement Stack using two Queues. */

#include<iostream>
using namespace std;

template <class T>
class circularQueue {
private:
    T *arr;
    int front, rear, cap;

public:
    circularQueue(int size = 5) {
        cap = size;
        arr = new T[cap];
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return front == -1;
    }

    void enqueue(T val) {
        if((rear + 1) % cap == front) {
            cout << "\nQueue Overflow.";
            return;
        }
        if(front == -1) front = 0;
        rear = (rear + 1) % cap;
        arr[rear] = val;
    }

    T dequeue() {
        if(front == -1) {
            cout << "\nQueue Underflow.";
            return T();
        }
        T val = arr[front];
        if(front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % cap;
        }
        return val;
    }

    void display() {
        if(isEmpty()) {
            cout << " Empty";
            return;
        }
        int i = front;
        while(true) {
            cout << "  " << arr[i];
            if(i == rear) break;
            i = (i + 1) % cap;
        }
    }

    ~circularQueue() {
        delete[] arr;
    }
};

template <class T>
class stackUsingQueues {
private:
    circularQueue<T> q1, q2;

public:
    stackUsingQueues(int size = 10) : q1(size), q2(size) {}

    void push(T val) {
        q2.enqueue(val);
        while(!q1.isEmpty()) {
            q2.enqueue(q1.dequeue());
        }
        while(!q2.isEmpty()) {
            q1.enqueue(q2.dequeue());
        }
    }

    T pop() {
        return q1.dequeue();
    }
};

int main() {
    circularQueue<int> cq(4);
    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cout << "Circular Queue:";
    cq.display();

    cq.dequeue();
    cq.enqueue(40);
    cq.enqueue(50);
    cout << "\nAfter Wrap-around Enqueue:";
    cq.display();

    stackUsingQueues<int> st(5);
    st.push(100);
    st.push(200);
    cout << "\n\nPopped from Stack-using-Queues: " << st.pop() << "\n";

    return 0;
}
