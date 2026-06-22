/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 22 Jun 2026
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT
 */

/* sum of digits */

#include <iostream>
using namespace std;

class digitsum {
    int inp, a = 0, b = 0;

public:
    void input();
    void calc();
    void output();
};

void digitsum::input() {
    cout << "enter the number :";
    cin >> inp;
}

void digitsum::calc() {
    while (inp > 0) {
        a = inp % 10;
        b = b + a;
        inp = inp / 10;
    }
}

void digitsum::output() {
    cout << "sum of the digits : " << b << ".";
}

int main() {
    digitsum z;
    z.input();
    z.calc();
    z.output();
    return 0;
}