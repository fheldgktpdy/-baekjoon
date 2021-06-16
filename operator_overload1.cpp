#include<iostream>
#include<vector>
#include<fstream>

using namespace std;

class Point {
private : 
	int xpos, ypos;
public:
	Point(int x=0, int y=0) : xpos(x), ypos(y){}
	void ShowPosition() const {
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
	friend Point operator-(const Point& pos1, const Point& pos2);
	friend bool operator==(const Point& pos1, const Point& pos2);
	friend istream& operator>>(istream& os,  Point& pos);
	friend ostream& operator<<(ostream& os, const Point& pos);
	Point operator +=(Point pos1) {
		xpos += pos1.xpos;
		ypos += pos1.ypos;
		return *this;
	}
};

Point operator-(const Point& pos1, const Point& pos2) {
	Point pos3(pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos);
	return pos3;
}

bool operator==(const Point& pos1, const Point& pos2) {
	if (pos1.xpos == pos2.ypos && pos1.ypos == pos2.ypos)
		return true;
	else
		return false;
}

istream& operator>>(istream& os, Point& pos) {
	os >> pos.xpos >> pos.ypos;
	return os;
}

ostream& operator<<(ostream& os, const Point& pos) {
	os << '[' << pos.xpos <<", "<< pos.ypos << ']' << endl;
	return os;
}

int main() {
	Point x;
	cout << "x,y값을 입력해주세요";
	cin >> x;
	cout << x;
}




