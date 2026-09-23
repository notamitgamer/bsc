#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

struct node {
    int data;
    node *left;
    node *right;

    node(int val) : data(val), left(nullptr), right(nullptr) {}
};

class BST {
private:
    node *root;

    node* insertRecursive(node *current, int val) {
        if (current == nullptr) return new node(val);
        if (val < current->data) current->left = insertRecursive(current->left, val);
        else if (val > current->data) current->right = insertRecursive(current->right, val);
        else cout << "Duplicate value ignored.\n";
        return current;
    }

    node* deleteByCopying(node *current, int key, bool &found) {
        if (current == nullptr) return nullptr;
        if (key < current->data) {
            current->left = deleteByCopying(current->left, key, found);
        } else if (key > current->data) {
            current->right = deleteByCopying(current->right, key, found);
        } else {
            found = true;
            if (current->left == nullptr) { node *temp = current->right; delete current; return temp; }
            if (current->right == nullptr) { node *temp = current->left; delete current; return temp; }
            node *pred = current->left;
            while (pred->right != nullptr) pred = pred->right;
            current->data = pred->data;
            current->left = deleteByCopying(current->left, pred->data, found);
        }
        return current;
    }

    node* deleteByMerging(node *current, int key, bool &found) {
        if (current == nullptr) return nullptr;
        if (key < current->data) { current->left = deleteByMerging(current->left, key, found); return current; }
        if (key > current->data) { current->right = deleteByMerging(current->right, key, found); return current; }
        found = true;
        if (current->left == nullptr) { node *temp = current->right; delete current; return temp; }
        if (current->right == nullptr) { node *temp = current->left; delete current; return temp; }
        node *successor = current->right;
        while (successor->left != nullptr) successor = successor->left;
        successor->left = current->left;
        node *temp = current->right;
        delete current;
        return temp;
    }

    int countLeaf(node *current) const {
        if (current == nullptr) return 0;
        if (current->left == nullptr && current->right == nullptr) return 1;
        return countLeaf(current->left) + countLeaf(current->right);
    }

    int countNonLeaf(node *current) const {
        if (current == nullptr || (current->left == nullptr && current->right == nullptr)) return 0;
        return 1 + countNonLeaf(current->left) + countNonLeaf(current->right);
    }

    int height(node *current) const {
        if (current == nullptr) return -1;
        return 1 + max(height(current->left), height(current->right));
    }

    void mirror(node *current) {
        if (current == nullptr) return;
        swap(current->left, current->right);
        mirror(current->left);
        mirror(current->right);
    }

    bool areEqual(node *root1, node *root2) const {
        if (!root1 && !root2) return true;
        if (!root1 || !root2 || root1->data != root2->data) return false;
        return areEqual(root1->left, root2->left) && areEqual(root1->right, root2->right);
    }

    void destroy(node *current) {
        if (current == nullptr) return;
        destroy(current->left);
        destroy(current->right);
        delete current;
    }

    void preorderRecursive(node *current) const {
        if (!current) return;
        cout << current->data << " ";
        preorderRecursive(current->left);
        preorderRecursive(current->right);
    }

    void inorderRecursive(node *current) const {
        if (!current) return;
        inorderRecursive(current->left);
        cout << current->data << " ";
        inorderRecursive(current->right);
    }

    void postorderRecursive(node *current) const {
        if (!current) return;
        postorderRecursive(current->left);
        postorderRecursive(current->right);
        cout << current->data << " ";
    }

public:
    BST() : root(nullptr) {}
    BST(const BST &other) = delete;
    BST& operator=(const BST &other) = delete;
    ~BST() { destroy(root); }

    void insertRecursive(int val) { root = insertRecursive(root, val); }

    void insertIterative(int val) {
        node *newNode = new node(val);
        if (root == nullptr) { root = newNode; return; }
        node *current = root, *parent = nullptr;
        while (current != nullptr) {
            parent = current;
            if (val < current->data) current = current->left;
            else if (val > current->data) current = current->right;
            else { cout << "Duplicate value ignored.\n"; delete newNode; return; }
        }
        if (val < parent->data) parent->left = newNode;
        else parent->right = newNode;
    }

    void deleteCopying(int key) {
        bool found = false;
        root = deleteByCopying(root, key, found);
        if (!found) cout << "Element not found in BST.\n";
    }

