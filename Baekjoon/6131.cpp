#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int n;
	int count = 0;
	cin >> n;
	for (int i = 1; i <= 500; i++) {
		for (int q = 1; q <= i; q++)
			if (pow(i, 2) - pow(q, 2) == n) {
				count += 1;
			}
	}
	cout << count;
}