#include <iostream>
#include <cstring>
#include<string>
#include <vector>
#include<queue>

using namespace std;
int main()
{

	int cakelen  = 0;
	int popnum = 0;

	int diff = 0;
	int num = 0;
	cin >> cakelen;
	cin >> popnum;
	vector<int>vec(cakelen+1);

	int twosum = 0;
	int threesum = 0;

	for (int i = 1; i <= popnum; i++) {
		int p = 0;
		int k = 0;
		cin >> p >> k;
		if (diff < k - p) {
			diff = k - p;
			num = i;
		}
		for (int q=p; q <= k; q++){
			if (vec[q] == 0)
				vec[q] = i;
			else
				continue;
		}
	}

	for (int i = 1; i <= popnum; i++) {
		int sum = 0;
		for (int q = 1; q < vec.size(); q++) {
			
			if (vec[q] == i) {
				sum += 1;
			}
			else if (vec[q] == 0)
				continue;
		}
		if (sum > twosum) {
			twosum = sum;
			threesum = i;
		}

	}
	cout << num << '\n'<<threesum;
}