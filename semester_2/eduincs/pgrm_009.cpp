/*
 * Author: Amit Dutta <amitdutta4255@gmail.com> | Date: 10 Jul 2026
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT
 */

/* WAP in cpp to overload the following functions
    int max(int a, int b);
    int max(int a, int b, int c);
    float max(float a, float b);
*/

#include<iostream>
using namespace std;
class Maximum {
public:
    int max(int a, int b) {
        return (a > b) ? a : b;
    }
    
    int max(int a, int b, int c) {
        int m = a;
        if(m < b) m = b;
        if(m < c) m = c;
        return m;
    }

    float max(float a, float b) {
        return (a > b) ? a : b;
    }
};

int main() {
    Maximum obj;
    cout << "Between 10, 20: " << obj.max(10, 20) << endl;
    cout << "Between 10, 20, 30: " << obj.max(10, 20, 30) << endl;
    cout << "Between 11.5, 10.5: " << obj.max(11.5f, 10.5f) << endl;
    return 0;
}