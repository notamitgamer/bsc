/* Write a program in C++ to implement Linear Search using class, constructor, member variables, member functions, destructor */

#include<iostream>
using namespace std;

template <class T>
class linearSearch {
private:
  T *arr;
  int n;

public:
  linearSearch(int size) {
    n = size;
    arr = new T[n];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
      cin >> arr[i];
    }
  }

  void searchElement(T key) {
    bool keyFound = false;
    for(int i = 0; i < n; i++) {
      if(arr[i] == key) {
        keyFound = true;
        cout << "\nKey found at Index " << i;
      }
    }

    if(!keyFound) {
      cout << "\nKey not found.";
    }
  }
  
  ~linearSearch() {
    delete[] arr;
    cout << "\nMemory released.";
  }
};

int main() {
  int size;
  int key;

  cout << "Please enter the size: ";
  cin >> size;

  linearSearch<int> ls(size);

  cout << "\nPlease enter the key: ";
  cin >> key;

  ls.searchElement(key);
  return 0;
}