    void deleteMerging(int key) {
        bool found = false;
        root = deleteByMerging(root, key, found);
        if (!found) cout << "Element not found in BST.\n";
    }

    bool search(int key) const {
        node *current = root;
        while (current != nullptr) {
            if (current->data == key) return true;
            current = (key < current->data) ? current->left : current->right;
        }
        return false;
    }

    void preorderRecursive() const { preorderRecursive(root); cout << "\n"; }
    void inorderRecursive() const { inorderRecursive(root); cout << "\n"; }
    void postorderRecursive() const { postorderRecursive(root); cout << "\n"; }

    void preorderIterative() const {
        if (!root) return;
        stack<node*> s;
        s.push(root);
        while (!s.empty()) {
            node *curr = s.top(); s.pop();
            cout << curr->data << " ";
            if (curr->right) s.push(curr->right);
            if (curr->left) s.push(curr->left);
        }
        cout << "\n";
    }

    void inorderIterative() const {
        stack<node*> s;
        node *curr = root;
        while (curr != nullptr || !s.empty()) {
            while (curr != nullptr) { s.push(curr); curr = curr->left; }
            curr = s.top(); s.pop();
            cout << curr->data << " ";
            curr = curr->right;
        }
        cout << "\n";
    }

    void postorderIterative() const {
        if (!root) return;
        stack<node*> s1, s2;
        s1.push(root);
        while (!s1.empty()) {
            node *curr = s1.top(); s1.pop();
            s2.push(curr);
            if (curr->left) s1.push(curr->left);
            if (curr->right) s1.push(curr->right);
        }
        while (!s2.empty()) { cout << s2.top()->data << " "; s2.pop(); }
        cout << "\n";
    }

    void levelOrder() const {
        if (!root) return;
        queue<node*> q;
        q.push(root);
        while (!q.empty()) {
            node *curr = q.front(); q.pop();
            cout << curr->data << " ";
            if (curr->left) q.push(curr->left);
            if (curr->right) q.push(curr->right);
        }
        cout << "\n";
    }

    void countNodes() const {
        cout << "Leaf Nodes: " << countLeaf(root) << "\n";
        cout << "Non-Leaf Nodes: " << countNonLeaf(root) << "\n";
    }

    void displayHeight() const { cout << "Height of Tree: " << height(root) << "\n"; }
    void createMirror() { mirror(root); }
    bool isEqual(const BST &other) const { return areEqual(root, other.root); }
};

int main() {
    BST tree;
    int choice, value;

    while (true) {
        cout << "1.InsertRec 2.InsertIter 3.DeleteCopy 4.DeleteMerge 5.Search\n";
        cout << "6.PreorderRec 7.InorderRec 8.PostorderRec 9.PreorderIter 10.InorderIter\n";
        cout << "11.PostorderIter 12.LevelOrder 13.CountNodes 14.Height 15.Mirror 16.CheckEqual 0.Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: cout << "Enter value: "; cin >> value; tree.insertRecursive(value); break;
            case 2: cout << "Enter value: "; cin >> value; tree.insertIterative(value); break;
            case 3: cout << "Enter value to delete: "; cin >> value; tree.deleteCopying(value); break;
            case 4: cout << "Enter value to delete: "; cin >> value; tree.deleteMerging(value); break;
            case 5:
                cout << "Enter value to search: "; cin >> value;
                cout << (tree.search(value) ? "Found\n" : "Not found\n");
                break;
            case 6: tree.preorderRecursive(); break;
            case 7: tree.inorderRecursive(); break;
            case 8: tree.postorderRecursive(); break;
            case 9: tree.preorderIterative(); break;
            case 10: tree.inorderIterative(); break;
            case 11: tree.postorderIterative(); break;
            case 12: tree.levelOrder(); break;
            case 13: tree.countNodes(); break;
            case 14: tree.displayHeight(); break;
            case 15: tree.createMirror(); break;
            case 16: {
                BST tree2;
                int n;
                cout << "Enter number of nodes for second BST: "; cin >> n;
                for (int i = 0; i < n; i++) { cin >> value; tree2.insertIterative(value); }
                cout << (tree.isEqual(tree2) ? "Both BSTs are equal.\n" : "BSTs are not equal.\n");
                break;
            }
            case 0: return 0;
            default: cout << "Wrong choice.\n";
        }
    }
}