#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		string a;
		cin >> a;
		if (a.length() == 1)
			cout << a[0] << a[0] << '\n';
		else
			cout << a[0]<<a[a.length() - 1]<<'\n';
	}
}