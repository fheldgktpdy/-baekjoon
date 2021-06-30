#include <iostream>
#include <vector>
#include<cstring>

using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[10] = { 0 };
	int gori;
	int max = 0;

	if (n == 0)
		cout << 1;
	else {
		while (n > 0) {
			gori = n % 10;
			arr[gori] += 1;
			n = n / 10;
		}

		int sixn = arr[6];
		int ninen = arr[9];
		int k = (sixn + ninen);
		if (k % 2 != 0)
			k += 1;

		for (int i = 0; i < 10; i++) {
			if (i == 6 || i == 9)
				continue;
			else {
				if (max <= arr[i])
					max = arr[i];
			}
		}

		if (max > k / 2)
			cout << max;
		else
			cout << k / 2;
	}
}