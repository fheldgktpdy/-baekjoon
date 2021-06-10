#include<iostream>
#include<vector>

using namespace std;

class aircon {
private:
	double ondo;
	bool onoff = false;
public:
	bool turnonandoff() {
		if (onoff == false) {
			onoff = true;
			cout << "전원을 켭니다";
		}
		else {
			onoff = false;
			cout << "전원을 끕니다";
		}
		return onoff;
	}

	void tempinput(double a) {
		ondo = a;
		cout << "온도 " << a << "를 입력하였습니다."<<endl;
		 
	}

	double tempreturn() {
		return ondo;
	}

	void tempoutput() {
		cout << "현재온도"<<ondo<<endl;
	}

	void tempup() {
		ondo += 1;
		cout << "온도 1도 증가!"<<endl;
	}

	void tempdown() {
		ondo -= 1;
		cout << "온도 1도 감소!" << endl;
	}
};


int main() {
	aircon a;
	a.turnonandoff();
	a.tempinput(20);
	a.tempup();
	a.tempdown();
	a.tempup();
	a.tempup();
	a.tempup();
	a.tempup();
	a.tempup();
	a.tempup();
	a.tempoutput();
	a.turnonandoff();
}