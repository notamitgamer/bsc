/* `friend` function */

#include<iostream> 
using namespace std;
class rectangle {
	int length, breadth;
public: 
	rectangle() {};
	rectangle(int l, int b) {length = l; breadth = b;}

	int area() {
		return length * breadth;
	}
	friend rectangle double_dimen(const rectangle &);
};

rectangle double_dimen(const rectangle &param) {
	rectangle res;
	res.length = param.length * 2;
	res.breadth = param.breadth * 2;
	return res;
}

int main() {
	rectangle obj;
	rectangle obj2(2, 3);
	cout << "Area of obj2: " << obj2.area() << endl;
	obj = double_dimen(obj2);
	cout << "After magnify: \nArea of obj: " << obj.area() << endl;
	return 0;
}
