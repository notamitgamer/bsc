/* call by value, call by address, call by reference */

#include<iostream>
using namespace std;
class Swap {
private: 
    int a, b;
public: 
    void getData() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    // call by value
    void swapValue(int x, int y) {
        int temp = x;
        x = y;
        y = temp;
        cout << "Inside swapValue(): " << x << " " << y << endl;
    }

    // call by address
    void swapAddress(int *x, int *y) {
        int temp = *x;
        *x = *y;
        *y = temp;
        cout << "Inside swapAddress(): " << *x << " " << *y << endl;
    }

    // call by reference
    void swapReference(int &x, int &y) {
        int temp = x;
        x = y;
        y = temp;
        cout << "Inside swapValue(): " << x << " " << y << endl;
    }

    void display() {
        cout << "Current values: " << a << " " << b << endl;
    }

    void test() {
        cout << "\nOriginal values: " << endl;
        display();

        cout << "\n== Call by Value ==" << endl;
        swapValue(a, b);
        cout << "After swapValue(): " << endl;
        display();

        cout << "\n== Call by Address ==" << endl;
        swapAddress(&a, &b);
        cout << "After swapAddress(): " << endl;
        display();

        cout << "\n== Call by Reference ==" << endl;
        swapReference(a, b);
        cout << "After swapReference(): " << endl;
        display();
    }
    ~Swap() {}
};

int main() {
    Swap obj;
    obj.getData();
    obj.test();
    return 0;
}
