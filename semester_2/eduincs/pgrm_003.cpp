/* class - object */

#include<iostream>
using namespace std;

class person {
    public:
        int age;
        string name;

        void setName(string n) {
            name = n;
        }

        void setAge(int a) {
            age = a;
        }
};

int main() {
    person p;
    p.setName("Amit Dutta");
    p.setAge(19);
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age;
    return 0;
}
