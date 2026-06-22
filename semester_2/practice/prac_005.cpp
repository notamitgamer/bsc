/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 22 Jun 2026
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT
 */

/* check prime or not */

#include <iostream>
using namespace std;

class ponp {
    int input, i;

public:
    void getinput();
    void calcdisp();
};

void ponp::getinput() {
    cout << "please enter the value : ";
    cin >> input;
}

void ponp::calcdisp() {
    if (input <= 1) {
        cout << "This is not a prime number.";
        return;
    }

    for (i = 2; i <= input / 2; i++) {
        if (input % i == 0) {
            cout << "this is not a prime number.";
            return;
        }
    }
    cout << "prime";
}

int main() {
    ponp z;
    z.getinput();
    z.calcdisp();
    return 0;
}