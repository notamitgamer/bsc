/* Write a program to create a BST: Insertion, Deletion, Recursive In-order, Height, Count Leaf & Non-Leaf nodes. */

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

    node<T>* deleteNode(node<T> *curr, T key) {
        if(curr == nullptr) return nullptr;

        if(key < curr->data) {
            curr->left = deleteNode(curr->left, key);
        } else if(key > curr->data) {
            curr->right = deleteNode(curr->right, key);
        } else {
            if(curr->left == nullptr) {
                node<T> *temp = curr->right;
                delete curr;
                return temp;
            } else if(curr->right == nullptr) {
                node<T> *temp = curr->left;
                delete curr;
                return temp;
            }

            node<T> *succ = curr->right;
            while(succ->left != nullptr) {
                succ = succ->left;
            }
            curr->data = succ->data;
            curr->right = deleteNode(curr->right, succ->data);
        }
        return curr;
    }

    void inorder(node<T> *curr) {
        if(curr == nullptr) return;
        inorder(curr->left);
        cout << curr->data << "  ";
        inorder(curr->right);
    }

    int height(node<T> *curr) {
        if(curr == nullptr) return 0;
        int lh = height(curr->left);
        int rh = height(curr->right);
        return 1 + (lh > rh ? lh : rh);
    }

    int countLeaf(node<T> *curr) {
        if(curr == nullptr) return 0;
        if(curr->left == nullptr && curr->right == nullptr) return 1;
        return countLeaf(curr->left) + countLeaf(curr->right);
    }

    int countNonLeaf(node<T> *curr) {
        if(curr == nullptr || (curr->left == nullptr && curr->right == nullptr)) {
            return 0;
        }
        return 1 + countNonLeaf(curr->left) + countNonLeaf(curr->right);
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
    bst<int> tree;
    tree.root = tree.insert(tree.root, 50);
    tree.root = tree.insert(tree.root, 30);
    tree.root = tree.insert(tree.root, 70);
    tree.root = tree.insert(tree.root, 20);
    tree.root = tree.insert(tree.root, 40);

    cout << "In-order Traversal: ";
    tree.inorder(tree.root);

    cout << "\nHeight of BST: " << tree.height(tree.root);
    cout << "\nLeaf nodes: " << tree.countLeaf(tree.root);
    cout << "\nNon-leaf nodes: " << tree.countNonLeaf(tree.root);

    tree.root = tree.deleteNode(tree.root, 30);
    cout << "\nIn-order after deleting 30: ";
    tree.inorder(tree.root);
    cout << "\n";

    return 0;
}
