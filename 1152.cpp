#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main() {
	string khu;
	getline(cin, khu);
	int count = 0;
	for (int i = 0; i < khu.length(); i++) {
		if (khu[i] == ' ')
			count++;
	}
	if (khu[0] == ' ')
		count--;
	if (khu.back() == ' ')
		count--;
	cout << ++count;
}