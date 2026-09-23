#include <iostream>
using namespace std;

typedef struct nodeType {
    int data;
    nodeType *prev = nullptr;
    nodeType *next = nullptr;
} node;

class DoublyLinkedList {
private:
    node *head;

public:
    DoublyLinkedList() { head = nullptr; }

    void insAtBegin() {
        node *newNode = new node;
        cout << "Enter the value: ";
        cin >> newNode->data;
        newNode->prev = nullptr;
        newNode->next = head;
        if (head != nullptr) head->prev = newNode;
        head = newNode;
    }

    void insAtEnd() {
        node *newNode = new node;
        cout << "Enter the value: ";
        cin >> newNode->data;
        newNode->next = nullptr;
        if (head == nullptr) {
            newNode->prev = nullptr;
            head = newNode;
        } else {
            node *temp = head;
            while (temp->next != nullptr) temp = temp->next;
            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    void insAtPos() {
        int pos;
        cout << "Enter the position: ";
        cin >> pos;
        if (pos < 1) { cout << "Invalid Position!\n"; return; }
        if (pos == 1) { insAtBegin(); return; }
        node *temp = head;
        for (int i = 1; i < pos - 1 && temp != nullptr; i++) temp = temp->next;
        if (temp == nullptr) { cout << "Out of range!\n"; return; }
        node *newNode = new node;
        cout << "Enter the value: ";
        cin >> newNode->data;
        newNode->next = temp->next;
        newNode->prev = temp;
        if (temp->next != nullptr) temp->next->prev = newNode;
        temp->next = newNode;
    }

    void delAtBegin() {
        if (head == nullptr) { cout << "List is empty!\n"; return; }
        node *temp = head;
        head = head->next;
        if (head != nullptr) head->prev = nullptr;
        delete temp;
    }

    void delAtEnd() {
        if (head == nullptr) { cout << "List is empty!\n"; return; }
        if (head->next == nullptr) { delete head; head = nullptr; return; }
        node *temp = head;
        while (temp->next != nullptr) temp = temp->next;
        temp->prev->next = nullptr;
        delete temp;
    }

    void delAtPos() {
        if (head == nullptr) { cout << "List is empty!\n"; return; }
        int pos;
        cout << "Enter the position: ";
        cin >> pos;
        if (pos < 1) { cout << "Invalid Position!\n"; return; }
        if (pos == 1) { delAtBegin(); return; }
        node *temp = head;
        for (int i = 1; i < pos && temp != nullptr; i++) temp = temp->next;
        if (temp == nullptr) { cout << "Out of range!\n"; return; }
        if (temp->next != nullptr) temp->next->prev = temp->prev;
        if (temp->prev != nullptr) temp->prev->next = temp->next;
        delete temp;
    }

    void search() {
        if (head == nullptr) { cout << "List is empty!\n"; return; }
        int key, pos = 1;
        cout << "Enter the element to search: ";
        cin >> key;
        node *temp = head;
        while (temp != nullptr) {
            if (temp->data == key) { cout << "Found at position: " << pos << "\n"; return; }
            temp = temp->next;
            pos++;
        }
        cout << "Element not found.\n";
    }

    void reverse() {
        if (head == nullptr || head->next == nullptr) return;
        node *curr = head, *temp = nullptr;
        while (curr != nullptr) {
            temp = curr->prev;
            curr->prev = curr->next;
            curr->next = temp;
            curr = curr->prev;
        }
        if (temp != nullptr) head = temp->prev;
    }

    void display() {
        node *temp = head;
        cout << "List: nullptr  ";
        while (temp != nullptr) { cout << temp->data << "  "; temp = temp->next; }
        cout << "nullptr\n";
    }

    void printMenu() {
        cout << "1.insertAtBegin 2.insertAtEnd 3.insertAtPos 4.deleteAtBegin 5.deleteAtEnd \n"
             << "6.deleteAtPos 7.search 8.reverse 0.Display -1.Exit\n";
    }

    ~DoublyLinkedList() {
        node *temp;
        while (head != nullptr) { temp = head; head = head->next; delete temp; }
    }
};

int main() {
    DoublyLinkedList list;
    int choice;

    while (true) {
        list.printMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: list.insAtBegin(); break;
            case 2: list.insAtEnd(); break;
            case 3: list.insAtPos(); break;
            case 4: list.delAtBegin(); break;
            case 5: list.delAtEnd(); break;
            case 6: list.delAtPos(); break;
            case 7: list.search(); break;
            case 8: list.reverse(); break;
            case 0: list.display(); break;
            case -1: cout << "Exiting...\n"; return 0;
            default: cout << "Wrong choice. Try again.\n";
        }
    }
}