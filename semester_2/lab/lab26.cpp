/* algo_112: Write a program to perform Stack operations (Push and Pop) using a Linked List implementation. */

#include<iostream>
using namespace std;

template <class T>
struct node {
    T data;
    node<T> *next = nullptr;
};

template <class T>
class linkedStack {
private:
    node<T> *top = nullptr;

public:
    linkedStack() {}

    void push(T val) {
        node<T> *newNode = new node<T>;
        newNode->data = val;
        newNode->next = top;
        top = newNode;
        cout << "\nPushed: " << val;
    }

    void pop() {
        if(top == nullptr) {
            cout << "\nStack Underflow.";
            return;
        }
        node<T> *temp = top;
        cout << "\nPopped: " << temp->data;
        top = top->next;
        delete temp;
    }

    void display() {
        cout << "\nStack (top to bottom):";
        if(top == nullptr) {
            cout << " Empty";
            return;
        }
        node<T> *temp = top;
        while(temp != nullptr) {
            cout << "  " << temp->data;
            temp = temp->next;
        }
    }

    ~linkedStack() {
        while(top != nullptr) {
            node<T> *temp = top;
            top = top->next;
            delete temp;
        }
    }
};

int main() {
    linkedStack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.display();

    st.pop();
    st.display();
    cout << "\n";

    return 0;
}
