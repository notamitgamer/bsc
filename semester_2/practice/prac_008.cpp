/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 22 Jun 2026
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT
 */

/* number reverse */

#include <iostream>
using namespace std;

class rev {
    int inp, a = 0, b = 0;

public:
    void input();
    void calc();
};

void rev::input() {
    cout << "enter the number to reverse : ";
    cin >> inp;
    a = inp;
}

void rev::calc() {
    while (inp != 0) {
        a = inp % 10;
        b = b * 10 + a;
        inp = inp / 10;
    }
    cout << b;
}

int main() {
    rev z;
    z.input();
    z.calc();
    return 0;
}