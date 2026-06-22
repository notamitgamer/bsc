/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 22 Jun 2026
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT
 */

/* factorial */

#include <iostream>
using namespace std;

class fact {
    int inp, a, i;

public:
    void input();
    void calc();
    void diplay();
};

void fact::input() {
    cout << "enter the number :";
    cin >> inp;
    a = inp;
}

void fact::calc() {
    for (i = 1; i <= inp - 1; i++) {
        a = a * i;
    }
}

void fact::diplay() {
    cout << "Factorial " << a << ".";
}

int main() {
    fact z;
    z.input();
    z.calc();
    z.diplay();
    return 0;
}