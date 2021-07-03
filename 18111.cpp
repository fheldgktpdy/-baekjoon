#include <iostream>
#include <vector>
#include<cstring>
#include<algorithm>

using namespace std;

int main() {
	int M, N, B; //가로 , 세로, 컨테이너 내부 블록의 개수
	int ground;
	vector<int>vec(25000);
	vector<int>daeso;
	vector<int>samevalue;
	int m = -1;  //가장많이 등장한값
	int index=0;  // m의 위치
	cin >> N>>M>>B;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> ground;
			daeso.push_back(ground);
			vec[ground] += 1;
		}
	}  //for문으로 세로, 가로 넣어주고 각각의 ground number를 벡터를 이용해 세주기.
	for (int u = 0; u < vec.size(); u++) {
		if (m < vec[u]) {
			m = vec[u];
			index = u;
			samevalue.clear();
			samevalue.push_back(u);
		}
		else if (m == vec[u]) {
			samevalue.push_back(u);
		}

	}	
	int sum_1 = 0;  //컨테이너 개수가 많은 경우, 상자를 더할 때
	int sumnum = 0;
	int sub_1 = 0;  //컨테이너 개수가 많은 경우, 상자를 뺄때
	int sum_2 = 0;  //컨테이너 개수가 부족한 경우
	for (int i = 0; i < daeso.size(); i++) {
		if (daeso[i] < index) {
			sum_1 += daeso[i];
			sumnum++;
		}
		else if (daeso[i] > index) {
			sub_1 += (daeso[i] - index) * 2;
		}
		else
			continue;
	}
	if (B >= sumnum)  //컨테이너 개수가 많은 경우
		cout << sumnum + sub_1 << " " << index; 
	else if(B<sumnum)   //컨테이너 개수가 부족한 경우
	{           
		sort(daeso.begin(), daeso.end());
		int b = daeso[0];
		for (int i = 0; i < daeso.size(); i++) {
			if (daeso[i] > b)
				sum_2++;
		}
		cout << sum_2*2 << " " << b;
	}
		
}

/*  이 경우는 어떻게?
1 1 1
2 2 2
3 3 3
*/