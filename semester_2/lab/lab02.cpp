/* Write a program in C++ to implement Binary Search using class, constructor, member variables, member functions, and destructor. */

#include<iostream>
using namespace std;

template <class T>
class binarySearch {
private: 
    T *arr;
    int n;
public: 
    binarySearch(int size) {
        n = size;
        arr = new T[n];
        cout << "Enter " << n << " elements: ";
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    void searchElement(T key) {
        int high = n - 1;
        int low = 0;
        bool found = false;

        while(low <= high) {
          int mid = (high + low) / 2;
          if(arr[mid] == key) {
            found = true;
            cout << "Key found at index " << mid;
            break;
          }
          
          else if(arr[mid] < key) {
            low = mid + 1;
          }

          else if(arr[mid] > key) {
            high = mid - 1;
          }          
        }

        if (!found) {
          cout << "Key not found.";
        }
    }

    ~binarySearch() {
      delete[] arr;
      cout << "\nMemory cleared.";
    }
};

int main() {
  int size, key;
  cout << "Enter the size: ";
  cin >> size;

  binarySearch<int> bs(size);

  cout << "Enter the key: ";
  cin >> key;

  bs.searchElement(key);
  return 0;
}
