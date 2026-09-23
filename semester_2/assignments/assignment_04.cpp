/* Implement Linked List. Include functions for insertion, deletion and search of a number, reverse the list and concatenate two linked lists (include a function and also overload operator +). */

#include <iostream>
using namespace std;

typedef struct nodeType {
    int data;
    nodeType *next = nullptr;
} node;

class SinglyLinkedList {
private:
    node *head;

public:
    SinglyLinkedList() { head = nullptr; }

    SinglyLinkedList(const SinglyLinkedList &other) {
        head = nullptr;
        node *temp = other.head;
        while (temp != nullptr) {
            insertAtEnd(temp->data);
            temp = temp->next;
        }
    }

    void insertAtBegin(int val) {
        node *newNode = new node;
        newNode->data = val;
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int val) {
        node *newNode = new node;
        newNode->data = val;
        newNode->next = nullptr;
        if (head == nullptr) {
            head = newNode;
        } else {
            node *temp = head;
            while (temp->next != nullptr) temp = temp->next;
            temp->next = newNode;
        }
    }

    void insertAtPos(int pos, int val) {
        if (pos < 1) { cout << "Invalid Position!\n"; return; }
        if (pos == 1) { insertAtBegin(val); return; }
        node *temp = head;
        for (int i = 1; i < pos - 1 && temp != nullptr; i++) temp = temp->next;
        if (temp == nullptr) { cout << "Out of range!\n"; return; }
        node *newNode = new node;
        newNode->data = val;
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void deleteAtBegin() {
        if (head == nullptr) { cout << "List is empty!\n"; return; }
        node *temp = head;
        head = head->next;
        delete temp;
    }

    void deleteAtEnd() {
        if (head == nullptr) { cout << "List is empty!\n"; return; }
        if (head->next == nullptr) { delete head; head = nullptr; return; }
        node *temp = head;
        while (temp->next->next != nullptr) temp = temp->next;
        delete temp->next;
        temp->next = nullptr;
    }

    void deleteAtPos(int pos) {
        if (head == nullptr || pos < 1) { cout << "Unable to process!\n"; return; }
        if (pos == 1) { deleteAtBegin(); return; }
        node *temp = head;
        for (int i = 1; i < pos - 1 && temp != nullptr; i++) temp = temp->next;
        if (temp == nullptr || temp->next == nullptr) { cout << "Out of range!\n"; return; }
        node *delNode = temp->next;
        temp->next = delNode->next;
        delete delNode;
    }

    int search(int key) {
        node *temp = head;
        int pos = 1;
        while (temp != nullptr) {
            if (temp->data == key) return pos;
            temp = temp->next;
            pos++;
        }
        return -1;
    }

    void reverse() {
        node *prev = nullptr, *curr = head, *nxt = nullptr;
        while (curr != nullptr) {
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        head = prev;
    }

    void concatenate(SinglyLinkedList &other) {
        if (head == nullptr) { head = other.head; other.head = nullptr; return; }
        node *temp = head;
        while (temp->next != nullptr) temp = temp->next;
        temp->next = other.head;
        other.head = nullptr;
    }

    SinglyLinkedList operator+(const SinglyLinkedList &other) const {
        SinglyLinkedList result;
        node *temp = head;
        while (temp != nullptr) { result.insertAtEnd(temp->data); temp = temp->next; }
        temp = other.head;
        while (temp != nullptr) { result.insertAtEnd(temp->data); temp = temp->next; }
        return result;
    }

    void display() const {
        node *temp = head;
        cout << "\nList: ";
        while (temp != nullptr) { cout << temp->data << " -> "; temp = temp->next; }
        cout << "nullptr\n\n";
    }

    void printMenu() {
        cout << "1.insertAtBegin 2.insertAtEnd 3.insertAtPos 4.deleteAtBegin 5.deleteAtEnd \n"
             << "6.deleteAtPos 7.search 8.reverse 9.concatenate 10.operator+ 0.Display -1.Exit\n";
    }

    ~SinglyLinkedList() {
        node *temp;
        while (head != nullptr) { temp = head; head = head->next; delete temp; }
    }
};

int main() {
    SinglyLinkedList list1;
    int choice, val, pos;

    while (true) {
        list1.printMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: cout << "Enter value: "; cin >> val; list1.insertAtBegin(val); break;
            case 2: cout << "Enter value: "; cin >> val; list1.insertAtEnd(val); break;
            case 3:
                cout << "Enter position: "; cin >> pos;
                cout << "Enter value: "; cin >> val;
                list1.insertAtPos(pos, val);
                break;
            case 4: list1.deleteAtBegin(); break;
            case 5: list1.deleteAtEnd(); break;
            case 6: cout << "Enter position: "; cin >> pos; list1.deleteAtPos(pos); break;
            case 7: {
                cout << "Enter value to search: "; cin >> val;
                int res = list1.search(val);
                if (res != -1) cout << "Found at position " << res << ".\n";
                else cout << "Not found.\n";
                break;
            }
            case 8: list1.reverse(); break;
            case 9: {
                SinglyLinkedList list2;
                int m, tempVal;
                cout << "Enter number of elements in second list: "; cin >> m;
                for (int i = 0; i < m; i++) { cin >> tempVal; list2.insertAtEnd(tempVal); }
                list1.concatenate(list2);
                break;
            }
            case 10: {
                SinglyLinkedList list2;
                int m, tempVal;
                cout << "Enter number of elements in second list: "; cin >> m;
                for (int i = 0; i < m; i++) { cin >> tempVal; list2.insertAtEnd(tempVal); }
                SinglyLinkedList combined = list1 + list2;
                combined.display();
                break;
            }
            case 0: list1.display(); break;
            case -1: cout << "Exiting...\n"; return 0;
            default: cout << "Wrong choice. Try again.\n";
        }
    }
}