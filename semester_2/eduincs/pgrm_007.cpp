/* Right a program to calculate sum and product of array elements. */

#include <iostream>
using namespace std;

class ArrayOperations {
    private:
        int *arr;
        int n;

    public:
        int i;
        ArrayOperations(int size) {
            n = size;
            arr = new int[n];
        }

        void getData() {
            for (i = 0; i < n; i++) {
                cout << "Enter element " << i + 1 << ": ";
                cin >> arr[i];
            }
        }

        int add() {
            int sum = 0;
            for (i = 0; i < n; i++) {
                sum += arr[i];
            }
            return sum;
        }

        long product() {
            long prod = 1;
            for (i = 0; i < n; i++) {
                prod *= arr[i];
            }
            return prod;
        }

        void display() {
            cout << "sum = " << add() << endl;
            cout << "product = " << product() << endl;
        }

        ~ArrayOperations() {
            delete[] arr;
        }
};

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    ArrayOperations ao(n);
    ao.getData();
    ao.display();
    return 0;
}
