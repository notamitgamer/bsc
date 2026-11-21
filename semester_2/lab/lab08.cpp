/* Q3: Write a program to search an element from a list. Give user the option to perform Binary search. */

#include<iostream>
using namespace std;

template <class T>
class searchList {
private: 
    T *arr;
    int n;
public: 
    searchList(int size) {
        n = size;
        arr = new T[n];
    }

    void makeList() {
        cout << "Enter "  << n << " elements: ";
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    void insertionSort() {
        for(int i = 1; i < n; i++) {
            T key = arr[i];
            int j = i - 1;
            while(j >= 0 && arr[j] > key) {
                arr[j+1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }

    void linearSearch(T key) {
        for(int i = 0; i < n; i++) {
            if(arr[i] == key) {
                cout << "\nKey " << key << " found at " << i << " position.";
                return;
            }
        }
        cout << "\nKey not found.";
    }

    void binarySearch(T key) {
        insertionSort();
        cout << "\nArray sorted automatically.";
        display();

        int start = 0;
        int end = n - 1;

        while(start <= end) {
            int mid = (start + end) / 2;
            if(arr[mid] == key) {
                cout << "\nKey " << key << " found at " << mid << " position.";
                return;
            } else if(arr[mid] < key) {
                start = mid + 1;
            } else if(arr[mid] > key) {
                end = mid - 1;
            }
        }
        cout << "\nKey not found.";
    }

    void display() {
        cout << "\nCurrent list:";
        for(int i = 0; i < n; i++) {
            cout << "  " << arr[i];
        }
    }

    ~searchList() {
        delete[] arr;
    }
};

int main() {
    int size;
    cout << "How many elements do you want to add: ";
    cin >> size;

    searchList<int> obj(size);
    obj.makeList();

    int key;
    cout << "\nEnter the key you want to find: ";
    cin >> key;
    
    while(true) {
        int choice;
        cout << "\n\n1. Binary Search\t2. Linear Search\t3. Display\t0. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: 
                cout << "\nBinary Search result: ";
                obj.binarySearch(key);
                break;
            case 2: 
                cout << "\nLinear Search result: ";
                obj.linearSearch(key);
                break;
            case 3: 
                obj.display();
                break;
            case 0: 
                return 0;
            default: 
                cout << "\nWrong choice.";
        }
    }
}