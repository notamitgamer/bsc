/* operator overloading using friend function */

#include <iostream>
using namespace std;

class Complex {
private:
    int real, img;

public:
    Complex (int r = 0, int i = 0) {
        real = r; img = i;
    }

    friend Complex operator + (const Complex &obj1, const Complex &obj2);

    void output() {
        cout << "Complex number: " << real << " + " << img << "i";
    }
};

Complex operator + (const Complex &obj1, const Complex &obj2) {
    Complex temp;
    temp.real = obj1.real + obj2.real;
    temp.img = obj1.img + obj2.img;
    return temp;
}

int main() {
    Complex complex1(10, 20), complex2(20, 30), result;
    cout << "First complex number: " << endl;
    complex1.output();
    cout << endl << "Second complex number: " << endl;
    complex2.output();
    cout << endl << "After Addition: " << endl;
    result = complex1 + complex2;
    result.output();
    return 0;
}
