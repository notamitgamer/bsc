/* algo_099: Write a program to implement a Doubly Linked List including insertion, deletion, and reversal. */

#include<iostream>
using namespace std;

template <class T>
struct node {
    T data;
    node<T> *prev = nullptr;
    node<T> *next = nullptr;
};

template <class T>
class dll {
private:
    node<T> *head = nullptr;

public:
    dll() {}

    void insertEnd(T val) {
        node<T> *newNode = new node<T>;
        newNode->data = val;

        if(head == nullptr) {
            head = newNode;
        } else {
            node<T> *temp = head;
            while(temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    void deleteEnd() {
        if(head == nullptr) {
            cout << "\nList is empty.";
            return;
        }
        if(head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }
        node<T> *temp = head;
        while(temp->next != nullptr) {
            temp = temp->next;
        }
        temp->prev->next = nullptr;
        delete temp;
    }

    void reverseList() {
        node<T> *temp = nullptr;
        node<T> *curr = head;

        while(curr != nullptr) {
            temp = curr->prev;
            curr->prev = curr->next;
            curr->next = temp;
            curr = curr->prev;
        }

        if(temp != nullptr) {
            head = temp->prev;
        }
    }

    void display() {
        node<T> *temp = head;
        if(temp == nullptr) {
            cout << " Empty";
            return;
        }
        while(temp != nullptr) {
            cout << "  " << temp->data;
            temp = temp->next;
        }
    }

    ~dll() {
        node<T> *temp = head;
        while(temp != nullptr) {
            node<T> *nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }
        head = nullptr;
    }
};

int main() {
    dll<int> obj;
    obj.insertEnd(10);
    obj.insertEnd(20);
    obj.insertEnd(30);

    cout << "Doubly Linked List:";
    obj.display();

    obj.reverseList();
    cout << "\nReversed Doubly Linked List:";
    obj.display();

    obj.deleteEnd();
    cout << "\nAfter Delete End:";
    obj.display();
    cout << "\n";

    return 0;
}
