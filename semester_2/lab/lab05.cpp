/* Write a program in C++ to implement Quick Sort using class, constructor, member variables, member functions, and destructor. */

#include<iostream>
using namespace std;

template <class T>
class QuickSort {
private:
    T *arr;
    int n;

    void swapElements(T &a, T &b) {
        T temp = a;
        a = b;
        b = temp;
    }

    int partition(int low, int high) {
        T pivot = arr[high];
        int i = low - 1;

        for(int j = low; j < high; j++) {
            if(arr[j] <= pivot) {
                i++;
                swapElements(arr[i], arr[j]);
            }
        }
        swapElements(arr[i + 1], arr[high]);
        return i + 1;
    }

    void sortHelper(int low, int high) {
        if(low < high) {
            int pi = partition(low, high);
            sortHelper(low, pi - 1);
            sortHelper(pi + 1, high);
        }
    }

public:
    QuickSort(int size) {
        n = size;
        arr = new T[n];
        cout << "Array created successfully with capacity: " << n << "\n";
    }

    void inputElements() {
        cout << "Enter " << n << " elements: ";
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    void sort() {
        sortHelper(0, n - 1);
        cout << "Array sorted successfully.";
    }

    void display() {
        for(int i = 0; i < n; i++) {
            cout << arr[i] << "  ";
        }
    }

    ~QuickSort() {
        delete[] arr;
        cout << "\nMemory cleared.";
    }
};

int main() {
    int size;
    cout << "Enter the size: ";
    cin >> size;

    QuickSort<int> obj(size);
    obj.inputElements();

    cout << "\nOriginal array: ";
    obj.display();

    cout << "\n";
    obj.sort();

    cout << "\nSorted array: ";
    obj.display();

    return 0;
}