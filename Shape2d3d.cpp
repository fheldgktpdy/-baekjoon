#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

class Shape {
public:

	static double PI ;
	virtual double areaCal() = 0;
	virtual void Print() = 0;
};

class TwoDimensional : public Shape {

public:
	double areaCal() override {
		return 1;
	}
	void Print() override {
		cout << areaCal();
	}
};

class Triangle : public TwoDimensional {
	double width;
	double height;
public:
	Triangle(double a, double b)  : width(a), height(b){}
	double areaCal() {
		return width * height ;
	}
};

class Rectangle : public TwoDimensional {
	double width;
	double height;
public:
	Rectangle(double a, double b) : width(a), height(b)  {}
	double areaCal() {
		return width * height;
	}
};

class Circle : public TwoDimensional {
	double radius;
public:
	double PI = 3.14;
	Circle(double a) : radius(a) { }
	double areaCal() {
		return radius * radius * PI;
	}
};



class ThreeDimensional : public Shape {

public:
	double areaCal() override {
		return 1;
	}
	void Print() override {
		cout << areaCal();
	}
};

class Cube : public ThreeDimensional {
	double garo;
	double sero;
	double nopi;
public:
	Cube(double a, double b, double c) : garo(a), sero(b), nopi(c){}
	double areaCal() override{
		return  garo * sero * nopi;
	}
};


class Sphere : public ThreeDimensional {
	double radius;
public:
	double PI = 3.14;
	Sphere(double a) :  radius(a) {}
	double areaCal() override{
		return  (4/3)*radius*radius*radius*PI;
	}
};

int main() {
	Circle a(4);
	a.Print();

	Rectangle b(4, 5);
	b.Print();

	Cube d(1, 2, 3);
	d.Print();

}