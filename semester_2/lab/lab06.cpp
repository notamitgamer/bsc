/* Write a program using recursion: (i) to find the sum of first n natural numbers. (ii) to compute the factors of a given number. */

#include<iostream>
using namespace std;

template <class T>
class fnRecursion {
public: 
    fnRecursion() {}

    T sumNatural(T num) {
        if(num == 1) {
            return num;
        }
        else {
            return num + sumNatural(num - 1);
        }
    }

    T factor(T num, int i = 1) {
        if(i == num) {
            cout << "  ";
            return num;
        }
        else {
            if(num % i == 0) {
                cout << "  " << i;
            }
            return factor(num, i+1);
        }
    }

    ~fnRecursion() {}
};

int main() {
    int n;
    cout << "Enter the number to get the sum: ";
    cin >> n;

    fnRecursion<int> obj;

    if(n < 1) {
        cout << n << " is not a natural number.";
    }
    else {
        cout << "Sum of first "<< n <<" natural numbers: " << obj.sumNatural(n);
    }

    cout << "\n\nEnter a non-zero positive number to get the factors: ";
    cin >> n;

    if(n < 1) {
        cout << "Input needs to be a non-zero positive number.\n";
    }
    else {
        cout << "Factors of " << n << " are:" << obj.factor(n) << "\n";
    }

    return 0;
}