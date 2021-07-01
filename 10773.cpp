#include <iostream>
#include <vector>
#include<cstring>

using namespace std;

int main() {
	int k;
	cin >> k;
	vector<int>vec;
	int sum = 0;
	for (int i = 0; i < k; i++) {
		int n;
		cin >> n;
		if (n == 0)
			vec.pop_back();
		else
			vec.push_back(n);
	}
	for (int g = 0; g < vec.size(); g++) {
		sum += vec[g];
	}
	cout << sum;
}