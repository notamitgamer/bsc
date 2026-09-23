/* WAP to sort a list of elements. Give user the option to perform sorting using Insertion sort, Bubble sort or Selection sort. */

#include <iostream>
#include <iomanip>
using namespace std;

typedef struct MenuItem {
    int id;
    const char* name;
} menu;

class SortList {
private:
    int *arr;
    int *tempArr;
    int n;

    void swapElements(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }

    void reset() {
        for (int i = 0; i < n; i++) tempArr[i] = arr[i];
    }

public:
    SortList(int size) {
        n = size;
        arr = new int[n];
        tempArr = new int[n];
    }

    void inputElements() {
        cout << "\nEnter " << n << " elements: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            tempArr[i] = arr[i];
        }
    }

    void insertionSort() {
        reset();
        for (int i = 1; i < n; i++) {
            int key = tempArr[i];
            int j = i - 1;
            while (j >= 0 && tempArr[j] > key) {
                tempArr[j + 1] = tempArr[j];
                j--;
            }
            tempArr[j + 1] = key;
        }
        display();
    }

    void bubbleSort() {
        reset();
        for (int i = 0; i < n - 1; i++) {
            bool swapped = false;
            for (int j = 0; j < n - i - 1; j++) {
                if (tempArr[j] > tempArr[j + 1]) {
                    swapElements(tempArr[j], tempArr[j + 1]);
                    swapped = true;
                }
            }
            if (!swapped) break;
        }
        display();
    }

    void selectionSort() {
        reset();
        for (int i = 0; i < n - 1; i++) {
            int minIdx = i;
            for (int j = i + 1; j < n; j++) {
                if (tempArr[j] < tempArr[minIdx]) minIdx = j;
            }
            if (minIdx != i) swapElements(tempArr[i], tempArr[minIdx]);
        }
        display();
    }

    void display() {
        cout << "Sorted Array: ";
        for (int i = 0; i < n; i++) cout << tempArr[i] << " ";
        cout << endl;
    }

    void displayOriginal() {
        cout << "\nOriginal List: ";
        for (int i = 0; i < n; i++) cout << arr[i] << " ";
        cout << endl;
    }

    void printMenu() {
        menu items[] = {
            {1, "Insertion Sort"}, {2, "Bubble Sort"},
            {3, "Selection Sort"}, {0, "Display Original"},
            {-1, "Exit"}
        };
        for (int i = 0; i < 5; i++) {
            cout << items[i].id << ". " << items[i].name << "\n";
        }
    }

    ~SortList() {
        delete[] arr;
        delete[] tempArr;
    }
};

int main() {
    int n, choice;
    cout << "Enter number of elements: ";
    cin >> n;
    if (n <= 0) {
        cout << "Invalid size!\n";
        return 0;
    }

    SortList sorter(n);
    sorter.inputElements();

    while (true) {
        sorter.printMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: sorter.insertionSort(); break;
            case 2: sorter.bubbleSort(); break;
            case 3: sorter.selectionSort(); break;
            case 0: sorter.displayOriginal(); break;
            case -1:
                cout << "\nExiting program.....\nMemory cleared!\nExit 0\n";
                return 0;
            default:
                cout << "\nEntered wrong choice. Try again.\n";
        }
    }
}