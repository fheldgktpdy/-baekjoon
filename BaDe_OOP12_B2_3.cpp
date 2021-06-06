#include <iostream>
#include <string>
#include <vector>
#include<cmath>
#include<sstream>

class Base {
	std::vector<int> b;
public:
	Base(int n) : b(n) {
		std::vector<int> b(n);
	};
	virtual void print() {
		std::cout << b.size()<<std::endl;
	}
	virtual void setN(int a, int t) {
		int k = b.size();
		if (a < k)
			b[a] = t;
		
	}
	virtual void printData() {
		for (int i = 0; i < b.size(); i++)
			std::cout << b[i]<<std::endl;
	}
};

class Derived : public Base {
	std::vector<int>d;
public:
	Derived(int n) : Base(n),d(n) {
		std::vector<int>d(n);
	};
	virtual void print() {
		std::cout << d.size() << std::endl;
	}
	virtual void setN(int a, int t) {
		int k = d.size();
		if (a < k)
			d[a] = t;

	}
	virtual void printData() {
		for (int i = 0; i < d.size(); i++)
			std::cout << d[i] << std::endl;
	}
	void insert(int n) {
		d.push_back(n);
	}
};


int main() {
	Base b1(2), b2(10);

	b1.print();		// 2
	b2.print();		// 10
	for (int i = 0; i < 5; i++) {
		b1.setN(i, (i + 1) * 20);
		b2.setN(i, (i + 1) * 10);
	}
	b1.printData();  // 20 40
	b2.printData();  // 10 20 30 40 50 0 0 0 0 0

	Derived d(5);
	d.print();		// 5
	d.printData();		// 0 0 0 0 0
	for (int i = 0; i < 10; i++) {
		d.setN(i, (i + 1) * 3);
	}
	d.printData();	// 3 6 9 12 15
	d.insert(99);	// "Base" class does not have "insert" method.
	d.printData();	// 3 6 9 12 15 99


}
