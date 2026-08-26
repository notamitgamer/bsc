/* Function Overloading. */

#include <iostream>
using namespace std;

class Addition {
    public:
        int add(int a, int b) {
            return a + b;
        }
        int add(int a, int b, int c) {
            return a + b + c;
        }
        float add(float a, float b) {
            return a + b;
        }
};

int main() {
    Addition obj;
    cout << "10 + 20 : " << obj.add(10, 20) << endl;
    cout << "10 + 20 + 30 : " << obj.add(10, 20, 30) << endl;
    cout << "12.5 + 10.5 : " << obj.add(10.5f, 12.5f) << endl;
    return 0;
}
