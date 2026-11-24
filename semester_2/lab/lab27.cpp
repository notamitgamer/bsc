/* algo_113: Write a program to check whether two Binary Search Trees are equal (identical) or not. */

#include<iostream>
using namespace std;

template <class T>
struct node {
    T data;
    node<T> *left = nullptr;
    node<T> *right = nullptr;
};

template <class T>
class bst {
public:
    node<T> *root = nullptr;

    bst() {}

    node<T>* insert(node<T> *curr, T key) {
        if(curr == nullptr) {
            node<T> *newNode = new node<T>;
            newNode->data = key;
            return newNode;
        }
        if(key < curr->data) {
            curr->left = insert(curr->left, key);
        } else if(key > curr->data) {
            curr->right = insert(curr->right, key);
        }
        return curr;
    }

    bool isIdentical(node<T> *r1, node<T> *r2) {
        if(r1 == nullptr && r2 == nullptr) {
            return true;
        }
        if(r1 == nullptr || r2 == nullptr) {
            return false;
        }
        return (r1->data == r2->data) &&
               isIdentical(r1->left, r2->left) &&
               isIdentical(r1->right, r2->right);
    }

    void destroyTree(node<T> *curr) {
        if(curr == nullptr) return;
        destroyTree(curr->left);
        destroyTree(curr->right);
        delete curr;
    }

    ~bst() {
        destroyTree(root);
        root = nullptr;
    }
};

int main() {
    bst<int> t1, t2;

    t1.root = t1.insert(t1.root, 50);
    t1.root = t1.insert(t1.root, 30);
    t1.root = t1.insert(t1.root, 70);

    t2.root = t2.insert(t2.root, 50);
    t2.root = t2.insert(t2.root, 30);
    t2.root = t2.insert(t2.root, 70);

    if(t1.isIdentical(t1.root, t2.root)) {
        cout << "Both BSTs are identical.\n";
    } else {
        cout << "BSTs are NOT identical.\n";
    }

    return 0;
}
