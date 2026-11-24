/* algo_096: Write a program to scan a polynomial using linked list and add two polynomials. */

#include<iostream>
using namespace std;

template <class T>
struct node {
    T coeff;
    int exp;
    node<T> *next = nullptr;
};

template <class T>
class polynomial {
private:
    node<T> *head1 = nullptr;
    node<T> *head2 = nullptr;
    node<T> *head3 = nullptr;

    void appendNode(node<T> *&head, T c, int e) {
        node<T> *newNode = new node<T>;
        newNode->coeff = c;
        newNode->exp = e;

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

    void clearList(node<T> *&head) {
        node<T> *temp = head;
        while(temp != nullptr) {
            node<T> *nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }
        head = nullptr;
    }

public:
    polynomial() {}

    void takeInput(int p) {
        node<T> *head = nullptr;
        int elem;

        cout << "\nHow many terms do you want to add (in descending order of exponent): ";
        cin >> elem;
        for(int i = 0; i < elem; i++) {
            T c;
            int e;
            cout << "Enter coefficient and exponent: ";
            cin >> c >> e;
            appendNode(head, c, e);
        }

        cout << "Entered polynomial: ";
        display(head);

        if(p == 1) head1 = head;
        else if(p == 2) head2 = head;
    }

    void addPolynomials() {
        node<T> *temp1 = head1;
        node<T> *temp2 = head2;

        while(temp1 != nullptr && temp2 != nullptr) {
            if(temp1->exp == temp2->exp) {
                T sum = temp1->coeff + temp2->coeff;
                if(sum != 0) {
                    appendNode(head3, sum, temp1->exp);
                }
                temp1 = temp1->next;
                temp2 = temp2->next;
            } else if(temp1->exp > temp2->exp) {
                appendNode(head3, temp1->coeff, temp1->exp);
                temp1 = temp1->next;
            } else {
                appendNode(head3, temp2->coeff, temp2->exp);
                temp2 = temp2->next;
            }
        }

        while(temp1 != nullptr) {
            appendNode(head3, temp1->coeff, temp1->exp);
            temp1 = temp1->next;
        }

        while(temp2 != nullptr) {
            appendNode(head3, temp2->coeff, temp2->exp);
            temp2 = temp2->next;
        }

        cout << "\n\nResultant Polynomial: ";
        display(head3);
        cout << "\n";
    }

    void display(node<T> *head) {
        if(head == nullptr) {
            cout << "0";
            return;
        }
        node<T> *temp = head;
        while(temp != nullptr) {
            cout << "(" << temp->coeff << ")x^" << temp->exp;
            temp = temp->next;
            if(temp != nullptr) {
                cout << " + ";
            }
        }
    }

    ~polynomial() {
        clearList(head1);
        clearList(head2);
        clearList(head3);
    }
};

int main() {
    polynomial<int> obj;
    cout << "Polynomial 1:";
    obj.takeInput(1);
    cout << "\nPolynomial 2:";
    obj.takeInput(2);
    obj.addPolynomials();
    return 0;
}
