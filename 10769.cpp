#include <iostream>
#include <cstring>
#include<string>
#include <vector>
#include<queue>

using namespace std;
int main()
{
	string t;
	getline(cin, t);
	int sum1 = 0;
	int sum2 = 0;
	for (int i = 0; i < t.length(); i++) {
		if (t[i] == ':' && t[i + 1] == '-' && t[i + 2] == ')')
			sum1 += 1;
		else if (t[i] == ':' && t[i + 1] == '-' && t[i + 2] == '(')
			sum2 += 1;
	}
	if (sum1 > sum2)
		cout << "happy";
	if (sum1 == sum2) {
		if (sum1 == 0 && sum2 == 0)
			cout << "none";
		else
			cout << "unsure";
	}
	if (sum1 < sum2)
		cout << "sad";

}