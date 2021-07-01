#include <iostream>
#include <vector>
#include<cstring>

using namespace std;

int main() {
	int n;
	int cownum;
	int cowpos;
	int sum=0;
	vector<int>vec(11,9);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> cownum >> cowpos;
		if (vec[cownum] == 9) {
			vec[cownum] = cowpos;
		}
		else {
			if (vec[cownum] == cowpos)
				continue;
			else {
				sum += 1;
				vec[cownum] = cowpos;
			}
		}
	}
	cout << sum;
}