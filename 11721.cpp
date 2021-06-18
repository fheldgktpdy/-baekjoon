#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main() {
	string khu;
	cin >> khu;
	int len = khu.length();
	int k = len / 10;
	for (int i = 0; i < k; i++)
		cout << khu.substr(i*10, 10)<<'\n';
	cout << khu.substr(k * 10);

}