/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 18 Jun 2026
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT
 */

/* Tring to remember after a year. */

#include <iostream>
using namespace std;

int main() {
    int num, count = 0;
    cout << "Enter numbers one by one (enter -1 to stop):" << endl;

    cin >> num;
    while (num != -1) {
        count++;
        cin >> num;
    }

    cout << "Total numbers entered: " << count << endl;
    return 0;
}