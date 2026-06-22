/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 22 Jun 2026
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT
 */

/* factorial using loop */

#include <iostream>
using namespace std;

class fact {
    int inp, a = 1, i;

public:
    void input();
    void calc();
    void output();
};

void fact::input() {
    cout << "enter the number :";
    cin >> inp;
}

void fact::calc() {
    for (i = 1; i <= inp; i++) {
        a = a * i;
    }
}

void fact::output() {
    cout << "factorial : " << a;
}

int main() {
    fact z;
    z.input();
    z.calc();
    z.output();
    return 0;
}