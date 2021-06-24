#include <iostream>
#include <cstring>
#include<string>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int a, b;
	cin >> a >> b;
	vector<int>vec;
	int t = 1;
	while (true) {
		
		for (int i = 0; i < t; i++) {
			vec.push_back(t);
		}
		t++;
		if (t == 45) {
			for (int k = 0; k < 10; k++) {
				vec.push_back(45);
			}
			break;
		}
	}
	int sum = 0;
	for (int q = a-1; q <= b-1; q++) {
		sum += vec[q];
	}
	cout << sum;
}