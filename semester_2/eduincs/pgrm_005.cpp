/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 29 Jun 2026
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT
 */

/* Write a program to calculate area and perimeter of a rectangle. */

#include<iostream>
using namespace std;

class rectangle {
    private: 
        double len, bre;
    public: 
        rectangle() {
            len = 0;
            bre = 0;
        }

        void getData() {
            cout << "Enter the length: ";
            cin >> len;
            cout << "Enter the breadth: ";
            cin >> bre;
        }

        double getArea() {
            return len * bre;
        }

        double getPeri() {
            return 2 * (len + bre);
        }

        void display() {
            cout << "Area: " << getArea() << endl;
            cout << "Perimeter: " << getPeri();
        }
        
        ~rectangle() {}
};

int main() {
    rectangle rec;
    rec.getData();
    rec.display();
    return 0;
}