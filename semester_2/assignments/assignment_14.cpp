#include <iostream>
using namespace std;

class MathOperations {
private:
    int num;

    long long factorialRecursive(int n) {
        if (n <= 1) return 1;
        return n * factorialRecursive(n - 1);
    }

    void factorsRecursive(int n, int divisor) {
        if (divisor > n) return;
        if (n % divisor == 0) cout << divisor << " ";
        factorsRecursive(n, divisor + 1);
    }

public:
    MathOperations(int n) { num = n; }

    void calculateFactorialRecursive() {
        if (num < 0) { cout << "Not defined for negative numbers.\n"; return; }
        cout << "Factorial (Recursive): " << factorialRecursive(num) << endl;
    }

    void calculateFactorialIterative() {
        if (num < 0) { cout << "Not defined for negative numbers.\n"; return; }
        long long fact = 1;
        for (int i = 2; i <= num; i++) fact *= i;
        cout << "Factorial (Iterative): " << fact << endl;
    }

    void computeFactorsRecursive() {
        if (num <= 0) { cout << "Factors need a positive integer.\n"; return; }
        cout << "Factors (Recursive): ";
        factorsRecursive(num, 1);
        cout << endl;
    }

    void computeFactorsIterative() {
        if (num <= 0) { cout << "Factors need a positive integer.\n"; return; }
        cout << "Factors (Iterative): ";
        for (int i = 1; i <= num; i++) if (num % i == 0) cout << i << " ";
        cout << endl;
    }
};

int main() {
    int n, choice;
    cout << "Enter a number: ";
    cin >> n;
    MathOperations op(n);

    while (true) {
        cout << "1.Factorial(Recursive) 2.Factorial(Iterative) "
             << "\n3.Factors(Recursive) 4.Factors(Iterative) 0.Change Number -1.Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: op.calculateFactorialRecursive(); break;
            case 2: op.calculateFactorialIterative(); break;
            case 3: op.computeFactorsRecursive(); break;
            case 4: op.computeFactorsIterative(); break;
            case 0: cout << "Enter new number: "; cin >> n; op = MathOperations(n); break;
            case -1: cout << "Exiting...\n"; return 0;
            default: cout << "Wrong choice.\n";
        }
    }
}