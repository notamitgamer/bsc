/* Overload `++` when used as postfix */

#include<iostream>
using namespace std;
class count {
private: 
    int val1;
    int val2;
public: 
    count() {
        val1 = 5;
        val2 = 6;
    }

    void operator ++(int) {
        val1++;
        val2++;
    }

    void display() {
        cout << "value1: " << val1 << "  value2: " << val2 << endl;
    }
};

int main() {
    count obj;
    cout << "Before overloading ++: " << endl;
    obj.display();
    obj++;
    cout << "After overloading ++: " << endl;
    obj.display();
    return 0;
}
