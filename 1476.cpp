#include <iostream>
#include <vector>
#include<cstring>

using namespace std;

int main() {
	int E, S, M;
	cin >> E >> S >> M;
	int sum = 0;
	int e = 0;
	int s = 0;
	int m = 0;
	if (E == S && E == M)  //E,S,M이 한바퀴를 돌기 전, 같아질 경우.
		cout << E;
	else {
		while (1) {        //E,S,M이 한바퀴 돌때마다 0으로 초기화.
			if (e == 15)
				e = 0;
			if (s == 28)
				s = 0;
			if (m == 19)
				m = 0;
			e += 1;
			s += 1;
			m += 1;
			sum += 1;
			if (E == e && S == s && M == m) {
				cout << sum;
				break;
			}
		}
		
	}
}