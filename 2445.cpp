#include<iostream>
using namespace std;

int main() {
	int k;
	cin >> k;
	for (int i=1; i<= k; i++) {
		for (int first = 1; first <= i; first++)
			std::cout << "*";
		for(int second=2*k-2*i; second>0; second--)
			std::cout << " ";
		for(int third=1; third<=i; third++)
			std::cout << "*";
		std::cout << '\n';
	}
	for (int i = 1; i < k; i++) {
		for (int first = i; first < k; first++)
			std::cout << "*";
		for(int second = 0; second< 2*i; second++)
			std::cout << " ";
		for (int third = i; third <k; third++)
			std::cout << "*";
		std::cout << '\n';
	}
	

}
