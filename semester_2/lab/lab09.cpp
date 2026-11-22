/* Q: Write a program to scan a polynomial using linked list and add two polynomials. */

#include<iostream>
using namespace std;

template <class T>
struct node {
    T coeff;
    int exp; // making it integer to make things easier, so things doesn't get messy with decimal numbers.
    node<T> *next = nullptr;
};

template <class T>
class polynomial {
private: 
    node<T> *head1 = nullptr;
    node<T> *head2 = nullptr;
    node<T> *head3 = nullptr;

public: 
    polynomial() {}

    void takeInput(int p) {
        node<T> *head = nullptr;
        int elem;

        cout << "\nHow many elements do you want to add: ";
        cin >> elem;
        for(int i = 0; i < elem; i++) {
            node<T> *newNode = new node<T>;
            cout << "Enter the the coefficient and exponent: ";
            cin >> newNode->coeff >> newNode->exp;
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
        cout << "\nEntered polynomial: ";
        display(head);

        if(p == 1) {
            head1 = head;
        } else if(p == 2) {
            head2 = head;
        }
        head = nullptr;
    }

    void result() {
        node<T> *temp1 = head1;
        node<T> *temp2 = head2;

        while(temp1 != nullptr && temp2 != nullptr) {
            node<T> *newNode = new node<T>;
            if(temp1->exp == temp2->exp) {
                newNode->coeff = temp1->coeff + temp2->coeff;
                if (newNode->coeff == 0) {
                    temp1 = temp1->next;
                    temp2 = temp2->next;
                    delete newNode;
                    continue;
                }
                newNode->exp = temp1->exp;
                
                temp1 = temp1->next;
                temp2 = temp2->next;
            } else if(temp1->exp > temp2->exp) {
                newNode->coeff = temp1->coeff;
                newNode->exp = temp1->exp;

                temp1 = temp1->next;
            } else if(temp2->exp > temp1->exp) {
                newNode->coeff = temp2->coeff;
                newNode->exp = temp2->exp;

                temp2 = temp2->next;
            }

            if(head3 == nullptr) {
                head3 = newNode;
            } else {
                node<T> *temp = head3;
                while(temp->next != nullptr) {
                    temp = temp->next;
                }
                temp->next = newNode;
            }
        }

        while(temp1 != nullptr) {
            node<T> *newNode = new node<T>;
            newNode->coeff = temp1->coeff;
            newNode->exp = temp1->exp;
            if(head3 == nullptr) {
                head3 = newNode;
            } else {
                node<T> *temp = head3;
                while(temp->next != nullptr) {
                    temp = temp->next;
                }
                temp->next = newNode;
            }
            temp1 = temp1->next;
        }

        while(temp2 != nullptr) {
            node<T> *newNode = new node<T>;
            newNode->coeff = temp2->coeff;
            newNode->exp = temp2->exp;
            if(head3 == nullptr) {
                head3 = newNode;
            } else {
                node<T> *temp = head3;
                while(temp->next != nullptr) {
                    temp = temp->next;
                }
                temp->next = newNode;
            }
            temp2 = temp2->next;
        }

        display(head3);
    }

    void display(node<T> *head) {
        node<T> *temp = head;
        while(temp != nullptr) {
            cout << "(" << temp->coeff << ")" << "x^" << temp->exp;
            temp = temp->next;
            if(temp != nullptr) {
                cout << " + ";
            }
        }
    }

    ~polynomial() {
        node<T> *temp = nullptr;
        node<T> *nextNode = nullptr;

        temp = head1;
        while(temp != nullptr) {
            nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }
        head1 = nullptr;

        temp = head2;
        while(temp != nullptr) {
            nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }
        head2 = nullptr;

        temp = head3;
        while(temp != nullptr) {
            nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }
        head3 = nullptr;

        cout << "\n\nMemory cleared.\n";
    }

};

int main() {
    polynomial<int> obj;
    cout << "\nPlease enter p1: ";
    obj.takeInput(1);
    cout << "\n\nPlease enter p2: ";
    obj.takeInput(2);
    cout << "\n\nResult: \n";
    obj.result();
    return 0;
}

// hell yeah, it works.......