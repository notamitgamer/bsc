/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 22 Jun 2026
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT
 */

/* design a class circle.take radius as input, calculate the area */

#include <iostream>
using namespace std;

class circle {
    int radius, area;

public:
    int input();
    int calculation();
    int output();
};

int circle::input() {
    cout << "\nEnter the radius of the circle : ";
    cin >> radius;
}

int circle::calculation() {
    area = 3.14159 * radius * radius;
}

int circle::output() {
    cout << "\nThe area of the circle is : " << area;
}

int main() {
    circle z;
    z.input();
    z.calculation();
    z.output();
    return 0;
}