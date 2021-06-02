#include <iostream>
#include <string>
#include <vector>
#include<cmath>
#include<sstream>


/* 생성자 4개 필요 0 ~ 4,294,967,295*/
class BigUnsigned {
	std::vector<int>bu;
public:
	BigUnsigned(){}

	BigUnsigned(int n) {
		input(n);
	}

	BigUnsigned(BigUnsigned &t, int n){
		t.bu.clear();
		input(n);
	}

	BigUnsigned(std::string n) {
		BigUnsigned s;
	


	}

  std::vector<int> input(int n) {
	std::vector<int>k = {};
	while (n != 0) {
		k.push_back(n % 10);
		n /= 10;
		}
	for (int i = k.size()-1; i >=0; i--) {
		bu.push_back(k[i]);
	}

	return bu;
	}





friend BigUnsigned operator+(const BigUnsigned& a, const BigUnsigned& b);
friend std::ostream& operator<<(std::ostream& os, const BigUnsigned& x);

};


BigUnsigned operator+(const BigUnsigned& a, const BigUnsigned& b) {
	BigUnsigned q;
	int num1=0, num2=0;
	int mul1 = 1, mul2 = 1;
	for (int i = a.bu.size() - 1; i >= 0; i--) {
		num1+=a.bu[i] * mul1;
		mul1 *= 10;
	}
	for (int i = b.bu.size() - 1; i >= 0; i--) {
		num2 += b.bu[i] * mul2;
		mul2 *= 10;
	}

	int finals = num1 + num2;
	std::vector<int>k = {};
	while (finals != 0) {
		k.push_back(finals % 10);
		finals /= 10;
	}
	for (int i = k.size() - 1; i >= 0; i--) {
		q.bu.push_back(k[i]);
	}

	return q;


}

std::ostream& operator<<(std::ostream& os, const BigUnsigned& x) {
	for (int i = 0; i < x.bu.size(); i++)
		os << x.bu[i];
	return os;
}
	
int main() {
	BigUnsigned kim(12345);
	BigUnsigned park(54321);
	BigUnsigned z(2017101322);
	std::cout << z;
	std::cout << kim + park;
}

/*1. BigUnsigned라는 큰 부호없는 정수 유형을 작성하십시오. BigUnsigned 객체는 임의의 정밀도로 부호없는 정수를 나타냅니다. 즉, 표준 C ++ 부호없는 정수 프리미티브와 달리
유형에서 BigUnsigned 객체는 필요한만큼 큰 부호없는 정수를 나타낼 수 있습니다. 달리
부동 소수점 유형, BigUnsigned 값은 모든 자릿수를 보유합니다.
내부적으로 BigUnsigned 클래스는 정수의 std :: vector를 보유해야합니다. 의 각 정수
벡터는 0, 1, 2, 3, 4, 5, 6, 7, 8 또는 9 중 하나입니다. 벡터의 각 요소는 한 자리의 숫자를 나타냅니다.
정수 내의 값; 예를 들어 내부 벡터에 다음 요소가 포함 된 경우
다음 순서 :
4,9,1,1,4,3,0,5
관련된 BigUnsigned 객체를 수학적 음이 아닌 정수로 해석합니다.
49,114,305.
BigUnsigned 클래스 구현은 다음 기능을 제공해야합니다.
• 클래스는 BigUnsigned를 초기화하는 인수를 허용하지 않는 생성자를 제공해야합니다.
개체의 벡터는 0과 같은 단일 요소를 포함합니다.
• 클래스는 부호없는 단일 정수를 허용하는 생성자를 제공해야합니다. 이 생성자
내부 벡터를 해당 요소로 채워야합니다.
매개 변수.
• 클래스는 BigUnsigned 인수를 허용하는 생성자를 제공해야합니다. 클라이언트 사용
이 생성자는 기존 BigUnsigned 개체에서 새 BigUnsigned 개체를 만듭니다.
• 클래스는 in teger를 나타내는 std :: string 객체를 허용하는 생성자를 제공해야합니다. 클라이언트는 값이 다음을 초과하는 큰 정수를 만들어야 할 때이 생성자를 사용합니다.
unsigned long long의 범위. 문자열 인수는 숫자 만 포함해야합니다.
• 클래스는 두 개를 추가하는 operator +라는 친구 함수에 대한 액세스를 제공해야합니다.
BigUnsigned 개체를 만들고 BigUnsigned 결과를 반환합니다.
• 클래스는 클라이언트를 허용하는 operator <<라는 친구 함수에 대한 액세스를 제공해야합니다.
내장 정수 유형만큼 쉽게 BigUnsigned 값을 인쇄합니다.*/

