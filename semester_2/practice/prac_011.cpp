/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 22 Jun 2026
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT
 */

/* average of elements */

#include <iostream>
using namespace std;

class avarage {
    int inp[100], sum = 0, n, i;
    float avg;

public:
    void input();
    void calculation();
    void output();
};

void avarage::input() {
    cout << "\nEnter the number of elements : ";
    cin >> n;
    i = 0;
    while (i < n) {
        cout << "\nEnter the element no " << i + 1 << " : ";
        cin >> inp[i];
        i++;
    }
}

void avarage::calculation() {
    i = 0;
    for (i = 0; i < n; i++) {
        sum = sum + inp[i];
    }
    avg = (float)sum / n;
}

void avarage::output() {
    i = 0;
    cout << "\nAvarage of the element ";
    for (i = 0; i < n; i++) {
        cout << "  " << inp[i];
    }
    cout << "   is : " << avg;
}

int main() {
    avarage z;
    z.input();
    z.calculation();
    z.output();
    return 0;
}