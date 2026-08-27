/* overloading of extraction operator and insertion operator */

#include <iostream>
using namespace std;

class Height {
private:
    int feet, inches;

public:
    Height(int f = 0, int i = 0) {
        feet = f; inches = i;
    }

    friend ostream /* output stream */  &operator << (ostream &output, const Height &D) {
        output << D.feet << " ft " << D.inches << " inch";
        return output;
    }

    friend istream /* input stream */ &operator >> (istream &input, Height &D) {
        input >> D.feet >> D.inches;
        return input;
    }
};

int main() {
    Height D1(5, 10), D2(5, 11), D3;
    cout << "First height: " << D1 << endl; 
    cout << "Second height: " << D2 << endl; 
    cout << "Enter third height: " << endl;
    cin >> D3; 
    cout << "Third height: " << D3 << endl; 
    return 0;
}
