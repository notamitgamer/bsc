#include <iostream>
#include <cmath>
using namespace std;

struct node {
    int coeff, exp;
    node *next = nullptr;
};

class Polynomial {
private:
    node *head;

    void clear() {
        node *temp;
        while (head != nullptr) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }

    void copyFrom(const Polynomial &other) {
        if (other.head == nullptr) {
            head = nullptr;
            return;
        }
        head = new node{other.head->coeff, other.head->exp, nullptr};
        node *current = head;
        node *otherCurrent = other.head->next;
        while (otherCurrent != nullptr) {
            current->next = new node{otherCurrent->coeff, otherCurrent->exp, nullptr};
            current = current->next;
            otherCurrent = otherCurrent->next;
        }
    }

public:
    Polynomial() { head = nullptr; }

    Polynomial(const Polynomial &other) {
        copyFrom(other);
    }

    Polynomial& operator=(const Polynomial &other) {
        if (this != &other) {
            clear();
            copyFrom(other);
        }
        return *this;
    }

    ~Polynomial() {
        clear();
    }

    void insertTerm(int coeff, int exp) {
        if (coeff == 0) return;
        node *newNode = new node{coeff, exp, nullptr};

        if (head == nullptr || exp > head->exp) {
            newNode->next = head;
            head = newNode;
            return;
        }
        if (head->exp == exp) {
            head->coeff += coeff;
            delete newNode;
            if (head->coeff == 0) {
                node* temp = head;
                head = head->next;
                delete temp;
            }
            return;
        }
        node *temp = head;
        while (temp->next != nullptr && temp->next->exp > exp) temp = temp->next;
        if (temp->next != nullptr && temp->next->exp == exp) {
            temp->next->coeff += coeff;
            delete newNode;
            if (temp->next->coeff == 0) {
                node* toDelete = temp->next;
                temp->next = temp->next->next;
                delete toDelete;
            }
        } else {
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    void inputPolynomial() {
        int n, coeff, exp;
        cout << "Enter number of terms: ";
        cin >> n;
        for (int i = 0; i < n; i++) {
            cout << "Coefficient: "; cin >> coeff;
            cout << "Exponent: "; cin >> exp;
            insertTerm(coeff, exp);
        }
    }

    Polynomial add(const Polynomial &other) const {
        Polynomial result;
        node *p = head, *q = other.head;
        while (p != nullptr && q != nullptr) {
            if (p->exp == q->exp) {
                int sum = p->coeff + q->coeff;
                if (sum != 0) result.insertTerm(sum, p->exp);
                p = p->next; q = q->next;
            } else if (p->exp > q->exp) {
                result.insertTerm(p->coeff, p->exp);
                p = p->next;
            } else {
                result.insertTerm(q->coeff, q->exp);
                q = q->next;
            }
        }
        while (p != nullptr) { result.insertTerm(p->coeff, p->exp); p = p->next; }
        while (q != nullptr) { result.insertTerm(q->coeff, q->exp); q = q->next; }
        return result;
    }

    void display() const {
        if (head == nullptr) { cout << "0\n"; return; }
        node *temp = head;
        bool first = true;
        while (temp != nullptr) {
            if (!first && temp->coeff > 0) cout << " + ";
            else if (!first && temp->coeff < 0) cout << " - ";
            else if (temp->coeff < 0) cout << "-";
            int c = abs(temp->coeff);
            if (temp->exp == 0) cout << c;
            else if (temp->exp == 1) cout << (c == 1 ? "x" : to_string(c) + "x");
            else cout << (c == 1 ? "x^" + to_string(temp->exp) : to_string(c) + "x^" + to_string(temp->exp));
            first = false;
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Polynomial p1, p2, result;
    cout << "--- First Polynomial ---\n";
    p1.inputPolynomial();
    cout << "--- Second Polynomial ---\n";
    p2.inputPolynomial();

    cout << "First: "; p1.display();
    cout << "Second: "; p2.display();

    result = p1.add(p2);
    cout << "Sum: "; result.display();
    return 0;
}