/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 22 Jun 2026
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT
 */

/* sum of natural numbers upto n */

#include <iostream>
using namespace std;

class add {
    int inp, i, a = 0;

public:
    void input();
    void calc();
    void output();
};

void add::input() {
    cout << "enter the number : ";
    cin >> inp;
}

void add::calc() {
    for (i = 1; i <= inp; i++) {
        a = a + i;
    }
}

void add::output() {
    cout << "Addtion = " << a;
}

int main() {
    add z;
    z.input();
    z.calc();
    z.output();
    return 0;
}