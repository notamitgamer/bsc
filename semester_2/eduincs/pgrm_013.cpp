/*
 * Author: Amit Dutta (amitdutta4255@gmail.com)
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT
 */
/* in-line and non-inline functions */

#include<iostream>
using namespace std;
class cuboid {
private: 
	float length, breadth, height;
public: 
	cuboid() {length = breadth = height = 0;}

	void getData();
	void display();

	//inline
	float volume() {
		return length * breadth * height;
	}

	//inline
	float surfaceArea() {
		return 2 * (length * breadth + breadth * height + height * length);
	}
};

// non inline
void cuboid :: getData() {
	cout << "Enter length, breadth and height: ";
	cin >> length >> breadth >> height;
}

// non inline
void cuboid :: display() {
	cout << "\nCuboid Details" << endl;
	cout << "length: " << length << endl;
	cout << "breadth: " << breadth << endl;
	cout << "Height: " << height << endl;
	cout << "Volume: " << volume() << endl;
	cout << "Surface Area: " << surfaceArea() << endl;
}

int main() {
	cuboid obj;
	obj.getData();
	obj.display();
	return 0;
}
