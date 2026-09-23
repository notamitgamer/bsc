/* Program to search an element from a list using Linear Search or Binary Search */

#include <iostream>
#include <iomanip>

using namespace std;

typedef struct MenuItem {
    int id;
    const char* name;
} menu;

class SearchList {
private:
    int *arr;
    int n;

    void insertionSort() {
        for (int i = 1; i < n; i++) {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }

public:
    SearchList(int size) {
        n = size;
        arr = new int[n];
    }

    void inputElements() {
        cout << "\nEnter " << n << " elements: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    int linearSearch(int key) {
        for (int i = 0; i < n; i++) {
            if (arr[i] == key) {
                return i;
            }
        }
        return -1;
    }

    int binarySearch(int key) {
        // Binary search requires the collection to be sorted
        insertionSort();
        cout << "\n(Array automatically sorted for Binary Search)";
        display();

        int left = 0;
        int right = n - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == key) {
                return mid;
            } else if (arr[mid] < key) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return -1;
    }

    void display() {
        cout << "\nCurrent List: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void printMenu() {
        menu items[] = {
            {1, "Linear Search"}, {2, "Binary Search"},
            {0, "Display List"},  {-1, "Exit"}
        };

        cout << "\n## Choose Search Method --\n--------------------------------------------\n";
        for (int i = 0; i < 4; i++) {
            cout << items[i].id << ". " << left << setw(20) << items[i].name;
            if (i % 2 == 1) cout << "\n";
        }
    }

    ~SearchList() {
        delete[] arr;
    }
};

int main() {
    int n, choice, key;
    cout << "Enter the size of the list: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid list size!\n";
        return 0;
    }

    SearchList list(n);
    list.inputElements();

    while (true) {
        list.printMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "\nEnter element to search: ";
                cin >> key;
                int index = list.linearSearch(key);
                if (index != -1)
                    cout << "\nElement " << key << " found at index " << index << ".\n";
                else
                    cout << "\nElement " << key << " not found in the list.\n";
                break;
            }
            case 2: {
                cout << "\nEnter element to search: ";
                cin >> key;
                int index = list.binarySearch(key);
                if (index != -1)
                    cout << "\nElement " << key << " found at index " << index << " in sorted array.\n";
                else
                    cout << "\nElement " << key << " not found in the list.\n";
                break;
            }
            case 0:
                list.display();
                break;
            case -1:
                cout << "\nExiting program.....\nMemory cleared!\nExit 0\n";
                return 0;
            default:
                cout << "\nEntered wrong choice. Try again.\n";
        }
    }
}