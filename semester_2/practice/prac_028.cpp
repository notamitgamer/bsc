/* algo_110: Write a program to scan two polynomials using an Array and add them. */

#include<iostream>
using namespace std;

template <class T>
class polyArray {
private:
    T coeff[50];
    int deg;

public:
    polyArray() {
        deg = 0;
        for(int i = 0; i < 50; i++) {
            coeff[i] = 0;
        }
    }

    void readPoly() {
        cout << "Enter highest degree of polynomial: ";
        cin >> deg;
        for(int i = deg; i >= 0; i--) {
            cout << "Enter coefficient for x^" << i << ": ";
            cin >> coeff[i];
        }
    }

    void addPoly(polyArray<T> &p1, polyArray<T> &p2) {
        deg = (p1.deg > p2.deg) ? p1.deg : p2.deg;
        for(int i = 0; i <= deg; i++) {
            coeff[i] = p1.coeff[i] + p2.coeff[i];
        }
    }

    void display() {
        bool first = true;
        for(int i = deg; i >= 0; i--) {
            if(coeff[i] != 0) {
                if(!first) cout << " + ";
                cout << "(" << coeff[i] << ")x^" << i;
                first = false;
            }
        }
        if(first) cout << "0";
        cout << "\n";
    }
};

int main() {
    polyArray<int> p1, p2, p3;

    cout << "Polynomial 1:\n";
    p1.readPoly();

    cout << "\nPolynomial 2:\n";
    p2.readPoly();

    p3.addPoly(p1, p2);

    cout << "\nResultant Polynomial: ";
    p3.display();

    return 0;
}
