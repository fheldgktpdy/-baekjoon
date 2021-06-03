#include <iostream>
#include <string>
#include <vector>
#include<cmath>
#include<sstream>

using namespace std;

class Point {
private:
	int xpos, ypos;
public:
	void Init(int x, int y) {
		xpos = x;
		ypos = y;
	}

	void ShowPointInfo() const
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};

class Circle {
private:
	Point middle;
	double radius;
public:
	void Init(int x, int y, double z) {
		middle.Init(x, y);
		radius = z;
	}
	void ShowCircleInfo() {
		cout << "반지름" << radius;
		cout << "원의 중심";
		middle.ShowPointInfo();
	}
};

class Ring {
private:
	Circle in;
	Circle out;

public:
	void Init(int a, int b, double c, int d, int e, double f) {
		in.Init(a, b, c);
		out.Init(d, e, f);
	}
	void ShowRingInfo() {
		std::cout << "Inner circle" << endl;
		std::cout << "radius : ";
		in.ShowCircleInfo();
		std::cout << "Outer circle" << endl;
		std::cout << "radius : ";
		out.ShowCircleInfo();

	}

};

int main() {
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
}