/* Write a program to implement Linked List (insertion, deletion, display, reverse) and concatenate two linked lists. */

#include<iostream>
using namespace std;

template <class T>
struct node {
    T data;
    node<T> *next = nullptr;
};

template <class T>
class linkedList {
public:
    node<T> *head = nullptr;

    linkedList() {}

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
        while(temp->next->next != nullptr) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }

    void reverseList() {
        node<T> *prev = nullptr;
        node<T> *curr = head;
        node<T> *nextNode = nullptr;

        while(curr != nullptr) {
            nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        head = prev;
    }

    void concatenate(linkedList<T> &list2) {
        if(head == nullptr) {
            head = list2.head;
            list2.head = nullptr;
            return;
        }
        node<T> *temp = head;
        while(temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = list2.head;
        list2.head = nullptr;
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

    ~linkedList() {
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
    linkedList<int> l1, l2;
    l1.insertEnd(10);
    l1.insertEnd(20);
    l1.insertEnd(30);

    cout << "List 1:";
    l1.display();

    l1.reverseList();
    cout << "\nReversed List 1:";
    l1.display();

    l2.insertEnd(40);
    l2.insertEnd(50);
    cout << "\nList 2:";
    l2.display();

    l1.concatenate(l2);
    cout << "\nConcatenated List:";
    l1.display();

    return 0;
}
