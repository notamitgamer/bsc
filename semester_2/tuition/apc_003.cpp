/*
 * Author: Amit Dutta <amitdutta4255@gmail.com> | Date: 01 Aug 2026
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT
 */

/* Write a C++ program to add two polynomial equations and display the resultant polynomial. */

#include<iostream>
using namespace std;

typedef struct Node { 
    double coeff;
    int expo;
    Node *next;
} node;

class mains {
private: 
node *head1 = nullptr, *head2 = nullptr, *rear = nullptr;
public: 
    void input() {
        int n1;
        cout << "Enter the degree of first polynomial equation: ";
        cin >> n1;
        for(int i = 0; i <= n1; i++) {
            node *newNode = new node;
            cout << "Enter the coefficient for n^" << i << ": ";
            cin >> newNode -> coeff;
            newNode -> expo = i;
            newNode -> next = nullptr;

            if(head1 == nullptr) {
                head1 = newNode;
                rear = newNode;
            } else {
                rear -> next = newNode;
                rear = newNode;
            }
        }
        cout << "You entered: ";
        display(head1); 
        cout  << endl;
        
        int n2;
        cout << "\nEnter the degree of second polynomial equation: ";
        cin >> n2;
        for(int i = 0; i <= n2; i++) {
            node *newNode = new node;
            cout << "Enter the coefficient for n^" << i << ": ";
            cin >> newNode -> coeff;
            newNode -> expo = i;
            newNode -> next = nullptr;

            if(head2 == nullptr) {
                head2 = newNode;
                rear = newNode;
            } else {
                rear -> next = newNode;
                rear = newNode;
            }
        }
        cout << "You entered: ";
        display(head2); 
        cout << endl;
    }

    void display(node *head) {
        node *temp = head;
        bool first = true;
        bool second = true;
        while(temp != nullptr) {
            if(first) {
                cout << temp -> coeff;
                first = false;
                temp = temp -> next;
            }
            if(second) {
                if(temp -> coeff >= 0)
                    cout << " + " << temp -> coeff << "x";
                else
                    cout << " - " << (-temp -> coeff) << "x";
                second = false;
            } else {
                if(temp -> coeff >= 0)
                    cout << " + " << temp -> coeff << "x^" << temp -> expo;
                else
                    cout << " - " << (-temp -> coeff) << "x^" << temp -> expo;
            }
            temp = temp -> next;
        }
    }

    void calc() {
        node *head = nullptr, *temp1 = head1, *temp2 = head2, *rear = nullptr;
        while(temp1 != nullptr && temp2 != nullptr) {
            node *newNode = new node;
            newNode -> coeff = (temp1 -> coeff + temp2 -> coeff);
            newNode -> expo = temp1 -> expo;
            newNode -> next = nullptr;

            if(head == nullptr) {
                head = newNode;
                rear = newNode;
            } else {
                rear -> next = newNode;
                rear = newNode;
            }

            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }
        
        while(temp1 != nullptr) {
            node *newNode = new node;
            newNode -> coeff = temp1 -> coeff;
            newNode -> expo = temp1 -> expo;
            newNode -> next = nullptr;

            rear -> next = newNode;
            rear = newNode;

            temp1 = temp1 -> next;
        }

        while(temp2 != nullptr) {
            node *newNode = new node;
            newNode -> coeff = temp2 -> coeff;
            newNode -> expo = temp2 -> expo;
            newNode -> next = nullptr;

            rear -> next = newNode;
            rear = newNode;

            temp2 = temp2 -> next;
        }

        cout << "\nSum: ";
        display(head);
        freeList(head);
    }

    void freeList(node *head) {
        node *temp;
        while(head != nullptr) {
            temp = head;
            head = head -> next;
            delete temp;
        }
    }
    void doAll() {
        input();
        calc();
        freeList(head1);
        freeList(head2);
    }
};

int main() {
    mains obj;
    obj.doAll();
    return 0;
}