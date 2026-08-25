/*
 * Author: Amit Dutta <amitdutta4255@gmail.com> | Date: 25 Aug 2026
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT
 */

/* Copy Constructor */

#include<iostream>
using namespace std;
class A {
private: 
	int x;
	double y;
public:
	A(int a, double b) {
		x = a; y = b;
	}
	A(A & ob) {
		// Copy constructor
		x = ob.x;
		y = ob.y;
	}
	void display() {
		cout << "x = " << x << " y = " << y << endl;
	}
};

int main() {
	A obj(20, 23.5);
	cout << "obj: ";
	obj.display();
	A obj2(obj);
	cout << "obj2: ";
	obj2.display();
	return 0;
}
