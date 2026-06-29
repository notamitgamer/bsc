/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 29 Jun 2026
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT
 */

/* Write a program to calculate area and circumference of a circle. */

#include<iostream>
#include<cmath>
using namespace std;

class circle {
    private: 
        double r, radius;

    public: 
        circle(double r) {
            setRadius(r);
        }
        ~circle() {};

        void setRadius(double r) {
            if(r >= 0) radius = r;
            else radius = 0;
        }

        double getRadius() {
            return radius;
        }

        double area() {
            return M_PI * radius * radius;
        }

        double cir() {
            return 2 * M_PI * radius;
        }
};

int main() {
    circle c(5);
    cout << "Radius: " << c.getRadius() << endl;
    cout << "Area: " << c.area() << endl;
    cout << "Circumference: " << c.cir() << endl;
    return 0;
}