/* Default argument */

#include<iostream>
using namespace std;
class Interest {
public: 
    float simpleInterest(float p, float t = 5.0, float r = 1.0) {
        return (p * t * r) / 100;
    }
};

int main() {
    Interest obj;
    cout << "Principle only = " << obj.simpleInterest(10000) << endl;
    cout << "Principle and Time = " << obj.simpleInterest(10000, 8.0f) << endl;
    cout << "Principle, Time and Rate of Interest = " << obj.simpleInterest(10000, 8.0f, 5.0f) << endl;
    return 0;
}
