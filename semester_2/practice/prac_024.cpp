/* algo_094: Write a program to implement a Diagonal Matrix using a one-dimensional array and add two diagonal matrices. */

#include<iostream>
using namespace std;

template <class T>
class diagonalMatrix {
private:
    T *arr;
    int n;

public:
    diagonalMatrix(int dim) {
        n = dim;
        arr = new T[n];
        for(int i = 0; i < n; i++) {
            arr[i] = 0;
        }
    }

    void readMatrix() {
        cout << "\nEnter elements (" << n << "x" << n << "):\n";
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                T val;
                cin >> val;
                if(i == j) {
                    arr[i] = val;
                }
            }
        }
    }

    void addMatrix(diagonalMatrix<T> &m1, diagonalMatrix<T> &m2) {
        for(int i = 0; i < n; i++) {
            arr[i] = m1.arr[i] + m2.arr[i];
        }
    }

    void display() {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(i == j) {
                    cout << arr[i] << "\t";
                } else {
                    cout << "0\t";
                }
            }
            cout << "\n";
        }
    }

    ~diagonalMatrix() {
        delete[] arr;
    }
};

int main() {
    int n;
    cout << "Enter dimension of square matrix: ";
    cin >> n;

    diagonalMatrix<int> m1(n), m2(n), m3(n);

    cout << "\nMatrix 1:";
    m1.readMatrix();

    cout << "\nMatrix 2:";
    m2.readMatrix();

    m3.addMatrix(m1, m2);

    cout << "\nAddition Result:\n";
    m3.display();

    return 0;
}
