#include <iostream>
#include <string>
using namespace std;

template <typename T, typename U>
class MyClass {
public:
    T m_val1;
    U m_val2;

    MyClass(T val1, U val2) {
        m_val1 = val1;
        m_val2 = val2;
    }

    MyClass() : m_val1{}, m_val2{} {}
};

int main() {
    MyClass<int, string> myobj(5, "Hello");
    cout << myobj.m_val1 << " " << myobj.m_val2 << endl;
    MyClass<int, string> myobj2;
    cout << myobj2.m_val1 << " " << myobj2.m_val2 << endl;
    return 0;
}
