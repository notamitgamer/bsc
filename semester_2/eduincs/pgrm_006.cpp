/*
 * Author: Amit Dutta <amitdutta4255@gmail.com> | Date: 06 Jul 2026
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT
 */

/* Write a program in cpp to implement linear search using private instance variable and public member methods. */

#include <iostream>
using namespace std;

class linearSearch {
    private:
        int *arr;
        int n;

    public:
        linearSearch(int size) {
            n = size;
            arr = new int[n];
        }

        void getData() {
            for (int i = 0; i < n; i++) {
                cout << "Enter element " << i + 1 << ": ";
                cin >> arr[i];
            }
        }

        void lsearch(int key) {
            int found = 0;
            for (int i = 0; i < n; i++) {
                if (arr[i] == key) {
                    cout << "Element's pos: " << (i + 1) << endl;
                    found = 1;
                    break;
                }
            }
            if (found == 0) {
                cout << "Element not found" << endl;
            }
        }

        ~linearSearch() {
            delete[] arr;
        }
};

int main() {
    int n, key;
    cout << "Enter the number: ";
    cin >> n;
    linearSearch obj(n);
    obj.getData();
    cout << "Enter element to search: ";
    cin >> key;
    obj.lsearch(key);
    return 0;
}