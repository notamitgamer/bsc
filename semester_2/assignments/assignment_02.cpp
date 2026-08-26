/* Linked List all operation */

#include<iostream>
#include<iomanip>
using namespace std;

typedef struct nodeType {
    int data;
    nodeType *next = nullptr;
} node;

typedef struct MenuItem {
    int id; 
    const char* name;
} menu;

typedef class singlyLinkedList {
private: 
    node *head = nullptr;
public: 
    // insertion
    void insAtBegin();
    void insAtEnd();
    void insAtPos();
    void insBeforePos();
    void insAfterPos();

    // deletion
    void delAtBegin();
    void delAtEnd();
    void delAtPos();
    void delBeforePos();
    void delAfterPos();

    void printMenu();
    void display();
    ~singlyLinkedList();
} sl;

void sl :: printMenu() {
    menu items[] = {
        {1, "insertAtBegin()"}, {2, "insertAtEnd()"}, {3, "insertAtPos()"}, 
        {4, "insertBeforePos()"}, {5, "insertAfterPos()"}, {6, "deleteAtBegin()"},
        {7, "deleteAtEnd()"}, {8, "deleteAtPos()"}, {9, "deleteBeforePos()"}, 
        {10, "deleteAfterPos()"}, {0, "Display"}, {-1, "Exit"}
    };

    cout << "\n## Choose from below --\n--------------------------------------------\n";
    for (int i = 0; i < 12; i++) {
        cout << items[i].id << ". " << left << setw(20) << items[i].name;
        if (i % 2 == 1) cout << "\n";
    }
}

void sl :: display() {
    node *tmpNode = head;
    cout << "\nCurrent Linked-List: ";
    while(tmpNode != nullptr) {
        cout << tmpNode -> data << "  ";
        tmpNode = tmpNode -> next;
    }
    cout << "nullptr\n";
}

sl :: ~singlyLinkedList() {
    node *tmpNode;
    while(head != nullptr) {
        tmpNode = head;
        head = head -> next;
        delete tmpNode;
    }
    cout << "\nMemory cleared!\nExit 0\n";
}

void sl :: insAtBegin() {
        node *newNode = new node;
        cout << "\nEnter the value: ";
        cin >> newNode -> data;
        newNode -> next = head;
        head = newNode;
        cout << "\nNode added successfully!\n";
}

void sl :: insAtEnd() {
    node *newNode = new node;
    cout << "\nEnter the value: ";
    cin >> newNode -> data;
    
    if(head == nullptr) {
        head = newNode;
    } else {
        node *tmpNode = head;
        while(tmpNode -> next != nullptr) {
            tmpNode = tmpNode -> next;
        }
        tmpNode -> next = newNode;
    }
    cout << "\nNode added successfully!\n";
}

void sl :: insAtPos() {
    int pos;
    cout << "\nEnter the position: ";
    cin >>  pos;

    if(pos < 1) {
        cout << "\nInvalid Position! Try again...\n";
        return;
    }

    if(pos == 1) {
        insAtBegin();
    } else {
        node *tmpNode = head;
        for(int i = 1; i < pos - 1 && tmpNode != nullptr; i++) {
            tmpNode = tmpNode -> next;
        }

        if(tmpNode == nullptr) {
            cout << "\nOut of range! Try again...\n";
            return;
        }

        node *newNode = new node;
        cout << "\nEnter the value: ";
        cin >> newNode -> data;
        newNode -> next = tmpNode -> next;
        tmpNode -> next = newNode;
        cout << "\nNode added successfully!\n";
    }
}

void sl :: insBeforePos() {
    int pos;
    cout << "\nEnter the position: ";
    cin >>  pos;

    if(pos < 1) {
        cout << "\nInvalid Position! Try again...\n";
        return;
    }
    
    if(pos == 1) {
        insAtBegin();
    } else {
        node *tmpNode = head;
        node *tail = nullptr;
        for(int i = 1; i < pos && tmpNode != nullptr; i++) {
            tail = tmpNode;
            tmpNode = tmpNode -> next;
        }

        if(tmpNode == nullptr) {
            cout << "\nOut of range! Try again...\n";
            return;
        }

        node *newNode = new node;
        cout << "\nEnter the value: ";
        cin >> newNode -> data;
        newNode -> next = tmpNode;
        tail -> next = newNode;
        cout << "\nNode added successfully!\n";
    }
}

void sl :: insAfterPos() {
    int pos;
    cout << "\nEnter the position: ";
    cin >> pos;

    if(pos < 0) {
        cout << "\nInvalid position! Try again...\n";
        return;
    }

    node *tmpNode = head;
    if(pos == 0) {
        insAtBegin();
    } else {
        for(int i = 1; i < pos && tmpNode != nullptr; i++) {
            tmpNode = tmpNode -> next;
        }

        if(tmpNode == nullptr) {
            cout << "\nOut of range! Try again...\n";
            return;
        }

        node *newNode = new node;
        cout << "\nEnter the value: ";
        cin >> newNode -> data;
        newNode -> next = tmpNode -> next;
        tmpNode -> next = newNode;
        cout << "\nNode added successfully!\n";
    }
}

