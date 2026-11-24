/* Write a program to implement Circular Linked List (insertion, deletion, display, reverse). */

#include<iostream>
using namespace std;

template <class T>
struct node {
    T data;
    node<T> *next = nullptr;
};

template <class T>
class circularList {
private:
    node<T> *head = nullptr;

public:
    circularList() {}

    void insertEnd(T val) {
        node<T> *newNode = new node<T>;
        newNode->data = val;

        if(head == nullptr) {
            head = newNode;
            newNode->next = head;
        } else {
            node<T> *temp = head;
            while(temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
        }
    }

    void deleteFront() {
        if(head == nullptr) {
            cout << "\nList is empty.";
            return;
        }
        if(head->next == head) {
            delete head;
            head = nullptr;
            return;
        }
        node<T> *last = head;
        while(last->next != head) {
            last = last->next;
        }
        node<T> *temp = head;
        head = head->next;
        last->next = head;
        delete temp;
    }

    void reverseList() {
        if(head == nullptr || head->next == head) {
            return;
        }
        node<T> *prev = nullptr;
        node<T> *curr = head;
        node<T> *nextNode = nullptr;

        do {
            nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        } while(curr != head);

        head->next = prev;
        head = prev;
    }

    void display() {
        if(head == nullptr) {
            cout << " Empty";
            return;
        }
        node<T> *temp = head;
        do {
            cout << "  " << temp->data;
            temp = temp->next;
        } while(temp != head);
    }

    ~circularList() {
        if(head == nullptr) return;
        node<T> *curr = head->next;
        while(curr != head) {
            node<T> *nextNode = curr->next;
            delete curr;
            curr = nextNode;
        }
        delete head;
        head = nullptr;
    }
};

int main() {
    circularList<int> cl;
    cl.insertEnd(10);
    cl.insertEnd(20);
    cl.insertEnd(30);

    cout << "Circular List:";
    cl.display();

    cl.reverseList();
    cout << "\nReversed Circular List:";
    cl.display();

    cl.deleteFront();
    cout << "\nAfter Delete Front:";
    cl.display();

    return 0;
}
