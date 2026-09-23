/* WAP to display Fibonacci series (i) using recursion, (ii) using iteration. */

#include <iostream>
using namespace std;

class Fibonacci {
private:
    int n;

    int fibRecursive(int k) {
        if (k <= 0) return 0;
        if (k == 1) return 1;
        return fibRecursive(k - 1) + fibRecursive(k - 2);
    }

public:
    Fibonacci(int count) { n = count; }

    void displayRecursive() {
        cout << "Fibonacci (Recursive): ";
        for (int i = 0; i < n; i++) cout << fibRecursive(i) << " ";
        cout << endl;
    }

    void displayIterative() {
        cout << "Fibonacci (Iterative): ";
        if (n <= 0) { cout << endl; return; }
        int first = 0, second = 1;
        for (int i = 0; i < n; i++) {
            if (i == 0) cout << first << " ";
            else if (i == 1) cout << second << " ";
            else {
                int nextTerm = first + second;
                cout << nextTerm << " ";
                first = second;
                second = nextTerm;
            }
        }
        cout << endl;
    }
};

int main() {
    int n, choice;
    cout << "Enter number of terms: ";
    cin >> n;
    if (n < 0) { cout << "Invalid number of terms!\n"; return 0; }

    Fibonacci fib(n);
    while (true) {
        cout << "1.Recursive 2.Iterative -1.Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: fib.displayRecursive(); break;
            case 2: fib.displayIterative(); break;
            case -1: cout << "Exiting...\n"; return 0;
            default: cout << "Wrong choice.\n";
        }
    }
}