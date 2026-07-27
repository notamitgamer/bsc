/*
 * Author: Amit Dutta <amitdutta4255@gmail.com>
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT
 */
/* `this` pointer */

#include<iostream>
using namespace std;
class myclass {
private:
	int value1;
	int value2;
public: 
	void setValue(int v, int value2) {
		this -> value1 = v;
		this -> value2 = value2;
	}
	void printValue() {
		cout << "Value1: " << this -> value1 << endl;
		cout << "Value2: " << this -> value2;
	}
};

int main() {
	myclass obj;
	obj.setValue(23, 123);
	obj.printValue();
	return 0;
}
