/* Write a program to sort a list using Bubble, Selection, Insertion, Quick, and Heap Sort (with Templates). */

#include<iostream>
using namespace std;

template <class T>
void swapVal(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template <class T>
void bubbleSort(T arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swapVal(arr[j], arr[j + 1]);
            }
        }
    }
}

template <class T>
void selectionSort(T arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        swapVal(arr[i], arr[minIdx]);
    }
}

template <class T>
void insertionSort(T arr[], int n) {
    for(int i = 1; i < n; i++) {
        T key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

template <class T>
int partition(T arr[], int low, int high) {
    T pivot = arr[high];
    int i = low - 1;
    for(int j = low; j < high; j++) {
        if(arr[j] < pivot) {
            i++;
            swapVal(arr[i], arr[j]);
        }
    }
    swapVal(arr[i + 1], arr[high]);
    return i + 1;
}

template <class T>
void quickSort(T arr[], int low, int high) {
    if(low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

template <class T>
void heapify(T arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if(left < n && arr[left] > arr[largest]) largest = left;
    if(right < n && arr[right] > arr[largest]) largest = right;

    if(largest != i) {
        swapVal(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

template <class T>
void heapSort(T arr[], int n) {
    for(int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
    for(int i = n - 1; i > 0; i--) {
        swapVal(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

template <class T>
void display(T arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
    cout << "\n";
}

int main() {
    int n = 5;
    int arr[] = {34, 12, 65, 9, 23};

    cout << "Original: ";
    display(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "Sorted:   ";
    display(arr, n);

    return 0;
}
