/* WAP to implement a singly linked list with insertion at the beginning and end */

#include <iostream>
using namespace std;

class Node {
public:
    int info;
    Node *next;

    Node(int val) {
        info = val;
        next = NULL;
    }
};

class SinglyList {
private:
    Node *head;

public:
    SinglyList() {
        head = NULL;
    }

    void insertBegin(int val) {
        Node *ptr = new Node(val);
        ptr->next = head;
        head = ptr;
        cout << "Inserted " << val << " at the beggining";
    }

    void insertEnd(int val) {
        Node *ptr = new Node(val);
        if (head == NULL) {
            head = ptr;
        } else {
            Node *t = head;
            while (t->next != NULL) {
                t = t->next;
            }
            t->next = ptr;
        }
        cout << endl << "Inserted " << val << " at the end";
    }

    void display() {
      Node *t = head; cout << endl << "The list: ";
      while(t != NULL) {
        cout << t -> info << " ";
        t = t -> next;
      }
    }
};

int main() {
  SinglyList obj;
  obj.insertBegin(10);
  obj.insertBegin(20);
  obj.display();
  obj.insertEnd(40);
  obj.insertEnd(50);
  obj.display();
  return 0;
}
