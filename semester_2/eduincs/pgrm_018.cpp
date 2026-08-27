/* Operator overloading */

#include<iostream>
using namespace std;
class complex {
private: 
    int real;
    int img;
public: 
    complex(float r = 0, float i = 0) {
        real = r; img = i;
    }

    // overloading the `+` operator
    complex operator +(const complex &obj) {
        complex temp;
        temp.real = real + obj.real;
        temp.img = img + obj.img;
        return temp;
    }

    complex add_complex(const complex &obj) {
        complex temp;
        temp.real = real + obj.real;
        temp.img = img + obj.img;
        return temp;
    }

    void output() {
        cout << "Complex number: " << real << "+" << img << "i" << endl;
    }
};

int main() {
    complex complex1(10, 20), complex2(20, 30), result;
    cout << "First complex number: ";
    complex1.output();
    cout << "Second complex number: ";
    complex2.output();
    cout << "After addition: ";
    result = complex1 + complex2;
    result.output();
    cout << "After addition: ";
    result = complex1.add_complex(complex2);
    result.output();
    return 0;
}
