/* Write a program to implement Double Linked List. Include functions for insertion, deletion and display. */

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

    void dllInsert(T input) {
        node<T> *newNode = new node<T>;
        newNode->data = input;
        if(head == nullptr) {
            head = newNode;
        }
        else {
            node<T> *temp = head;
            while(temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }

        cout << "\nNode added successfully.";
    }

    void dllDelete() {
        if(head == nullptr) {
            cout << "\nThere is nothing to delete.";
            return;
        } 
        if(head->next == nullptr) {
            delete head;
            head = nullptr;
        }
        else {
            node<T> *temp = head;
            while(temp->next != nullptr) {
                temp = temp->next;
            }
            node<T> *temp2 = temp->prev;
            temp2->next = nullptr;
            delete temp;
        }

        cout << "\nNode deleted successfully.";
    }

    void display() {
        cout << "\nNodes in linked list:";
        node<T> *temp = head;
        if(temp == nullptr) {
            cout << " Nothing";
        } else {
            while(temp != nullptr) {
                cout << "  " << temp->data;
                temp = temp->next;
            }
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
    obj.display();
    obj.dllInsert(1);
    obj.display();
    obj.dllDelete();
    obj.display();
    return 0;
}