void sl :: delAtBegin() {
    if(head == nullptr) {
        cout << "\nUnable to process this request!\nLinked List is empty!\n";
        return;
    }
    node *tmpNode = head;
    head = head -> next;
    int tmpNodeData = tmpNode -> data;
    delete tmpNode;
    cout << "\nNode deleted successfully!\nDeleted node data: " << tmpNodeData << endl;
}

void sl :: delAtEnd() {
    if(head == nullptr) {
        cout << "\nUnable to process this request!\nLinked List is empty!\n";
        return;
    }
    
    if(head -> next == nullptr) {
        int tmpNodeData = head -> data;
        delete head;
        head = nullptr;

        cout << "\nNode deleted successfully!\nDeleted node data: " << tmpNodeData << endl;
        return;
    }

    node *tmpNode = head;
    while(tmpNode -> next -> next != nullptr) {
        tmpNode = tmpNode -> next;
    }

    int tmpNodeData = tmpNode -> next -> data;
    delete tmpNode -> next;
    tmpNode -> next = nullptr;
    cout << "\nNode deleted successfully!\nDeleted node data: " << tmpNodeData << endl;
}

void sl :: delAtPos() {
    if(head == nullptr) {
        cout << "\nUnable to process this request!\nLinked List is empty!\n";
        return;
    }

    int pos;
    cout << "\nEnter the position: ";
    cin >> pos;

    if(pos < 1) {
        cout << "\nInvalid Position! Try again...\n";
        return;
    }

    if(pos == 1) {
        delAtBegin();
    } else {
        node *tmpNode = head;
        for(int i = 1; i < pos - 1 && tmpNode != nullptr; i++) {
            tmpNode = tmpNode -> next;
        }

        if(tmpNode == nullptr || tmpNode -> next == nullptr) {
            cout << "\nOut of range! Try again...\n";
            return;
        }

        node *tmpNode2 = tmpNode -> next;
        int tmpNodeData = tmpNode -> next -> data;
        tmpNode -> next = tmpNode -> next -> next;
        delete tmpNode2;
        cout << "\nNode deleted successfully!\nDeleted node data: " << tmpNodeData << endl;
    }
}

void sl :: delBeforePos() {
    if(head == nullptr) {
        cout << "\nUnable to process this request!\nLinked List is empty!\n";
        return;
    }

    int pos;
    cout << "\nEnter the position: ";
    cin >> pos;

    if(pos <= 1) {
        cout << "\nInvalid position! Try again...\n";
        return;
    }

    if(pos == 2) {
        delAtBegin();
    } else {
        node *tmpNode = head;
        node *tailNode = nullptr;
        for(int i = 1; i < pos - 1 && tmpNode != nullptr; i++) {
            tailNode = tmpNode;
            tmpNode = tmpNode -> next;
        }

        if(tmpNode == nullptr) {
            cout << "\nOut of range! Try again...\n";
            return;
        }

        tailNode -> next = tmpNode -> next;
        int tmpNodeData = tmpNode -> data;
        delete tmpNode;
        cout << "\nNode deleted successfully!\nDeleted node data: " << tmpNodeData << endl;
    }
}

void sl :: delAfterPos() {
    if(head == nullptr) {
        cout << "\nUnable to process this request!\nLinked List is empty!\n";
        return;
    }

    int pos;
    cout << "\nEnter the position: ";
    cin >> pos;

    if(pos < 0) {
        cout << "\nInvalid position! Try again...\n";
        return;
    }

    if(pos == 0) {
        delAtBegin();
    } else {
        node *tmpNode = head;
        for(int i = 1; i < pos && tmpNode != nullptr; i++) {
            tmpNode = tmpNode -> next;
        }

        if(tmpNode == nullptr || tmpNode -> next == nullptr) {
            cout << "\nOut of range! Try again...\n";
            return;
        }

        node *tmpNode2 = tmpNode -> next;
        int tmpNodeData = tmpNode2 -> data;
        tmpNode -> next = tmpNode2 -> next;
        delete tmpNode2;
        cout << "\nNode deleted successfully!\nDeleted node data: " << tmpNodeData << endl;
    }
}

int main() {
    sl obj;
    int choice;
    while(1) {
        obj.printMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice) {
            case 1:
                obj.insAtBegin();
                break;
            case 2: 
                obj.insAtEnd();
                break;
            case 3: 
                obj.insAtPos();
                break;
            case 4: 
                obj.insBeforePos();
                break;
            case 5: 
                obj.insAfterPos();
                break;
            case 6: 
                obj.delAtBegin();
                break;
            case 7: 
                obj.delAtEnd();
                break;
            case 8: 
                obj.delAtPos();
                break;
            case 9: 
                obj.delBeforePos();
                break;
            case 10:
                obj.delAfterPos();
                break;
            case 0:
                obj.display();
                break;
            case -1: 
                cout << "\n\n\nExiting program.....\nTrying to clear memory.....";
                return 0;
            default: 
                cout << "\nEntered wrong choice.\n";
        }
    }
}

/*
===== Inputs to check every fns and edge cases =====

0
6
7
8
9
10
3 -1
3 2
4 0
5 -1
5 1
1 100
0
8 2
9 1
10 1
7
0
2 10
2 20
2 30
2 40
1 5
3 3 15
4 6 25
5 2 8
5 0 2
0
8 4
9 4
10 0
10 5
0
-1

*/
