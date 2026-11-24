/* algo_090: Write a program using recursion: (i) to find the sum of first n natural numbers, and (ii) to compute the factors of a given number. */

#include<iostream>
using namespace std;

template <class T>
class fnRecursion {
public:
    fnRecursion() {}

    T sumNatural(T num) {
        if(num <= 1) {
            return num;
        }
        return num + sumNatural(num - 1);
    }

    void printFactors(T num, int i = 1) {
        if(i > num) {
            return;
        }
        if(num % i == 0) {
            cout << "  " << i;
        }
        printFactors(num, i + 1);
    }

    ~fnRecursion() {}
};

int main() {
    int n;
    fnRecursion<int> obj;

    cout << "Enter the number to get the sum: ";
    cin >> n;
    if(n < 1) {
        cout << n << " is not a natural number.";
    } else {
        cout << "Sum of first " << n << " natural numbers: " << obj.sumNatural(n);
    }

    cout << "\n\nEnter a positive number to get the factors: ";
    cin >> n;
    if(n < 1) {
        cout << "Please enter a positive integer.";
    } else {
        cout << "Factors of " << n << " are:";
        obj.printFactors(n);
    }
    cout << "\n";

    return 0;
}
