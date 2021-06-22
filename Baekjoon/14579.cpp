#include<iostream>
using namespace std;

int sumd(int k) {
	int sum = 0;
	for (int z = 1; z <= k; z++) {
		sum += z;
	}
	return sum;
}

int main() {
	int a, b;
	int g = 1;
	cin >> a >> b;
	int i;
	for (i = a; i <= b; i++) {
		g  = g* sumd(i);
		g = g % 14579;
	}
	if(a<b && a>=1 && b<=1000)
		cout << g ;
}

