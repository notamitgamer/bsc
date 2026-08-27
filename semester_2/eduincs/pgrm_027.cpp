/* Double linked list */

#include <iostream>
using namespace std;

struct Node {
    int info;
    Node *next = nullptr;
    Node *prev = nullptr;
};

class doublelist {
private:
    Node *head = nullptr;

public:
    void insertBeg();
    void insertEnd();
    void display();
    ~doublelist();
};

void doublelist::insertBeg() {
    Node *newNode = new Node;
    cout << "Enter data: ";
    cin >> newNode->info;

    if (head == nullptr) {
        head = newNode;
    } else {
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
    }
    cout << "Node added successfully!\n";
}

void doublelist::insertEnd() {
    Node *newNode = new Node;
    cout << "Enter data: ";
    cin >> newNode->info;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node *tmp = head;
        while (tmp->next != nullptr) {
            tmp = tmp->next;
        }
        tmp->next = newNode;
        newNode->prev = tmp;
    }
    cout << "Node added successfully!\n";
}

void doublelist::display() {
    cout << "The list: ";
    Node *tmp = head;
    while (tmp != nullptr) {
        cout << tmp->info << " ";
        tmp = tmp->next;
    }
    cout << "nullptr\n";
}

doublelist::~doublelist() {
    Node *tmp;
    while (head != nullptr) {
        tmp = head;
        head = head->next;
        delete tmp;
    }
    cout << "List deleted\n";
}

int main() {
    doublelist obj;
    int ch;

    while (1) {
        cout << "\nMenu:\n1. Insert Beg\n2. Insert End\n3. Display\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                obj.insertBeg();
                break;
            case 2:
                obj.insertEnd();
                break;
            case 3:
                obj.display();
                break;
            case 4:
                return 0;
            default:
                cout << "Wrong choice\n";
        }
    }

    return 0;
}
