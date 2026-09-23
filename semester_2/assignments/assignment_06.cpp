/* Implement Circular Linked List. Include functions for insertion, deletion and search of a number, reverse the list. */

#include <iostream>
using namespace std;

struct node {
    int data;
    node *next = nullptr;
};

class CircularLinkedList {
private:
    node *head = nullptr;

public:
    void insertAtBegin(int val) {
        node *newNode = new node{val};
        if (head == nullptr) { head = newNode; newNode->next = head; return; }
        node *temp = head;
        while (temp->next != head) temp = temp->next;
        newNode->next = head;
        temp->next = newNode;
        head = newNode;
    }

    void insertAtEnd(int val) {
        node *newNode = new node{val};
        if (head == nullptr) { head = newNode; newNode->next = head; return; }
        node *temp = head;
        while (temp->next != head) temp = temp->next;
        temp->next = newNode;
        newNode->next = head;
    }

    void insertAtPos(int pos, int val) {
        if (pos < 1) { cout << "Invalid Position!\n"; return; }
        if (pos == 1) { insertAtBegin(val); return; }
        if (head == nullptr) { cout << "Out of range!\n"; return; }
        node *temp = head;
        for (int i = 1; i < pos - 1; i++) {
            temp = temp->next;
            if (temp == head) { cout << "Out of range!\n"; return; }
        }
        node *newNode = new node{val};
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void deleteAtBegin() {
        if (head == nullptr) { cout << "List is empty!\n"; return; }
        if (head->next == head) { delete head; head = nullptr; return; }
        node *temp = head, *last = head;
        while (last->next != head) last = last->next;
        head = head->next;
        last->next = head;
        delete temp;
    }

    void deleteAtEnd() {
        if (head == nullptr) { cout << "List is empty!\n"; return; }
        if (head->next == head) { delete head; head = nullptr; return; }
        node *temp = head;
        while (temp->next->next != head) temp = temp->next;
        node *delNode = temp->next;
        temp->next = head;
        delete delNode;
    }

    void deleteAtPos(int pos) {
        if (head == nullptr || pos < 1) { cout << "Unable to process!\n"; return; }
        if (pos == 1) { deleteAtBegin(); return; }
        node *temp = head;
        for (int i = 1; i < pos - 1; i++) {
            temp = temp->next;
            if (temp == head) { cout << "Out of range!\n"; return; }
        }
        if (temp->next == head) { cout << "Out of range!\n"; return; }
        node *delNode = temp->next;
        temp->next = delNode->next;
        delete delNode;
    }

    int search(int key) {
        if (head == nullptr) return -1;
        node *temp = head;
        int pos = 1;
        do {
            if (temp->data == key) return pos;
            temp = temp->next;
            pos++;
        } while (temp != head);
        return -1;
    }

    void reverse() {
        if (head == nullptr || head->next == head) return;
        node *prev = nullptr, *curr = head, *nxt = nullptr, *oldHead = head;
        do {
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        } while (curr != head);
        oldHead->next = prev;
        head = prev;
    }

    void display() {
        if (head == nullptr) { cout << "List is empty!\n"; return; }
        node *temp = head;
        cout << "List: ";
        do { cout << temp->data << " -> "; temp = temp->next; } while (temp != head);
        cout << "(head)\n";
    }

    void printMenu() {
        cout << "1.insertAtBegin 2.insertAtEnd 3.insertAtPos 4.deleteAtBegin 5.deleteAtEnd \n"
             << "6.deleteAtPos 7.search 8.reverse 0.Display -1.Exit\n";
    }

    ~CircularLinkedList() {
        if (head == nullptr) return;
        node *temp = head->next;
        while (temp != head) { node *next = temp->next; delete temp; temp = next; }
        delete head;
    }
};

int main() {
    CircularLinkedList list;
    int choice, val, pos;

    while (true) {
        list.printMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: cout << "Enter value: "; cin >> val; list.insertAtBegin(val); break;
            case 2: cout << "Enter value: "; cin >> val; list.insertAtEnd(val); break;
            case 3:
                cout << "Enter position: "; cin >> pos;
                cout << "Enter value: "; cin >> val;
                list.insertAtPos(pos, val);
                break;
            case 4: list.deleteAtBegin(); break;
            case 5: list.deleteAtEnd(); break;
            case 6: cout << "Enter position: "; cin >> pos; list.deleteAtPos(pos); break;
            case 7: {
                cout << "Enter value to search: "; cin >> val;
                int res = list.search(val);
                if (res != -1) cout << "Found at position " << res << ".\n";
                else cout << "Not found.\n";
                break;
            }
            case 8: list.reverse(); break;
            case 0: list.display(); break;
            case -1: cout << "Exiting...\n"; return 0;
            default: cout << "Wrong choice. Try again.\n";
        }
    }
}