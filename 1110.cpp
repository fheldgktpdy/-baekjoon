#include <iostream>
#include <cstring>
#include<string>
#include <vector>
#include<queue>

using namespace std;



int main()
{
	int n;
	cin >> n;
	vector<int>vec;
	vec.push_back(n);
	while (true) {
		if (0 <= n && n < 10) {
			if (n * 10 + n == vec[0]) {
				break;
			}
			else {
				n = n * 10 + n;
				vec.push_back(n);
			}
		}
		else if (10 <= n && n <= 99) {

			int k = (n % 10 + n / 10) % 10; //새로운 수 더한 값
			int g = (n % 10) * 10; //기존 수의 1의자리
			if (g + k == vec[0]) {
				break;
			}
			else {
				n = g + k;
				vec.push_back(n);
			}
		}
	}
	cout << vec.size();


}