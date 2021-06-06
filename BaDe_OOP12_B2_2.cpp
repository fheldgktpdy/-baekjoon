#include <iostream>
#include <string>
#include <vector>
#include<cmath>
#include<sstream>

class Base {
private:
	int b;
public: Base(int n) : b(n) {
	b = n;};
	  virtual void print() const {
		  std::cout << b<<std::endl;
	  }
	  int Num1() const { return b; }
};

class Derived : public Base{
private:
	int d;

public: Derived(int x, int y) : Base(x), d(y) {
	d = y;
};
	  void print() const {
		  std::cout <<  Num1()<<','<< d<<'\n';
	  }
	 
	  int Sum() const {
		  return Num1() + d;
	  }
};

bool operator<(Derived c, Derived d) {
	bool t = false;
	if (c.Sum() < d.Sum()) {
		t = true;
	}
	return t;
}

int main() {
	// All data members of Base and Derived classes must be declared 
	// as private access types
	Base* p1 = new Derived(10, 20);		// (x, y)
	Base* p2 = new Base(5);			// (x) 
	p1->print();			// prints 10, 20
	p1->Base::print();		// prints 10
	p2->print(); 			// prints 5
	Derived* p3 = dynamic_cast<Derived*>(p1);
	if (p3 != nullptr) p3->print();			// prints 10, 20
	const Base b1 = *p2;
	b1.print();				// prints 5

	Derived d1(1, 3), d2(2, 4);
	Derived d3 = (d1 < d2) ? d1 : d2;	// operator <: (d1.x+d1.y) < (d2.x+d2.y)
	d3.print();				// prints 1, 3

}