#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main() {
	vector<int> vec;
	int sum=0;
	for (int i = 0; i < 10; i++) {
		int t;
		cin >> t;
		vec.push_back(t);
	}
	for (int k = 0; k < vec.size(); k++) {
		sum += vec[k];
		if (sum == 100) {
			cout << sum;
			break;
		}
		else if (sum > 100) {
			if (sum - vec[k] < 100) {
				if (100 - (sum - vec[k]) < sum - 100) {
					cout << sum - vec[k];
					break;
				}
				else {
					cout << sum;
					break;
				}
			}
		}
	}
	if (sum < 100)
		cout << sum;
}