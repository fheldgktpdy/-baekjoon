#include <iostream>
#include <vector>
#include<cstring>

using namespace std;

int main() {
	int n;
	cin >> n;
	int sum = n;
	
	for(int i = 0; i < n; i++) {
		bool cham = true;
		string a;
		cin >> a;
		if (a.length() == 1)
			continue;
		else {
			for (int k = 0; k < a.length() - 1; k++) {
				for (int j = k + 1; j < a.length(); j++) {
					if (a[k] == a[j] && a[j - 1] != a[j]) {
						sum -= 1;
						cham = false;
						break;
					}
				}
				if (cham == false)
					break;
			}
		}
	}
	cout << sum << '\n';
}