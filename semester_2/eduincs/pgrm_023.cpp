/* WAP to implement linear search template class and template function */

#include<iostream>
using namespace std;

template <class T>
class LinearSearch {
private:
    T *arr;
    int size;
    T key;

public:
    LinearSearch(int n) {
        size = n;
        arr = new T[size];

        cout << "Array Size: " << size << endl;

        cout << "Enter elements: ";
        for(int i = 0; i < size; i++) {
            cin >> arr[i];
        }

        cout << "Enter key: ";
        cin >> key;
    }
    
    int search() {
        for(int i = 0; i < size; i++) {
            if(arr[i] == key)
                return i;
        }
        return -1;
    }
};

int main() {

    LinearSearch<int> obj(5);
    int index = obj.search();
    if(index != -1)
        cout << "Key found at: " << index << endl;
    else
        cout << "Key not found!" << endl;

    LinearSearch<double> obj2(5);
    index = obj2.search();
    if(index != -1)
        cout << "Key found at: " << index << endl;
    else
        cout << "Key not found!" << endl;

    return 0;
}
