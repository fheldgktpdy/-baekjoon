#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

#pragma warning(disable:4996)

/* 참조자 생성자 연습*/
class AAA
{
public:
	AAA() {
		cout << "empty object" << endl;
	}
	void ShowYourName() {
		cout << "I'm class AAA" << endl;
	}
};

class BBB
{
private:
	AAA& ref;
	const int& num;
public:
	BBB(AAA& r, const int& n) : ref(r), num(n) {}
	void ShowYourName() {
		ref.ShowYourName();
		cout << "and" << endl;
		cout << "I ref num" << num << endl;
	}

};

/*destructor, char형 parameter*/
class Person {
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	void ShowPersonInfo() const {
		cout << "이름" << name << endl;
		cout << "나이" << age << endl;
	}
	~Person() {
		delete[]name;
		cout << "destructor의 공격!" << endl;
	}
};

int main(void) {
	Person man1("Kim", 29);
	Person man2("Babo", 34);
	man1.ShowPersonInfo();
}

/*namespace, const char*/

namespace COMP_POS
{
	enum { CLERK, SENIOR, ASSIST, MANAGER };
	void ShowPositionInfo(int pos) {
		switch (pos) {
		case CLERK:
			cout << "사원" << endl;
			break;
		case SENIOR:
			cout << "주임" << endl;
			break;
		case ASSIST:
			cout << "대리" << endl;
			break;
		case MANAGER:
			cout << "과장" << endl;
			break;
		}
	}
}


class NameCard {
private:
	char* name;
	char* Cname;
	char* Pnumber;
	int level;
public:
	NameCard(const char* N, const char* C, const char* P, int L) :level(L) {
		int len1 = strlen(N) + 1;
		name = new char[len1];
		strcpy(name, N);

		int len2 = strlen(C) + 1;
		Cname = new char[len2];
		strcpy(Cname, C);

		int len3 = strlen(P) + 1;
		Pnumber = new char[len3];
		strcpy(Pnumber, P);

	}

	void ShowNameCardInfo() {
		cout << name << endl;
		cout << Cname << endl;
		cout << Pnumber << endl;
		COMP_POS::ShowPositionInfo(level);
	}

	~NameCard()
	{
		delete[]name;
		delete[]Cname;
		delete[]Pnumber;
	}
};

int main() {
	NameCard manclerk("HONG", "kakao", "010-3939-3030", COMP_POS::CLERK);
	manclerk.ShowNameCardInfo();
}


/*enum*/

enum class TextType{Plain, Fancy, Fixed};

class AltText {
	TextType type;
	std::string text;
	std::string left_bracket;
	std::string right_bracket;
	std::string connector;
public:
	AltText(TextType type, const std::string& t);
	AltText(TextType type, const std::string& t, const std::string& left,const std::string& right, const std::string& conn);
	AltText(TextType type);
	std::string get() const;
	void append(const std::string& extra);
};

AltText::AltText(TextType type, const std::string& t) : type(type), text(t) {}
AltText::AltText(TextType type, const std::string& t, const std::string& left, const std::string& right, const std::string& conn) : 
	type(type), text(t), left_bracket(left), right_bracket(right), connector(conn){}
AltText::AltText(TextType type) : type(type), text("Fixed"){}

std::string AltText::get() const {
	switch (type) {
	case TextType::Plain:
	case TextType::Fixed:
		return text;
	case TextType::Fancy:
		return left_bracket + text + right_bracket;
	default:
		return "UNKNOWN type";
	}
}

	void AltText::append(const std::string & extra) { 
	switch (type){
	 case TextType::Plain:
		text += extra; 
		break; 
	 case TextType::Fancy:
		text += connector + extra; 
		break; 
	 case TextType::Fixed:
		 break; 
	} 
}

	int main() {
		std::vector<AltText>texts{{TextType::Plain,"Wow"},
			{TextType::Fancy, "Wee", "[", "]", "-"},{TextType::Fixed},{TextType::Fancy, "Whoa", ":", ":", ":"} };
		for (auto t : texts)
			std::cout << t.get() << '\n';

}