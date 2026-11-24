/* Write a program to implement Lower Triangular Matrix using a 1D array and add two Lower Triangular matrices. */

#include<iostream>
using namespace std;

template <class T>
class lowerTriangular {
private:
    T *arr;
    int n;
    int size;

public:
    lowerTriangular(int dim) {
        n = dim;
        size = (n * (n + 1)) / 2;
        arr = new T[size];
        for(int i = 0; i < size; i++) {
            arr[i] = 0;
        }
    }

    void readMatrix() {
        cout << "\nEnter elements (" << n << "x" << n << "):\n";
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                T val;
                cin >> val;
                if(i >= j) {
                    int idx = (i * (i + 1)) / 2 + j;
                    arr[idx] = val;
                }
            }
        }
    }

    void addMatrix(lowerTriangular<T> &m1, lowerTriangular<T> &m2) {
        for(int i = 0; i < size; i++) {
            arr[i] = m1.arr[i] + m2.arr[i];
        }
    }

    void display() {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(i >= j) {
                    int idx = (i * (i + 1)) / 2 + j;
                    cout << arr[idx] << "\t";
                } else {
                    cout << "0\t";
                }
            }
            cout << "\n";
        }
    }

    ~lowerTriangular() {
        delete[] arr;
    }
};

int main() {
    int n;
    cout << "Enter dimension of square matrix: ";
    cin >> n;

    lowerTriangular<int> m1(n), m2(n), m3(n);

    cout << "\nMatrix 1:";
    m1.readMatrix();

    cout << "\nMatrix 2:";
    m2.readMatrix();

    m3.addMatrix(m1, m2);

    cout << "\nAddition Result:\n";
    m3.display();

    return 0;
}
