#include<iostream>
#include<cmath>
#include<vector>

using namespace std;


int main() {
	int N, M;
	cin >> N >> M;
	vector<int>vec(N);
	for (int k = 0; k < N; k++) {
		vec[k] = k + 1;
	}
	for (int i = 0; i < M; i++) {
		int a;
		int b;
		int temp;
		cin >> a >> b;	
		temp = vec[a-1];
		vec[a-1] = vec[b-1];
		vec[b-1] = temp;

	}
	for (int g = 0; g < N; g++) {
		cout << vec[g]<<" ";
	}


}