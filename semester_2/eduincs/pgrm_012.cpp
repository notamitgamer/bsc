/* Linear search in cpp */

#include<iostream>
using namespace std;
class LinearSearch {
private: 
    int arr[10];
    int n;
public: 
    LinearSearch() {n = 0;}
    
    void getData() {
        cout << "Enter number of elements: ";
        cin >> n;
        cout << "Enter " << n << " elements: ";
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    void Lsearch(int &key, int &position) {
        position = -1;
        for(int i = 0; i < n; i++) {
            if(arr[i] == key) {
                position = i + 1;
            }
        }
    }
};

int main() {
    LinearSearch obj;
    int key, pos;
    obj.getData();
    cout << "Enter the element to search: ";
    cin >> key;
    obj.Lsearch(key, pos);
    if(pos != -1) {
        cout << "Element found at position " << pos << endl;
    }
    else {
        cout << "Element not found." << endl;
    }
    return 0;
}
