/* Circluar linked list */

#include <iostream>
using namespace std;

struct Node {
    int info;
    Node *next = this;
};

class circularlist {
private:
    Node *cl = nullptr;

public:
    void insertEnd();
    void display();
    ~circularlist();
};

typedef class circularlist cl;

void circularlist::insertEnd() {
    Node *newNode = new Node;
    cout << "Enter info: ";
    cin >> newNode->info;

    if (cl == nullptr) {
        cl = newNode;
        cl->next = cl;
    } else {
        newNode->next = cl->next;
        cl->next = newNode;
        cl = newNode;
    }
    cout << endl << "Inserted " << newNode->info << " at the end\n";
}

void circularlist::display() {
    if (cl == nullptr) {
        cout << "List is empty\n";
        return;
    }

    Node *t = cl->next;
    cout << "Circular List: ";
    do {
        cout << t->info << " -> ";
        t = t->next;
    } while (t != cl->next);
    cout << "(head)\n";
}

circularlist::~circularlist() {
    if (cl == nullptr) return;

    Node *t = cl->next;
    Node *p;
    while (t != cl) {
        p = t->next;
        delete t;
        t = p;
    }
    delete cl;
    cl = nullptr;
}

int main() {
    circularlist list;
    int choice;

    while (true) {
        cout << "\n--- Circular Linked List Menu ---\n";
        cout << "1. Insert at End\n";
        cout << "2. Display List\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                list.insertEnd();
                break;
            case 2:
                list.display();
                break;
            case 3:
                cout << "Exiting program...\n";
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}
