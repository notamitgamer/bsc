/* Write a program using recursion to calculate GCD of two numbers and display Fibonacci series upto n terms. */

#include<iostream>
using namespace std;

template <class T>
class recursionOps {
public:
    recursionOps() {}

    T gcd(T a, T b) {
        if(b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }

    int fib(int n) {
        if(n <= 1) {
            return n;
        }
        return fib(n - 1) + fib(n - 2);
    }

    void displayFib(int count) {
        cout << "\nFibonacci series: ";
        for(int i = 0; i < count; i++) {
            cout << fib(i) << "  ";
        }
    }

    ~recursionOps() {}
};

int main() {
    recursionOps<int> obj;
    int a, b, n;

    cout << "Enter two numbers for GCD: ";
    cin >> a >> b;
    cout << "GCD is: " << obj.gcd(a, b);

    cout << "\n\nEnter number of Fibonacci terms: ";
    cin >> n;
    obj.displayFib(n);

    return 0;
}
