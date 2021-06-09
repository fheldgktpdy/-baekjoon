#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

class Food {

public:
	double Price;
	int Cal;

	int init() {};
	double ComputePirce(double a) {};
	void Print() {};
};


class Burger : public Food {
	string patty;
	int cheese;
	double discount;
public:
	Burger(string a, int b, double c) : patty(a),cheese(b),discount(c){}
	Burger(string a, int b) : patty(a), cheese(b),discount(0) {}
	Burger(string a) : patty(a),cheese(0),discount(0) {}

	int init() {
		Cal = 0;
		if (patty == "beef") {
			Cal += 200;
			Cal += cheese * 100;
		}
		else if (patty == "chicken") {
			Cal += 300;
			Cal += cheese * 100;
		}
		return Cal;

	}
	double ComputePrice() {
		Price = 0;
		if (patty == "beef") {
			Price += 3000;
			Price += cheese * 300;
		}
		else if (patty == "chicken") {
			Price += 2000;
			Price += cheese * 300;
		}
		Price = Price * (1-discount);
		return Price;
	}

	void Print() {
		cout << patty << "  burger   " << init() << "  칼로리   " << ComputePrice() << "   Won"<<endl;
	}
};

class Coffee : public Food {
	string size;
	int shot;
	string milk;
	double discount;
public:
	Coffee(string a, int b, string c = "None",double d=0) : size(a), shot(b), milk(c), discount(d) {}

	int init() {
		Cal = 0;
		int Amount = 0;
		if (size == "short") {
			Amount += (200 - shot*30);
			if (milk == "regular") {
				Cal = Amount * 2 + shot * 3;
			}
			else if (milk == "lowfat") {
				Cal = Amount * 1 + shot * 3;
			}
			else
				Cal = shot * 3;
		}
		if (size == "tall") {
			Amount += (300 - shot * 30);
			if (milk == "regular") {
				Cal = Amount * 2 + shot * 3;
			}
			else if (milk == "lowfat") {
				Cal = Amount * 1 + shot * 3;
			}
			else
				Cal = shot * 3;
		}
		if (size == "grande") {
			Amount += (400 - shot * 30);
			if (milk == "regular") {
				Cal = Amount * 2 + shot * 3;
			}
			else if (milk == "lowfat") {
				Cal = Amount * 1 + shot * 3;
			}
			else
				Cal = shot * 3;
		}
		return Cal;
	}
	
	double ComputePrice(){
		if (milk == "None") {
			if (size == "short") {
				if (shot > 1)
					Price = (2500 + (shot - 1) * 500);
				else
					Price = 2500;
			}
			else if (size == "tall") {
				if (shot > 2)
					Price = (3000 + (shot - 2) * 500);
				else
					Price = 3000;
			}
			else
				if (shot > 3) 
					Price = (3500 + (shot - 3) * 500);
				else
					Price = 3500;
				
		}
		if (milk != "None") {
			if (size == "short") {
				if (shot > 1)
					Price = (3000 + (shot - 1) * 500);
				else
					Price = 3000;
			}
			else if (size == "tall") {
				if (shot > 2)
					Price = (3500 + (shot - 2) * 500);
				else
					Price = 3500;
			}
			else
				if (shot > 3) 
					Price = (4000 + (shot - 3) * 500);
				else
					Price = 4000;
		}
		return Price;

	}

	void Print(){
		if (milk == "None")
			cout << "Americano  " << size <<"   "<< init() << "칼로리   " << ComputePrice() << "Won   "<<endl;
		else
			cout << "Cafelatte  " << size << "   "<< init() << "칼로리   " << ComputePrice() << "Won   "<<endl;
	}

};

int main() {
	Burger Mac("chicken", 3, 0.9);
	Mac.Print();
	Coffee chungja("tall", 2, "regular", 0.1);
	chungja.Print();
}


