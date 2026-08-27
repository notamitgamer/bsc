/* WAP to find max from an array using template class and no-inline template function */

#include <iostream>
using namespace std;

template <class T>
class Max {
private:
    T *a;
    int s;

public:
    Max() {
        cout << "Array size: ";
        cin >> s;
        a = new T[s];
    }

    void getData();
    T find_max();

    ~Max() {
        delete[] a;
        cout << "obj deleted.";
    }
};

template <class T>
void Max<T>::getData() {
    cout << "Enter elements: ";
    for (int i = 0; i < s; ++i) {
        cin >> a[i];
    }
}

template <class T>
T Max<T>::find_max() {
    T m = a[0];
    for (int i = 1; i < s; i++) {
        if (m < a[i]) {
            m = a[i];
        }
    }
    return m;
}

int main() {
    Max<int> obj;
    obj.getData();
    cout << "Max element: " << obj.find_max() << endl;

    Max<float> obj2;
    obj2.getData();
    cout << "Max element: " << obj2.find_max() << endl;

    return 0;
}
